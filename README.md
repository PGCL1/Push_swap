**Linked Lists**

There are various types of data structures and we have for now seen arrays. Today, we start a new chapter exploring what are linked lists. Linked lists are similar to arrays as they can be used to store list, yet they differ in the way they used memory to store information.

Arrays need continuous bites of memory stored sequentiently whereas linked lists can have scattered memory usage. As each node in a linked list stores the address of the next node, each element of the list can be addressed sequentienlly.

There are 3 types of linked lists:
- single linked list (each node stores a data value and the address of the next node or NULL if the next node doesn't exist)
- doubly linked list (each node stores a data value and the address of the previous node and next node or NULL if the next node doesn't exist)
- circular linked list (the last node is linked to the first node)

In order to access the first node of the list, we need a pointer that points to the first element of the linked list. This pointer is often called the "head". This pointer only contains the address of the first node of the list.


***IMPORTANT***
When you use a linked list, you can make copies of it and use it for different endeavors. Whereas, if you would use a struct and use it for different things, you would be constantly changing your struct; resulting into errors.

Linked lists can be use in such way because they are self referencing; when you create a copy of a linked list: the structure is the same but the linked lists you created are different.

**Pointers**

When we access a pointer variable (i.e. *p):
	if we do *p = X we are dereferencing the pointer and assigning to it the value X
	if we do p = &X we are assigning to the pointer p the address of X

**Application's Memory**

Heap (not fixed)		free storage 
Stack (fixed)			stores all the function execution variables
Static/Global (fixed)	stores the variables that will live during the entire program
Code (fixed)			stores the program's instructions
