#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"

void    radix_sorting(t_node **stack_a, t_node **stack_b)
{
    int size;
    int max_bts;
    int i;
    int j;

    size = lst_size(*stack_a);
    max_bts = 0;
    i = 0;
    while ((size -1) >> max_bts)
        max_bts++;
    while (i < max_bts)
    {
        j = 0;
        while (j < size)
        {
            if (((*stack_a)->index >> i) & 1)
                list_change_ra(stack_a);
            else
                list_change_pb(stack_a, stack_b);
            j++;
        }
        while (*stack_b)
            list_change_pa(stack_a, stack_b);
    }       
}
