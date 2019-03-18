# Programming assignment in C: Linked-List Xtensions

Second programming assignment for learning C as a second programming language. 

## Requirements
1. C language.
   The assignment consists of writing a working program in the C programming language.
   
2. Linked list.
   Use your code from the [C pointer exercises assignment](https://github.com/ivogeorg/c-pointer-exercises.git) as a basis. It's assumed that you have a linked list of integers, that is, the data in each node is a single `int`. Then, choose **ONE** of the following extensions (difficulty level in square brackets):
   - [2] Doubly-linked list of integers with insert function 

     Convert the singly-linked list into a doubly-linked list. The elements of a doubly-linked list are connected in both directions, so it can be traversed from the `head` toward the `tail` and from the `tail` toward the `head`. Modify the `list_insert` function to match.

   - [2] Delete for singly-linked list of integers
   
     Extend your singly-linked `int` list with a `list_delete` function, which deletes the first node which matches the data argument.

   - [3] Structure data base type with comparison function for structure type
   
     Create a singly- or doubly-linked list with a `struct` data type. Provide as an argument a `node_compare` function that works for this `struct` type the way the numerical comparison operators (`<`, `<=`, `>=`, `>`, `==`, and `!=`) work for numeric primitive types. Provide a `list_insert` function that preserves the order of the list.
     
   - [4] Structure of strings data base type with comparison function
   
     Create a singly- or doubly-linked list with a `struct` data type. The `struct` should contain *C-style strings*. Provide as an argument a `node_compare` function that works for this `struct` type the way the numerical comparison operators (`<`, `<=`, `>=`, `>`, `==`, and `!=`) work for numeric primitive types. Provide a `list_insert` function that preserves the order of the list.

3. Github.
   1. Fork this repository.
   2. Clone the remote to your local development environment.
   3. Implement and ensure your program is working correctly.
   4. Commit your changes.
   5. Push your commits to the remote, to submit your assignment.
   
4. Project description.
   You need to state which extension you picked and describe your implementation, in the provided section below.
   
   
## Project description

### Extension

2. I wrote a function to delete the node containg user selected value 

### Implementation notes

The function takes an int value and sees if any of the nodes hold the value. If the value is in the node pointed to at the head. The nextPointer is saved and the head is freed. The next pointer becomes the new head. Else the list will be transvered from nextPtr to nextPtr and the previous pointer will be saved. When the value is found the next pointer after is saved. The current pointer is freed and the previous pointer is connected to the next pointer. If the value isn't found a message will be printed saying the value wasn't found in the link list. 


