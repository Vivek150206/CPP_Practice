// program to implement the use of calculator using switch.

#include <iostream>
using namespace std;

int main() {
    float a, b;
    cin>>a>>b;
    
    char op;      // operator is a keyword in cpp

    cout<<"Enter the operator on a and b:";
    cin>>op;

    switch(op){

        case '+':
        cout<<a+b;
        break;

        case '-':
        cout<<a-b;
        break;

        case '*':
        cout<<a*b;
        break;

        case '/':
        cout<<a/b;
        break;

        default:
        cout<<"Enter any valid operator";
        break;
    }
    return 0;

}

// program to find  a character is vowel or consonant using switch.

#include <iostream>
using namespace std;

int main() {
    char word;
    cout<<"Enter a alphabet:";
    cin>>word;

    switch (word){
        case 'a' :
        cout<<"vowel"<<endl;
        break;

        case 'e' :
        cout<<"vowel"<<endl;
        break;

        case 'i' :
        cout<<"vowel"<<endl;
        break;

        case 'o' :
        cout<<"vowel"<<endl;
        break;

        case 'u' :
        cout<<"vowel"<<endl;
        break;

        default :
        cout<<"consonant"<<endl;
        break;
    }
    return 0;

}