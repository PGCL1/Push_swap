**Linked Lists**

There are various types of data structures and we have for now seen arrays. Today, we start a new chapter exploring what are linked lists. Linked lists are similar to arrays as they can be used to store list, yet they differ in the way they used memory to store information.

Arrays need continuous bites of memory stored sequentiently whereas linked lists can have scattered memory usage. As each node in a linked list stores the address of the next node, each element of the list can be addressed sequentienlly.

There are 3 types of linked lists:
- single linked list (each node stores a data value and the address of the next node or NULL if the next node doesn't exist)
- doubly linked list (each node stores a data value and the address of the previous node and next node or NULL if the next node doesn't exist)
- circular linked list (the last node is linked to the first node)

In order to access the first node of the list, we need a pointer that points to the first element of the linked list. This pointer is often called the "head". This pointer only contains the address of the first node of the list.

**Pointers**

When we access a pointer variable (i.e. *p):
	if we do *p = X we are dereferencing the pointer and assigning to it the value X
	if we do p = &X we are assigning to the pointer p the address of X