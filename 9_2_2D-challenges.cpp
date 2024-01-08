#include <iostream>
using namespace std;

// Transpose

int main1() {
    int n;
    cout<<"Size of square matrix=";
    cin>>n;

    int arr[n][n];
    int transpose[n][n];
    
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            transpose[i][j]=arr[j][i];
        }
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
}

// Matrix Multiplication

int main2() {

    int n1,n2;
    cout<<"dimensions of A:";
    cin>>n1>>n2;
    int A[n1][n2];

    int n3,n4;
    cout<<"Dimensions of B:";
    cin>>n3>>n4;
    int B[n3][n4];

    while (n2!=n3){
        cout<<"column size of A should be equal to row size of B";
        cout<<endl;
        cout<<"column size of A:";
        cin>>n2;
        cout<<endl<<"row size of B:";
        cin>>n3;
    }

    cout << "Enter elements of A:";
    for (int i=0; i<n1; i++){
        for (int j=0; j<n2; j++){
            cin>>A[i][j];
        }
    }

    cout << "Enter elements of B:";
    for (int i=0; i<n3; i++){
        for (int j=0; j<n4; j++){
            cin>>B[i][j];
        }
    }

    int result[n1][n4];
    for (int i=0; i<n1; i++){
        for (int j=0; j<n4; j++){
            result[i][j]=0;
        }
    }

    for (int i=0; i<n1; i++){
        for (int j=0; j<n4; j++){
            for (int k=0; k<n2; k++){
                result[i][j] += A[i][k]*B[k][j];
            }
        }
    }

    for (int i=0; i<n1; i++){
        for (int j=0; j<n4; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}


// Matrix Search
// imp condition: rows and columns should be sorted

bool matrixsearch() {

    int n, m;
    cout<<"Size of matrix=";
    cin>>n>>m;

    int arr[n][m];
    
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int target;
    cin>>target;

    int r=0;
    int c=m-1;

    bool found = false;

    while (r<n && c>=0){
        if (arr[r][c] ==target){
            found=true;
        }
        else if(arr[r][c]<target){
            c--;
        }
        else{
            r++;
        }
    }

    if (found){
        return true;
    }
    else{
        return false;
    }
}