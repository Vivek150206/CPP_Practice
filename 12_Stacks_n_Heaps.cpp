// Stacks

#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

int main() {
    int num1, num2;
    cin>>num1>>num2;

    int sum=add(num1,num2);
    cout<<sum<<endl;    
}

// stacks can be visualised as LIFO
// first main function is called then inside it we call the sum function 
// The sum function gets executed, it comes out of the stack and then the main function gets called

// Heap

// Main difference between stack and heap is that stack is used for static memory allocation and 
// heap for dynamic memory allocation, both stored in the computer's RAM .

#include <iostream>
using namespace std;

int main() {
    int a = 10;         //stored in stack
    int *p = new int(); //stored in heap
    *p = 10;
    delete (p);         // to free the memory of heap
                        // the pointer p would still be there in stack but the memory it was pointing to would be freed
    p=new int[4];       // to allocate memory to array in heap
    delete[]p;
    p=NULL;
}

// Dynamic memory allocation is done in heap
// we need to delete the memory allocated in heap manually
// while in stacks the memory is automatically deleted when the function is called out of the stack
// memory leak occurs when we don't delete the memory allocated in heap
