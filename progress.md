1. program can handle string passed with multiple numbers
2. program detect when multiple signs are passed and throws an error
3. no leaks 
4. corrected error function (if string is passed with a lonely sign, throws error)

Improvements:
	- t_node *head cannot be declared as a global variable, need to fix functions
	- function to check if there are duplicated in list; Matheus has method of O(n) or O(1)
		people refer to "sorting" to remove duplicates

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

typedef struct t_err {
	int minus;
	int plus;
	int mix;
} t_err;

ft_memset(&err, 0, sizeof(t_err))