#include <iostream>

using namespace std;

int q345()
{
    int *length;
    int *width;
    length = new int;
    *length = 5;
    width = length;
    length = new int;
    *length = 2 * (*width);
    cout << *length << " " << *width << " " << (*length) * (*width) << endl;

}

//10 5 50

//Question 4
//
//The line length = new int; dynamically reserves memory for an integer on the heap using the new operator,
//and then assigns the address of this memory to the pointer variable length. This means that a new memory
//block in the heap is created where an integer can be stored, and the address of this memory is returned by
//the new operator and then assigned to the length pointer variable. After this line of code is executed, the
//length pointer variable points to a valid memory location in the heap where an integer value can be stored.
//The allocated memory will continue to exist until it is explicitly released using the delete operator, or
//until the program terminates.

//Question 5
//Dynamic memory allocation is the process of assigning memory for data during runtime instead of compile-time,
//accomplished through the use of the 'new' operator in C++. It is crucial for C++ programmers as it enables
//them to assign memory whenever required during runtime, leading to the creation of more adaptable
//and effective code. Additionally, it allows for the development of data structures of varying sizes and
//improved memory usage. Nonetheless, dynamic memory allocation necessitates managing memory, and neglecting
//to release memory can result in memory leaks and unpredictable program behavior
