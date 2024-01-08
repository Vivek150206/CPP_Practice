// Print all the prime numbers between two numbers.

#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n){
    bool flag=true;
    for (int i=2; i<=n-1; i++){
        if (n%i==0){
            flag=false;
            return false;
        }
    }
    if (flag ==true){
        return true;
    }

}

int main() {
    int a,b ;
    cout<<"Enter the two numbers";
    cin>>a>>b;
    
    for (int i=a; i<=b; i++){
        if (isPrime(i)){
            cout<<i<<endl;
        }
    }
}

//Fibonacci Sequence

void fibonacci(int num){
    int a=0;
    int b=1;

    cout<<a<<endl;
    cout<<b<<endl;
    int c;
    for (int i=1; i<=num; i++){
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
    return;

}

int main(){
    int n;
    cin>>n;
    fibonacci(n);
}

// Factorial of a number.

int fact(int num){
    if (num==0){
        return 1;
    }
    else{
        return num*fact(num-1);
    }
}

int main() {
    int n;
    cin>>n;

    cout<<fact(n);
}

// Calculate the nCr

int fact(int num){
    if (num==0){
        return 1;
    }
    else{
        return num*fact(num-1);
    }
}


void nCr(int n,int r){
    int num=fact(n);
    int den=fact(n-r)*fact(r);

    int result=num/den;
    cout<<result<<endl;

    return;
}

int main() {
    int n, r;
    cin>>n>>r;

    nCr(n,r);
}

// Pascal's Triangle
// 1 
// 1 1
// 1 2 1
// 1 3 3 1 
// 1 4 6 4 1

int fact(int num){
    if (num==0){
        return 1;
    }
    else{
        return num*fact(num-1);
    }
}


int nCr1(int n,int r){
    int num=fact(n);
    int den=fact(n-r)*fact(r);

    int result=num/den;

    return result;
}

int main() {
    cout<<"Length of Triangle";
    int n;
    cin>>n;

    for (int i=0; i<=n; i++){
        for (int j=0; j<=i; j++){
            cout<<nCr1(i,j)<<" ";
        }
        cout<<endl;
    }
}