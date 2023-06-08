
/* 1 2 3 4
2 1 3 4
struct 
int	number
unsigned int index;
index = 0;
list = [2]
new_element = 1;
while s_list
	if (list.number < new_element.number)
		list.index ++;
	else if (list.number > new_element.number)
		new_element.index ++; */

#include "../include/push_swap.h"

void bubbleSort(t_stack **a, int n)
{
    int i, j;
    int swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = 1;
        for (j = 0; j < n - i - 1; j++) {
            if ((*a)->data > (*a)->next->data) {
                swap(&arr[j], &arr[j + 1]);
                swapped = 0;
            }
        }
 
        // If no two elements were swapped by inner loop,
        // then break
        if (swapped == 1)
            break;
    }
}

int main(int argc, char **argv)
{
	t_stack *a;
	t_stack *temp;

	if (argc > 0)
	{
		numbers_parsing(argc, argv, &a);
		temp = a;
		while (temp->next)
		{
			if (temp->data < temp->next->data)
				temp->index++;
			else if (temp->data > temp->next->data)
				temp->next->index++;
			temp = temp->next;
		}
		node_print_a(a);
	}
	return (0);
}

/*
2 > 1 index is 1
1
3
4
5
*/