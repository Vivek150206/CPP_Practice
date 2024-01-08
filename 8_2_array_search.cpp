// linear search in array means searching an element in array by transversing the array.


// binary search in array means searching an element in array by 
// dividing the array into two parts and then searching in the part where the element can be present.
// Necessary condition for binary search is that the array should be sorted.

// Time Complexity of linear search is O(n).
// Time Complexity of binary search is O(logn).

#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int key){

    for (int i=0; i<n; i++){
        if (arr[i]==key){
            return i;
        }
    }
    return -1;
}

int binarysearch(int arr[], int n, int key){

    int start=0;
    int end=n;

    while (start<=end){
        int mid=(start+end)/2;
        if (arr[mid]==key){
            return mid;
        }
        else if (arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }

    return -1;
}

int main(){
    int n;
    cin>>n;

    int array[n];
    for (int i=0; i<n; i++){
        cin>>array[i];
    }

    // cout<<array[1]<<endl;

    int key;
    cout<<"Enter the key: ";
    cin>>key;

    cout<<linearsearch(array, n, key)<<endl;

    return 0;
}

