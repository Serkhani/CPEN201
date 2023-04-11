#include <iostream>

using namespace std;

int q678910()
{
    double *test1 = new double;
double *test2 = new double;
double *average;
average = test1;
*test1 = 45.00;
*test2 = 90.00;
test1 = test2;
test2 = new double;
*test2 = 86.00;
*average = ((*test1) + (*test2)) / 2;
cout << *test1 << " " << *test2 << " " << *average << endl;
}

//90.00 86.00 88.00

//Question 7 a
//To declare a pointer variable in C++, the '*' symbol is used in the syntax,
//for instance,
//int *ptr;
//declares a pointer variable named ptr that points to an integer.

//Question 7 b
//The '*' symbol is used to dereference the pointer variable. For instance,
//*ptr = 42;
//sets the value that ptr points to, to 42. In the given
//code, we can observe the usage of the '*' symbol to declare and dereference pointers.

//Question 8
//The statement int* p, q; could lead to the misinterpretation that both p and q are pointers
//to int, when in fact only p is a pointer to int and q is a regular int. This is because the '*'
// applies only to p and not to q. To avoid this potential misinterpretation, it is recommended
//to declare each variable on a separate line or to use the typedef keyword to create a new type name for the pointer type.

//Question 9
// '*'  in *numPtr is the dereference operator applied to the pointer variable numPtr, which retrieves the value
//of the integer that numPtr points to in memory. On the other hand, '&' in &numPtr is the address-of operator
//applied to the pointer variable numPtr, which retrieves the memory address where the pointer variable
//numPtr, is stored. Thus, *numPtr retrieves the value that the pointer is pointing to, while
//&numPtr retrieves the address where the pointer is stored in memory.

//Question 10
//It is true. The statement "p = new int[50];" dynamically allocates an array of 50 integers of type int.
//The "new" operator returns the address of the first byte of the block of memory allocated. In this case, the "new int[50]"
//expression returns a pointer to the first integer in the array, which is then assigned to the pointer variable p. As a result,
//p contains the base address of the array.
