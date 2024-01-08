// Selection sort
// repeatedly find the minimum element from unsorted part and put it at the beginning

#include <iostream>
using namespace std;

void selectionsort(int arr[], int n){

    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if (arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

// Bubble sort
// repeatedly swap the adjacent elements if they are in wrong order

void bubblesort(int arr[], int n){

        for (int i=0; i<n-1; i++){
            for (int j=0; j<n-i-1; j++){
                if (arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }

        for (int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
}

// Insertion sort
// insert an element from unsorted array to its correct position in sorted array

void insertionsort(int arr[], int n){

    for (int i=1; i<n; i++){
        int key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[6]={4,29,23,45,3,12};
    insertionsort(arr,6);
}
