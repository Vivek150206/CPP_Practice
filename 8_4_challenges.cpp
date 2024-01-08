// Given an array of size n. For every i from 0
// to n-1. Output max(a[0], a[1], a[2], ....., a[i])
#include <iostream>
using namespace std;

void q_1(int arr[], int n) {   // Change it to main to run.

    for (int i=0; i<n; i++){
        int maxNo = INT32_MIN;
        for (int j=0; j<=i; j++){
            if (maxNo<arr[j]){
                maxNo=arr[j];
            }
        }
        cout<<"Maximum till "<<i<<"="<<maxNo;
        cout<<endl;
    }
    return;

}

// Subarray is a continuous part of an array.
// No of subarrays in a array of length n is n(n+1)/2

// Subsequence is a sequence that can be derived from 
// an array by selecting zero or more elements without changing the order of the remaining elements.
// No of subsequences in a array of length n is 2^n

// Given an array of size n. Output sum of each subarray of the given array.

void q_2(int arr[], int n){

    for (int i=0; i<n; i++){
        int sum=0;
        for (int j=i; j<n; j++){
            sum+=arr[j];
            cout<<sum<<" ";
        }
    }
    return;
}



int main() {

    int n;
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    q_2(arr, n);
}

