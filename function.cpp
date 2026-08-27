#include <iostream>
using namespace std;   

// void fun(int A[])
// {
//     for (int i=0;i<5;i++)
//     cout<<A[i]<<endl;
   
// }

// void fun(int *A, int n)
// {
//     for (int i=0;i<n;i++)
//     cout<<A[i]<<endl;
   
// }
// int main() 
// {
//     int A[ ]={2,4,6,8,10};
//     int n=5;
//     // fun(A);
//     fun(A,n);
//     for (int a:A){
//         cout<<a<<" ";
//     }

//     return 0;
// }
int *fun(int size)
{
    int *p;
    p=new int[size];
    for (int i=0;i<size;i++)
    {
        p[i]=i+1;
    }
    return p;
}
int main()
{
    int *ptr, sz=5;
    ptr=fun(sz);
    for (int i=0;i<sz;i++)
    {
        cout<<ptr[i]<<endl;
    }
    delete [] ptr;      
    return 0;
}