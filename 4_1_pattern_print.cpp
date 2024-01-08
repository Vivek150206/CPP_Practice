// program to form a rectangular pattern of stars.

// * * * * 
// * * * *
// * * * *
// * * * *
// * * * *

#include <iostream>
using namespace std;

int main() {
    int rows, columns;

    cout<<"Enter the number of rows:";
    cin>>rows;

    cout<<"Enter the number of columns";
    cin>>columns;

    for (int i=1; i<=rows; i++ ) {
        for (int j=1; j<=columns; j++ ){
            cout<<"*";
        }
        cout<<"\n";
    }
}

// Hollow rectangular pattern

// * * * * *
// *       *
// *       *
// * * * * *

#include <iostream>
using namespace std;

int main() {
    int rows, columns;

    cout<<"Enter the number of rows:";
    cin>>rows;

    cout<<"Enter the number of columns";
    cin>>columns;

    for (int i=1; i<=rows; i++) {
        if (i==1 || i==rows){
            for (int j=1; j<=columns; j++){
                cout<<"* ";
            }
            cout<<"\n";
        }

        else{
            for (int j=1; j<=columns; j++){
                if (j==1 || j==columns){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<"\n";
        }    
    }
}

// Inverted half pyramid

// *
// * *
// * * *
// * * * *
// * * * * *

#include <iostream>
using namespace std;

int main() {
    int lines;
    cout<<"Enter the number of lines:";
    cin>>lines;

    for (int i=lines; i>=1; i--) {
        for (int j=1; j<=i; j++) {
            cout<<"*";
        }
        cout<<"\n";
    }
}

// Half inverted triangle right shifted

//       *
//     * * 
//   * * *
// * * * *

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++){
            if (j<=n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    return 0;
}

// Half pyramid using numbers.

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Length of the pyramid: ";
    cin>>n;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

// Floyd's Triangle

// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Length of the pyramid: ";
    cin>>n;

    int count=1;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++){
            cout<<count++<<" ";
        }
        cout<<endl;
    }
}

// Butterfly pattern

// *             * 
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * * * * * * * 
// * * *     * * *
// * *         * * 
// *             * 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Length of pyramid: ";
    cin>>n;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=2*n; j++){
            if (j<=i || j>=(2*n-i+1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    for (int i=n; i>=1; i--){
        for (int j=1; j<=2*n; j++){
                if (j<=i || j>=(2*n-i+1)){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
    }
    return 0;
}