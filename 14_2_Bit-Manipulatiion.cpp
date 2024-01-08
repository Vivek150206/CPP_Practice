#include <iostream>
using namespace std;
 
// Write a program to check if a given number is a power of 2
// The logic here is (10000) should be a power of 2, its predecessor is (01111) 
// Its and operator should be (00000) 

int powerof2(int n) {
    return ((n & (n-1))!=0);
}

// Program to count number of ones in binary representation of a number
// n and n-1 has the same bits as n except the rightmost set bit
// we would continuously take and of n and n-1 until it becomes 0
int numberof1(int n){
    int count = 0;
    while (n){
        n=(n&(n-1));
        count++;
    }
    return count;
}

int main() {
    cout <<numberof1(32);
}

// Program to generate all the subsets of a set

void subsets(int arr[], int n){
    for (int i=0; i<(1<<n); i++){
        for (int j=0; j<n; j++){
            if (i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}