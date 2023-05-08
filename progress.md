1. program can handle string passed with multiple numbers
2. program detect when multiple signs are passed and throws an error
3. no leaks 
4. corrected error function (if string is passed with a lonely sign, throws error)

Improvements:
	- t_node *head cannot be declared as a global variable, need to fix functions
	- function to check if there are duplicated in list; Matheus has method of O(n) or O(1)
		people refer to "sorting" to remove duplicates
	- problem with this conditon 
	/a.out "1 23 +  4" 5 "7 -5 4 3" | cat -e

Content:
	video of big O notation
