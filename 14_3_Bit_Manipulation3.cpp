#include<iostream>
using namespace std;

// Write a program to find a unique number in an array 
// If array = {1,2,3,4,3,2,1} 
// The output should be 4.

int xorsum(int arr[], int n){

    int xorsum = 0;
    for (int i=0; i<n; i++){
        xorsum = xorsum ^ arr[i];
    }
    cout<<xorsum<<endl;

}

// Write a program to find two unique numbers in an array 
// If array = {1,2,3,4,5,3,2,1} 
// The output should be 4 and 5.

#include<iostream>
using namespace std;

int setBit(int n, int pos) {
    return ((n & (1 << pos)) != 0);
}


void unique(int arr[], int n) {
    int xorsum = 0;
    for (int i = 0; i < n; i++) {
        xorsum = xorsum ^ arr[i];
    }

    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;

    while (setbit != 1) {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }

    int newxor = 0;
    
    for (int i = 0; i < n; i++) {
        if (setBit(arr[i], pos - 1)) {
        newxor = newxor ^ arr[i];
        }
    }
    cout << newxor << endl;
    cout << (tempxor ^ newxor) << endl;
}

