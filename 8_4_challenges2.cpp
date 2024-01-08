// arithmetic subarray

#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    int ans=2;
    int pd=a[1]-a[0];
    int j=2;
    int curr=2;

    while (j<n){
        if (pd == a[j]-a[j-1]) {
            curr++;
        }
        else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans, curr);
        j++;
    }

    cout<<ans<<endl;
    return 0;

}

// int main() {

//     int n;
//     cin>>n;

//     int a[n];
//     for (int i=0; i<n; i++){
//         cin>>a[i];
//     }

//     int ans=0;

//     for (int i=0; i<n; i++){
//         for (int j=0; j<i; j++){
            
//         }
//         if ((i==0 || a[i]>a[i-1]) && (i==(n-1) || a[i]>a[i+1])){
//             ans+=1;
//         }
//     }
//     cout << ans<<endl;
// }

int main() {

    int n;
    cin>>n;

    int a[n+1];
    a[n]=-1;     // last element.

    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    if (n==1){
        cout<<"1"<<endl;
        return 0;
    }
    
    int ans=0;
    int mx=-1;

    for (int i=0; i<n; i++){
        if (a[i]>mx && a[i]>a[i+1]){
            ans++;
        }
        mx =max(mx, a[i]);
    }

    cout<<ans<<endl;

}

