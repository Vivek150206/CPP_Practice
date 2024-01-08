// Array is a list of variables of similar types.


// self declared array.

#include <iostream>
using namespace std;

int main() {
    int arr[4] = {1,2,3,4};
    cout<<arr[3]<<endl;
    return 0;
}

// user input array.

int main() {
    int n;
    cin>>n;

    int array[n];
    for (int i=0; i<n; i++){
        cin>>array[i];
    }
    
    for (int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
}

// Find the maximum and the minimum of an array.

int main() {

    int n; 
    cin>>n;

    int array[n];
    for (int i=0; i<n; i++){
        cin>>array[i];
    }
    
    for (int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }

    int maxno=INT32_MIN;  // INT32_MIN is the minimum value of an integer.
    int minno=INT32_MAX;  // INT32_MAX is the maximum value of an integer.

    for (int i=0; i<n; i++){
        maxno=max(maxno,array[i]); //max is an inbuilt function in c++.
        minno=min(minno,array[i]); //min is an inbuilt function in c++.
    }

    cout<<maxno<<endl;
    cout<<minno<<endl;
}