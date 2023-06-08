
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

/* void bubbleSort(t_stack **a, int n)
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
} */

	/// INICIALIZA LOS PUNTEROS CABROOOOOOOOOON
	// Aqui no hace falta que sea puntero, podria ser una variable normal y pasar
	// la direccion, asi te ahorras el trabajar con dobles punteros y funciona igual
	// t_stack a;
	//
	// number parsing(int argc, char **argv, t_stack *a)


int main(int argc, char **argv)
{

	t_stack *a = 0;
	t_stack *first;
	t_stack *second;


	if (argc > 0)
	{
		numbers_parsing(argc, argv, &a);
		first = a;
		while (first->next)
		{
			second = first->next;
			while (second)
			{
				if (first->data < second->data)
					second->index++;
				else if (first->data > second->data)
					first->index++;
				second = second->next;
			}
			first = first->next;
		}
		node_print_a(a);
		stack_clean(&a);
	}
	return (0);
}

/*
2 1 3 4 5
2 is temp
2 > 1 index is 1
*/