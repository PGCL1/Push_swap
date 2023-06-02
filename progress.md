1. DONE program can handle string passed with multiple numbers
2. DONE program detect when multiple signs are passed and throws an error
3. DONE no leaks 
4. DONE corrected error function (if string is passed with a lonely sign, throws error)
5. DONE redo creation of list so that we use listaddback, listlast, listnew from libft -> to stop using global head which is forbidden and simplify code readability
--------------------------------------------------------------
Improvements:
	- problem with checker_Mac in both cases (counting - not normal && sorting - normal)
	- problem in parsing 
		when passing argv[i] = '-' it works
--------------------------------------------------------------

Learning:
int stack_min_data(t_stack *copy)
{
	int		min;

	min = copy->data;
	while (copy->next != NULL)
	{
		if (min > copy->next->data)
			min = copy->next->data;
		copy = copy->next;		
	}
	return (min);
}

other function --> if (stack_min_data(*a) == (*a)->data)
Here we are sending a copy of (*a) to stack_min_data
if we sent (&(*a)) we would be sending the reference of (*a) and therefore be able to modify the contents of (*a);

--------------------------------------------------------------
Parsing error case:
1 2 3 3
1 2 --3
1 2 -+3
1 2 ++3
1 2 +-3
1 2 -3 "-4 - 6"
1 2 -3 "-4 + 6"
1 2 -3 "-4 + 6"
--------------------------------------------------------------

Content:
	video of big O notation
	
ft_memset(&err, 0, sizeof(t_err))