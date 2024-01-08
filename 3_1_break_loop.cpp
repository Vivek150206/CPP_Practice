// continue statement is used to skip to the next iteration of the loop 
// break statement is used to break out of the loop

// program to display all numbers from 1 to 100 except the multiples of 3

#include <iostream>
using namespace std;

int main() {
    for (int i=1; i<=100; i++) {
        if (i%3==0) {
            continue;
        }
        cout<<i<<endl;
    }
}

// program to find whether a number is prime or not

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int i=2;
    int counter;
    counter=0;

    while (i<n){
        if (n%i==0){
            cout<<"Not Prime"<<endl;
            break;
        }
        i++;
        counter=counter+1;
    }
    if (counter==(n-2)){
        cout<<"Prime"<<endl;
    }

    return 0;
}

// program to print the prime numbers in a given range.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;

    int i;

    for (i=(a+1); i<b; i++){
        int counter=0;
        int j=2;
        while (j<i){
            if (i%j==0) {
                break;
            }
            counter++;
            j++;
        }
        if (counter==(i-2)){
            cout<<i<<endl;     
        }
    }

    return 0;
}