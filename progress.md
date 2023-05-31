1. DONE program can handle string passed with multiple numbers
2. DONE program detect when multiple signs are passed and throws an error
3. DONE no leaks 
4. DONE corrected error function (if string is passed with a lonely sign, throws error)
5. DONE redo creation of list so that we use listaddback, listlast, listnew from libft -> to stop using global head which is forbidden and simplify code readability

Improvements:
	- segmentation fault in sort.c
	- problem in parsing 
		when passing argv[i] = '-' it works

Parsing error case:
1 2 3 3
1 2 --3
1 2 -+3
1 2 ++3
1 2 +-3
1 2 -3 "-4 - 6"
1 2 -3 "-4 + 6"
1 2 -3 "-4 + 6"

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