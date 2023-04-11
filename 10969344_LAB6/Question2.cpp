#include <iostream>

using namespace std;

int q2()
{
    int num;
    int *ptr1;
    int *ptr2;
    double *ptr3;
     ptr1 = ptr2;//valid
     num = ptr1; //invalid: num's value is an lvalue and can not be assigned to. Also, pointer cannot be assigned directly to an integer.
     ptr3 = ptr1;//invalid: ptr1 is a pointer to an int and can not be assigned to a pointer to a double since an int* can not be converted into a double*. Hence, they are type incompatible.
     *prt3 = *ptr2;//invalid: prt3 is not defined in this scope.
     *ptr1 = *ptr2;//valid
     num = *ptr2;//valid
     ptr1 = &ptr2;//invalid: ptr2 is a pointer to an integer while &ptr2 is a pointer to a pointer to an integer.
     ptr1 = &num;//valid
     num = &ptr1;// The address of ptr1 is assigned to an integer variable num but num's value is an lvalue and can not be assigned to. Hence, this is not valid because num is an integer and ptr1 is a pointer to an integer.
}
