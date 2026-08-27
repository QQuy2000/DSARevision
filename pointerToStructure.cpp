#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main() {

    // Rectangle r={10, 5};
    // cout << "Length: " << r.length << endl;
    // cout << "Breadth: " << r.breadth << endl;   
    
    // Rectangle *p=&r;
    // cout << "Length: " << p->length << endl;
    // cout << "Breadth: " << p->breadth << endl;

    struct Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // dynamic memory allocation for structure, p is a pointer to structure, p = new Rectangle; // alternative way to allocate memory for structure in C++
    p->length = 10;
    p->breadth = 5;

    cout << "Length: " << p->length << endl;
    cout << "Breadth: " << p->breadth << endl;

    free(p);

    return 0;
}