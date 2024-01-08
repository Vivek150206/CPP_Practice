#include <iostream>
using namespace std;
#include <string>

// Add all numbers till n using recursion

int sum(int n){
    if (n==0){
        return 0;
    }else{
        return n+sum(n-1);
    }
}

// Factorial

int Factorial(int n){
    if (n==0){
        return 1;
    }else{
        return n*Factorial(n-1);
    }
}

// Fibonacci Series

int Fibonacci(int n){
    if (n==1){
        return 0;
    }else if(n==2){
        return 1;
    }
    else{
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
}

// Check whether a array is sorted or not

bool sorted(int arr[], int n){

    if (n==1){
        return true;
    }

    bool restArray = sorted(arr+1, n-1);
    return (arr[0]<arr[1] && restArray);
}

void numberinc(int n){
    if (n==0){
        return;
    }
    numberinc(n-1);
    cout<<n<<" ";
}

void numdec(int n){
    if (n==0){
        return;
    }
    cout<<n<<" ";
    numdec(n-1);
}

// revese a string using recursion

void reverse( string s){

    if (s.size()==0){
        return;
    }
    
    string lastword = s.substr(s.size()-1);
    cout<<lastword;
    
    reverse(s.substr(0,s.size()-1));

}



// Replace occurences of Pi in the string with 3.14
void replacePi(string s){

    if (s.size()==0){
        return;
    }

    if (s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        replacePi(s.substr(2));
    }else{
        cout<<s[0];
        replacePi(s.substr(1));
    }
}

// Tower of Hanoi

void TowerOfHanoi(int n, char src, char dest, char helper){

    if (n==0){
        return;
    }

    TowerOfHanoi(n-1, src, helper, dest);

    cout<<"Move from "<<src<<" to "<<dest<<endl;
    
    TowerOfHanoi(n-1,helper, dest, src);

}

int main(){
    // numberinc(10);
    // reverse("binod");
    // replacePi("pisdihjpiasnpipp");

    TowerOfHanoi(3,'A','B','C');
    
}