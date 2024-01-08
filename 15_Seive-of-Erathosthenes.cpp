#include<iostream>
using namespace std;

// Function to find the prime numbers upto a certain number

void primeSeive(int n){
    int prime[n]={0};

    for (int i=2; i<=n; i++){
        if (prime[i]==0){
            for (int j=i*i; j<=n; j+=i){
                prime[j]=1;
            }
        }
    }

    for (int i=2; i<=n; i++){
        if (prime[i]==0){
            cout<<i<<" ";
        }
    }
}

// Earlier we used to do it like 

bool prime(int n){
    
    bool flag=true;

    for (int i=2; i<=n; i++){
        if (n%i==0){
            flag=false;
        }
    }
    if (flag){
        return true;
    }
}

void primebetween(int n){
    for (int i=2; i<=n; i++){
        if (prime(i)){
            cout<<i<<" ";
        }
    }
}


// Prime Factorization using Seive

void primefactor(int n){

    int spf[n]={0};             // Array containing the Smallest Prime Factor of each number

    for (int i=0; i<n; i++){
        spf[i]=i;               // Assign each element the value of itself as SPF.
    }

    for (int i=0; i<=n; i++){
        if (spf[i]==i){
            for (int j=i*i; j<=n; j+=i){
                if (spf[j]==j){
                    spf[j]=i; 
                }
            }
        }
    }

    while (n!=1){
        cout<<spf[n]<<"*";
        n=n/spf[n];
    }

    cout<<"1"<<endl;

}

// write a funtion to give the number of numbers between 1 and 1000 divisible by both 5 and 7

int divisible(int n, int a, int b){

    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);

    return c1+c2-c3;
}

// Finding the GCD of two numbers


// You can visualize Euclid division method here;

int GCD(int a, int b){

    int rem;

    while(rem != 0){
        rem=a%b;
        a=b;
        b=rem;
    }

    return a;
}


int main() {
    // int prime[100]={0};
    // cout<<prime<<endl;

    // for (int i=0;i<100; i++){
    //     cout<<prime[i]<<" ";
    // }

    // primeSeive(100);

    cout<<GCD(5,7);

}