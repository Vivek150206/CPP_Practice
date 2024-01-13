#include <iostream>
using namespace std;
#include <string>
#include "16_Recursion.h"

// Add all numbers till n using recursion

int sum(int n){
    if (n==0){
        return 0;
    }else{
        return n+sum(n-1);
    }
}

// Factorial

int Factorial(int n){
    if (n==0){
        return 1;
    }else{
        return n*Factorial(n-1);
    }
}

// Fibonacci Series

int Fibonacci(int n){
    if (n==1){
        return 0;
    }else if(n==2){
        return 1;
    }
    else{
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
}

// Check whether a array is sorted or not

bool sorted(int arr[], int n){

    if (n==1){
        return true;
    }

    bool restArray = sorted(arr+1, n-1);
    return (arr[0]<arr[1] && restArray);
}

void numberinc(int n){
    if (n==0){
        return;
    }
    numberinc(n-1);
    cout<<n<<" ";
}

void numdec(int n){
    if (n==0){
        return;
    }
    cout<<n<<" ";
    numdec(n-1);
}

// revese a string using recursion

void reverse( string s){

    if (s.size()==0){
        return;
    }
    
    string lastword = s.substr(s.size()-1);
    cout<<lastword;
    
    reverse(s.substr(0,s.size()-1));

}



// Replace occurences of Pi in the string with 3.14

void replacePi(string s){

    if (s.size()==0){
        return;
    }

    if (s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        replacePi(s.substr(2));
    }else{
        cout<<s[0];
        replacePi(s.substr(1));
    }
}

// Tower of Hanoi

void TowerOfHanoi(int n, char src, char dest, char helper){

    if (n==0){
        return;
    }

    TowerOfHanoi(n-1, src, helper, dest);

    cout<<"Move from "<<src<<" to "<<dest<<endl;
    
    TowerOfHanoi(n-1,helper, dest, src);

}

// Remove duplicates from a string
// aaabbbcccddeee -> abcde

void remove_duplicates(string s){
    // base case
    if (s.size()==0){
        return;
    }

    if (s[0]==s[1]){
        remove_duplicates(s.substr(1));
    }else{
        cout<<s[0]<<"";
        remove_duplicates(s.substr(1));
    } 
}

// Move all x to the end of the string
// axxbdxcefxhix -> abdcefhixxxxx

void move_x(string s){
    // base case
    if (s.size()==0){
        return;
    }

    int count=0;     // counter for x

    if (s[0]=='x'){
        count+=1;
        move_x(s.substr(1));
    }else{
        cout<<s[0]<<"";
        move_x(s.substr(1));
    }

    string str1(count,'x');
    cout<<str1;
}

// Print all the substrings of a string
// abc -> a, ab, abc, b, bc, c, ""

void substring(string s, string ans){

    // base case
    if (s.size()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    string ros=s.substr(1);   // Rest Of String

    substring(ros, ans);
    substring(ros, ans+ch);
}

// Print all the combinations using the keypad numbers
// 23 -> ad, ae, af, bd, be, bf, cd, ce, cf

string keypadArr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(string s, string ans){

    // base case
    if (s.size()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    string code=keypadArr[ch-'0'];
    string ros=s.substr(1);

    for (int i=0; i<code.size(); i++){
        keypad(ros, ans+code[i]);
    }

}

int main(){
    // numberinc(10);
    // reverse("binod");
    // replacePi("pisdihjpiasnpipp");

    // TowerOfHanoi(3,'A','B','C');
    string s="abc";
    // remove_duplicates(s);
    // move_x(s);
    substring(s, "");
}