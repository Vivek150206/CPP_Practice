// What is Backtracking??

// Backtracking is an algorithmic-technique for solving problems recursively by trying to build a solution incrementally, one piece at a time, removing those solutions that fail to satisfy the constraints of the problem at any point of time (by time, here, is referred to the time elapsed till reaching any level of the search tree).


#include <iostream>
using namespace std;

bool isSafe(int** arr, int x, int y, int n){
    if (x<n && y<n && arr[x][y]==1) {
        return true;
    }
    return false;
}

bool ratInMaze(int** arr, int x,int y, int n, int** Solarr){

    // base condition
    if (x == n-1 && y == n-1 ){
        Solarr[x][y]=1;
        return true;
    }

    if (isSafe(arr, x, y, n)){
        Solarr[x][y]=1;
        if (ratInMaze(arr, x+1, y, n, Solarr)){
            return true;
        }
        if (ratInMaze(arr, x, y+1, n, Solarr)){
            return true;
        }
        Solarr[x][y]=0;             // Backtracking
        return false;
    }
    return false;
}

int main(){
    int n;
    cin>>n;

    int** arr = new int*[n];
    for (int i=0; i<n; i++){
        arr[i] = new int[n];
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    int** Solarr = new int*[n];
    for (int i=0; i<n; i++){
        Solarr[i] = new int[n];
        for (int j=0; j<n; j++){
            Solarr[i][j]=0;
        }
    }

    if (ratInMaze(arr, 0, 0, n, Solarr)){
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                cout<<Solarr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;

}

// Time Complexity: O(2^n)
// Space Complexity: O(2^n)

/* 1 0 1 0 1
   1 1 1 1 1
   0 1 0 1 0
   1 0 0 1 1
   1 0 0 1 1  */