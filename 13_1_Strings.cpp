#include <iostream>
#include <string>

using namespace std;

int main1() 
{
    string str;
    cin>>str;
    cout<<str;
}

// Different ways to define a string.

int main2() {
    string str;
    string str1(5,'n');  //Prints the character n 5 times.
    cout<<str1<<endl;
}

int main3() {
    string str="VivekKumar";
    cout<<str;
}

int main4() {
    string str;
    getline(cin,str);
    // cin>>str;       // here is a problem while including spaces in the string as 
                       // it would not consider space in the sring rather breaking it in two parts.
    cout<<str;
}

// different functions of strings

int main5() 
{
    string str;
    string s1="fam", s2="ily";

    s1.append(s2);
    cout<<s1<<endl;      // family
    cout<<s1+s2<<endl;   // familyily

    // transversing a string 
    cout<<s1[1]<<endl;    // a

}

// Clear function

int main6()
{
    string str="slkdnfnvln jnvljkn ejnv ";
    str.clear();         // Clears the string
    cout<<str<<endl;
}

// comparison of two strings

int main7() {
    string s2="xyz";
    string s1="abc";

    if (s1.compare(s2)==0){
        cout<<"strings are equal";
    }

    cout<<s1.compare(s2)<<endl;
    /* returns negative if s1<s2
    returns positive if s1>s2
    the fact is it is performing s1-s2*/
}

// str.empty() returns true if he string is empty

// str.erase(index to start, no. of terms to be erased)

int main8(){
    string str="nincompoop";
    str.erase(3,2);
    cout<<str<<endl;      // ninmpoop
}

// substring
// find function

int main9() {
    string str="nincompoop";
    cout<<str.find("poop")<<endl;
    // it would return the index where the substirng starts
}

// str.insert(index, string to insert) 

int main10() {
    string str="nincompoop";
    str.insert(2,"lol");
    cout<<str<<endl;   // nilolncompoop
}

// str.size() or str.length()
// Tells the length of the string

int main11() {
    string str="nincompoop";
    cout<<str.length()<<endl;
    cout<<str.size() <<endl;
}

// Transversing a string

int main12(){
    string str="nincompooop";
    for (int i=0; i<str.length(); i++){
        cout<<str[i]<<endl;
    }
}

// Function to slice a string 
// str.substr(starting index, no. of terms)

int main13() {
    string str="nincompoop";
    string s=str.substr(6,4);
    cout<<s<<endl;
}

// string to integer 

int main14() {
    string str="786";
    int x=stoi(str);
    cout<<x<<endl;
}

int main15() {
    int x=123;
    cout<<to_string(x)<<endl;
    // to convert any number to string
}

// Sorting a string

#include <algorithm>
int main() {
    string s="wuefbnksvvaf";
    sort(s.begin(), s.end());
    cout<<s<<endl;
}

