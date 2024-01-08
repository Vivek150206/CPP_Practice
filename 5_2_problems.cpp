// Prime checking (Another way!)

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout<<"Enter any number: ";
    cin>>n;

    bool flag=0;

    for (int i=2; i<=sqrt(n); i++){
        if (n%i==0){
            flag=1;
            cout<<"Non Prime";
            break;
        }
    }

    if (flag == 0){
        cout<<"Prime";
    }
    return 0;

}

// Reverse a number.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int reverse=0;

    while (n>0){
        int lastdigit;
        lastdigit=n%10;
        reverse = (reverse*10)+lastdigit;
        n=n/10;
    }
    cout<<reverse;
}

// Checking for an Armstrong number (sum of cubes of digits is equal to the number itself)

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int m=n;
    int sum=0;

    while (n>0){
        int digit=n%10;
        sum+=(digit*digit*digit);
        n=n/10;
    }
    if (sum==m){
        cout<<"Amstrong number";
    }else{
        cout<<"Not a Amstrong number";
    }
}

//factors of a number.

#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        if (n%i==0){
            cout<<i<<endl;
        }
    }
}

//Calculating the Factorial without using recursion.

#include <iostream>
using namespace std;

int main() {
    int n, i, factorial;
    cin>>n;
    factorial=1;
    i=1;
    while (i<=n){
        factorial*=i;
        i+=1;
    }
    cout<<factorial;
}