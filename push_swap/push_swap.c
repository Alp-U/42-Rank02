#include <stdio.h>
#include <string.h>
#include "libft.h"
#include "ft_printf.h"

/*********************Input handling******************* */

int	check_for_dups(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < ac -1)
	{
		j = i + 1;
		while (j < ac)
		{
			if (strcmp(av[i], av[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_for_num(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9') && !(*str == '-' || *str == '+'))
			return (1);
		str++;
	}
	return (0);
}

int	ft_strcmp(char *str1, char *str2)
{
	size_t	i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0'
		&& str1[i] == str2[i])
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

int	check_input(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (check_for_num(av[i]) == 1 || ft_strcmp(av[i], "214748364748385") == 0)
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	if (check_for_dups(ac, av) == 1)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

int	str_amount(char **str)
{
	int	count;

	count = 0;
	while (*str)
	{
		*str++;
		count++;
	}
	return (count);
}

void	free_ptr(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

void	*free_dptr(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

void	print(int i, int count, char **str)
{
	while (i < count)
	{
		printf("%s\n", str[i]);
		i++;
	}
}

char	**take_input(int ac, char **av)
{
	int		i;
	int		strs;
	char	**input;

	i = 0;
	if (ac == 2)
	{
		if (!av[1])
			return (NULL);
		input = ft_split(av[1], ' ');
		if (!input)
			return (NULL);
		strs = str_amount(input);
		if (check_input(strs, input) == 1)
			return (free_ptr(input), NULL);
		return (input);
	}
	else
	{
		if (check_input(ac, av) == 1)
			return (NULL);
		return (av + 1);
	}
}

t_list	*constr_node(t_list *stack_a, char **input)
{
	long	*num;
	int		i;
	int		j;
	t_list	*node;

	i = 0;
	while (input[i])
	{
		j = 0;
		while (input[i][j])
		{
			num = (long *)malloc(sizeof(long));
			if (!num)
				return (ft_lstclear(&stack_a, free), NULL);
			*num = ft_atoi(&input[i][j]);
			node = ft_lstnew(num);
			if (!node)
				return (free(num), ft_lstclear(&stack_a, free), NULL);
			ft_lstadd_back(&stack_a, node);
			break ;
		}
		i++;
	}
	return (stack_a);
}

void	test_printing(t_list *stack)
{
	t_list	*current;

	current = stack;
	while (current)
	{
		printf("\n%d", *(int *)(current->content));
		current = current->next;
	}
}



/******************operations********************/


void	sa(t_list **stack)
{
	t_list	*first;
	t_list	*second;

	if (ft_lstsize(*stack) == 1 || ft_lstsize(*stack) == 0)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void	sb(t_list **stack)
{
	t_list	*first;
	t_list	*second;

	if (ft_lstsize(*stack) == 1 || ft_lstsize(*stack) == 0)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}
void	ss(t_list **stack_a, t_list **stack_b)
{
	sa(stack_a);
	sb(stack_b);
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*top_b;
	
	if (ft_lstsize(*stack_b) == 0)
		return ;
	top_b = *stack_b;
	*stack_b = top_b->next;
	ft_lstadd_front(stack_a, top_b);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*top_a;
	
	if (ft_lstsize(*stack_a) == 0)
		return ;
	top_a = *stack_a;
	*stack_a = top_a->next;
	ft_lstadd_front(stack_b, top_a);
}

void	ra(t_list	**stack_a)
{
	t_list	*current;
	t_list	*first;

	current = *stack_a;
	first = *stack_a;
	while (current->next)
		current = current->next;
	*stack_a = first->next;
	first->next = NULL;
	current->next = first;
}

void	rb(t_list	**stack_b)
{
	t_list	*current;
	t_list	*first;

	current = *stack_b;
	first = *stack_b;
	while (current->next)
		current = current->next;
	*stack_b = first->next;
	first->next = NULL;
	current->next = first;
}

void	create_stackb(t_list **stack_b)
{
    int	data;
    int	*new_data;

    data = 0;
    while (data < 5)
    {
        new_data = malloc(sizeof(int));
        if (new_data == NULL)
            return ;

        *new_data = data;
        ft_lstadd_back(stack_b, ft_lstnew(new_data));
        data++;
    }
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a);
	rb(stack_b);
}

void	rra(t_list	**stack_a)
{
	t_list	*nd_last;
	t_list	*last;

	nd_last = *stack_a;
	while (nd_last->next->next)
		nd_last = nd_last->next;
	last = nd_last->next;
	nd_last->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
}

void	rrb(t_list	**stack_b)
{
	t_list	*nd_last;
	t_list	*last;

	nd_last = *stack_b;
	while (nd_last->next->next)
		nd_last = nd_last->next;
	last = nd_last->next;
	nd_last->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}

int	main(int ac, char **av)
{
	t_list	*stack_a = NULL;
	t_list	*stack_b = NULL;
	char	**input;

	if (ac < 2)
		return (1);
	input = take_input(ac, av);
	if (!input)
		return (0);
	stack_a = constr_node(stack_a, input);
	if (!stack_a)
	{
		if (ac == 2)
			free_dptr(input);
		return (ft_lstclear(&stack_a, free), 1);
	}
	if (ac == 2)
		free_dptr(input);
	
	create_stackb(&stack_b);

	test_printing(stack_a);
	printf("\n_\na\n");

	test_printing(stack_b);
	printf("\n_\nb");

	rrr(&stack_a, &stack_b);

	printf("\n\n");
	test_printing(stack_a);
	printf("\n_\na\n");

	test_printing(stack_b);
	printf("\n_\nb");

	ft_lstclear(&stack_a, free);
	return (0);
}
