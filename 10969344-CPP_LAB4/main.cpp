#include <iostream>

using namespace std;

void mergeArray(int a[], int m, int b[], int n, int c[])
{
    if(m>n){
        for(int i = 0; i<m; i++)
        {
        c[i] = a[i];
//        offset index to the location of the outside the size
//        of array A
        c[i+m] = b[n-1-i];
        }
    }
    else
    {
        for(int i = 0; i<n; i++)
        {
//      This check is to prevent the array from being overwritten
//      by non-user defined values outside the size of the array
        if(i<m)
        c[i] = a[i];
        c[i+n] = b[m-1-i];
        }
    }
    for(int i = 0; i<m+n; i++)
        cout<<c[i]<<" ";
    cout<<endl;
}

void MIX(int A[], int m, int B[], int n, int C[], int D[])
{
    int i = 0;
    int index = 0;
    int negIndex = 0;
    while (i<m)
    {
        if (A[i] % 2 == 0)
        {
            C[index++] = A[i++];
        }
        else
        {
            C[m+n-1-negIndex++] = A[i++];
        }
    }
    i=0;
    while (i<n)
    {
        if (B[i] % 2 == 0)
        {
            C[index++] = B[i++];
        }
        else
        {
            C[m+n-1-negIndex++] = B[i++];
        }
    }
    for(int i = 0; i<m+n; i++)
        cout<<C[i]<<" ";
    cout<<endl;
}
void reverseArray()
{
    int arr[10];
    for(int i=0; i<10;i++)
    {
        cout<<"Input: ";cin>>arr[i];
    }
    int temp;
    int i = 0;
    while(i < 5)
    {
        temp = arr[i];
        arr[i] = arr[9-i];
        arr[9-i++] = temp;
    }
    for(int i = 0; i<10; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
//    Question 1
    cout<<"_____Question 1_____\n";
    int m = 6;
    int n = 3;
    int a[m] = {0,1,2,3,4,5};
    int b[n] = {8,7,6};
    int c[m+n];
    mergeArray(a,m,b,n,c);
//    Question 2
    cout<<"\n_____Question 2_____\n";
    m = 6; n = 7;
    int A[m] = {3,2,1,7,6,3};
    int B[n] = {9,3,5,6,2,8,10};
    int C[m+n];
    int D[1];
    MIX(A,m,B,n,C,D);

//  Question 3
    cout<<"\n_____Question 3_____\n";
    reverseArray();

//  Question 4
    cout<<"\n_____Question 4_____\n";
    //20  23
    //10  23
    //11  11
    cout<<20<<" "<<" "<<23<<endl;
    cout<<10<<" "<<" "<<23<<endl;
    cout<<11<<" "<<" "<<11<<endl;
    return 0;
}
