// Inverted pattern

// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1 

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Length of pattern ";
//     cin>>n;

//     for (int i=n; i>=1; i--){
//         for (int j=1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 0 1 pattern

// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Length of pattern ";
//     cin>>n;

//     for (int i=1; i<=n; i++){
//         for (int j=1; j<=i; j++){
//             if ((i+j)%2==0){
//                 cout<<"1 ";
//             }
//             else{
//                 cout<<"0 ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Rhombus pattern

//       * * * *
//     * * * *
//   * * * *
// * * * *

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Length of pattern ";
    cin>>n;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for (int j=1; j<=n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

// 