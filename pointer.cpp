#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using  namespace std;


int main()
{
    // int a=10;
    // int *p;
    // p=&a;
    
    // cout<<a<<endl;
    // printf("using pointer %d", *p);

    // int A[5] = {2, 4, 5, 6, 10};
    // int *p;
    // p = A;

    // for(int i = 0; i < 5; i++)
    // {
    //     cout << p[i] << endl;
    // }

    // int *p;
    // p= new int[5]; //p=(int *)malloc(5*sizeof(int)); c language 

    // p[0]=2, p[1]=4, p[2]=5, p[3]=6, p[4]=10;

    // for(int i = 0; i < 5; i++)
    // {
    //     cout << p[i] << endl;
    // }

    // delete[] p; //free(p); c language 

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout << "Size of integer pointer: " << sizeof(p1) << endl;
    cout << "Size of character pointer: " << sizeof(p2) << endl;
    cout << "Size of float pointer: " << sizeof(p3) << endl;
    cout << "Size of double pointer: " << sizeof(p4) << endl;  
    cout << "Size of structure pointer: " << sizeof(p5) << endl;

    return 0;
}