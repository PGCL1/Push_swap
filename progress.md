1. DONE program can handle string passed with multiple numbers
2. DONE program detect when multiple signs are passed and throws an error
3. DONE no leaks 
4. DONE corrected error function (if string is passed with a lonely sign, throws error)
5. DONE redo creation of list so that we use listaddback, listlast, listnew from libft -> to stop using global head which is forbidden and simplify code readability

Improvements:
	- t_stack *head cannot be declared as a global variable, need to fix functions
	- function to check if there are duplicated in list; Matheus has method of O(n) or O(1)
		people refer to "sorting" to remove duplicates
	- trying to create a hash_table to remove dupliactes

Content:
	video of big O notation
	hashtables to verify for duplicates



list of numbers
1 100
2 400
3 500
4 200
1 not possible
o(n)

ft_memset(&err, 0, sizeof(t_err))