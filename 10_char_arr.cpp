#include <iostream>
using namespace std;

int main1() {
    char arr[10]="apple";
    int i=0;

    while (arr[i]!='\0'){
        cout<<arr[i];
        i++;
    }
    return 0;
}

// check palindrome

int main2(){
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check=true;

    for (int i=0; i<n; i++){
        if (arr[i]!=arr[n-1-i]){
            check=0;
            break;
        }
    }
    if (check){
        cout<<"Palindrome";
    }else{
        cout<<"Not a Palindrome";
    }
}

// Largest word in a sentence.

int main() {
    int n;
    cout<<"Length of the sentence: ";
    cin>>n;

    char arr[n+1];

    cin.getline(arr,n); // to get rid of the \n character
    cin.ignore();       // to ignore the \n character

    int ans=0, curr=0;
    int i=0;

    while (true){

        if (arr[i] == ' ' || arr[i] == '/0'){

            if (ans<curr){
                ans=curr;
            }

            curr=0;
        }else{
            curr++;
        }

        if (arr[i]=='\0'){
            break;
        }
        i++;
    }

    cout<<ans<<endl;

}