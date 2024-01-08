
//Find the maximum of three numbers using if-else statement

#include <iostream>
using namespace std;

int main() {

    int num1;
    cin>>num1;

    int num2;
    cin>>num2;

    int num3;
    cin>>num3;


    if (num1>num2){
        if (num1>num3) {
            cout<<num1<<" is the maximum"<<endl;
        }
        else{
            cout<<num3<<" is the maximum"<<endl;
        }
    }

    else {
        if (num2>num3) {
            cout<<num2<<" is the maximum"<<endl;
        }
        else {
            cout<<num3<<" is the maximum"<<endl;
        }
    }

}

// Code to find whehter a number is even or odd

#include <iostream>
// using namespace std;

int main() {
    int num;
    cin>>num;
    
    if (num%2 == 0) {
        cout<<num<<"is a even number"<<endl;
    }
    else{
        cout<<num<<"is a odd number"<<endl;
    }
    return 0;

}