// Pointers are used to store address of variables.
// Pointers are used to access the value stored at the address they point to.
// Pointers are used to dynamically allocate memory.

// For example:

#include <iostream>
using namespace std;

int main() {
    int a=10;
    int *aptr;
    aptr=&a; // &a is the address of a

    cout<<*aptr<<endl;   // 10
    cout<<aptr<<endl;    // 0x61ff08
    cout<<&a<<endl;      // 0x61ff08

    *aptr=20;
    cout<<a<<endl; // 20

    int b=30;
    aptr=&b;
    cout<<*aptr<<endl; // 30

    return 0;
}

// Pointer Arithmetic

#include <iostream>
using namespace std;

int main() {
    int a=10;
    int *aptr;
    aptr=&a;

    cout<<aptr<<endl;   // 0x61ff08
    aptr++;
    cout<<aptr<<endl;   // 0x61ff0c (4bytes ahead as a is an integer)

    char c='A';
    char *cptr=&c;
    cout<<cptr<<endl;   // A
    cptr++;
    cout<<cptr<<endl;   // B

    return 0;
}

// Pointers and Arrays

#include <iostream>
using namespace std;

int main() {
    int arr[]={10,20,30};
    cout<<*arr<<endl;   // 10
    // arr++; is invalid

    int *ptr=arr;
    for (int i=0; i<3; i++){
        cout<<*ptr<<endl;
        ptr++;
    }

    return 0;
}

// pointer to pointer

#include <iostream>
using namespace std;

int main() {
    int a=10;
    int *p=&a;
    int **q=&p;

    cout<<*p<<endl;     // 10
    cout<<**q<<endl;    // 10
    cout<<*q<<endl;     // 0x61ff08 (address of p)

    return 0;
}

// passing pointers to functions

#include <iostream>
using namespace std;

void increment(int *aptr){ 
    *aptr=*aptr+1;
}

int main() {
    int a=10;
    increment(&a);
    cout<<a<<endl;  // 11

    return 0;
}

// swap using pointers

#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main() {
    int a=2, b=4;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;  // 4 2

    return 0;
}
