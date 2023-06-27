# Push_swap Project

This project revolved around creating an algorithm to sort a series of numbers in the fewest movements possible. The serie of numbers could range from 3, 5, 100 and 500. The algorithm however has to be able to sort n numbers, while 1 <= n <= 500.

To do, we had to make use of stacks and different operations that were predifined in the subject; namely the push operation, the swap operation, the rotate operation and the reverse rotate operation. I also had to implement a method where the first arguments passed to the program would be the first elements in the stack, in other words the first arguments passed would be the top of the stack.

## Project Breakdown

For this project, I made usage of singly linked list as this data structure would enable to resize my  list easily. Using arrays in this project will oblige for a constant copy and resizing as elements cannot be added freely to the data structure, because memory needs to be allocated for the array as a whole when initializing. With linked list, one can add a node or remove a node, due to the way linked lists node are not continous in memory.

In terms of the algorithm chosen, I used the radix MSB method, where I first calculated the most significant bit and rotated all big numbers to the bottom of stack A and pushed all the small numbers to stack B. After all bits of a digit where processed for all arguments, all the numbers would be pushed back to the stack A, I would then look at the next digit on the right. This was a rince and repeat process until all the digits of all arguments where processed. At the end of it, all arguments would be sorted.

## Installation

To try out the algorithm for yourself, you should:

```
> git clone git@github.com:PGCL1/Push_swap.git && cd Push_swap
> make
```

Here's an example of what you could try out:
```
./push_swap 50 3 6 -2
```

Or you could also go here:
[Random Numbers Generator](https://www.calculatorsoup.com/calculators/statistics/random-number-generator.php) - to generate your number list, it will be faster.

