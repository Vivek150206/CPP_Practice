//

#include <iostream>
using namespace std;

int input_arr(int m, int n) {

    int arr[m][n]; // m rows and n columns

    // Taking input 
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    // printing outputs
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}

// Searching an element

int main3() {
    int m, n;
    cin>>m>>n;
    input_arr(m, n);
    
    int k;
    cin>>k;

    int arr[n][m]; // n rows and m columns

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (arr [i][j]==k){
                cout<<"Element found at"<<i+1<<" "<<j+1;
            }
        }
    }
}

// spiral order matrix transversal.

int main() {
    int n,m;
    cin>>n>>m;

    int a[n][m];

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    // spiral order print

    int row_start=0, row_end=n-1;
    int col_start=0, col_end=m-1;

    while (row_start <= row_end && col_start<=col_end){

        // for row start
        for (int col=col_start; col<=col_end; col++){
            cout<<a[row_start][col]<<" ";
        }
        row_start++;

        // for column_end

        for (int row=row_start; row<=row_end; row++){
            cout<<a[row][col_end]<<' ';
        }
        col_end--;

        for (int col=col_end; col>=col_start; col--){
            cout<<a[row_end][col]<<" ";
        }
        row_end--;

        for (int row=row_end; row>=row_start; row--){
            cout<<a[row][col_start]<<" ";
        }
        col_start++;
    }
    return 0;
    

}
