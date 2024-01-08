#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Converting a string of mixed case to uppercase 
// "ienRbFarF" -> "IENRBFARF"

int main1()
{
    string str="hsuiFsDf";

    for (int i=0; i<str.length(); i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
    }
    cout<<str;
}

// Converting to lowercase

int main2()
{
    string str="hsUiFsDf";

    for (int i=0; i<str.length(); i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
    }
    cout<<str;
}

// using inbuilt function

int main3()
{
    string s="fsDFefsvDEa";

    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;

}

// form the biggest number from a numeric string

int main4()
{
    string str="34213";
    
    sort(str.begin(), str.end(), greater<int>());
    
    // sort arguments: start, end, comparator
    // s.begin() and s.end() are iterators
    //   iterators are pointers that point to the first and last element of the string
    // comparator is a function that returns true or false
    // greater<int>() is a function that returns true if the first argument is greater than the second
    
    cout<<str<<endl;
}

// maximum frequency of a character

int main()
{
    string str="absbsasdbfasdfnaaa";

    int count[26];
    for (int i=0; i<26; i++){
        count[i]=0;
    }

    for (int i=0; i<str.size(); i++){
        count[str[i]-'a']++;
    }

    int result=0;
    for (int i=0; i<26; i++){
        if (count[i]>result){
            result=count[i];
        }
    }

    cout<<result<<endl;

}