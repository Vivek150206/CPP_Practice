#include <iostream>
using namespace std;

// int main() {

//     int n;
//     cin>>n;

//     int a[n];

//     for (int i=0; i<n; i++){
//         cin>>a[i];
//     }

//     const int N = 1e6 + 2;
//     int idx[N]; 

//     for (int i=0; i<n; i++)
//     {
//         idx[i]=-1;
//     }
    
//     int minidx = INT16_MAX;

//     for (int i=0; i<n; i++){
//         if (idx[a[i]] != -1){
//             minidx=min(minidx, idx[a[i]]);
//         }
//         else{
//             idx[a[i]] = i;
//         }
//     }

//     if (minidx==INT16_MAX){
//         cout<<"-1"<<endl;
//     }
//     else{
//         cout<<minidx<<endl;
//     }
    
// }

// Continuous subarray summing up to S

// int main(){
//     int n,s;
//     cin>>n>>s;

//     int a[n];
//     for (int i=0; i<n; i++){
//         cin>>a[i];
//     }

//     int i=0, j=0, st=-1, en=-1, sum=0;
//     // Double pointer approach. for i and j
//     // start and end variables just to store the answer.

//     while (j<n && sum+a[j]<=s){
//         sum+=a[j];
//         j++;
//     }

//     if (sum == s){
//         cout<<i+1<<" "<<j<<endl;
//         return 0;
//     }

//     while (j<n){
//         sum +=a[j];
//         while (sum>s){
//             sum-+a[i];
//             i++;
//         }

//         if (sum==s){
//             st=i+1;
//             en=j+1;
//             break;
//         }
//         j++;
//     }

//     cout<<st<<" "<<en<<endl;
// }

// Smallest positive number.

int main() {
    int n;
    cin>>n;

    int a[n];

    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    int N=1e6+2;
    bool check[N];
    for (int i=0; i<N; i++){
        check[i]=false;
    }  

    for (int i=1; i<n; i++){
        if (a[i]>0) {
            check[a[i]]=true;
        }
    }

    for (int i=1; i<N; i++){
        if (check[i]==false){
            cout <<i<<endl;
            break;
        }
    }
}