#include <iostream>
using namespace std;

int main(){

    int a; //declaration
    a = 10; //assignment

    cout<<"size of int:"<<sizeof(a)<<endl;

    float b; //declaration
    b = 3.14; //assignment

    cout<<"size of float:"<<sizeof(b)<<endl;

    char c; //declaration
    c='a'; //assignment

    cout<<"size of a char:"<<sizeof(c)<<endl;

    bool d;
    d=true;

    cout<<"size of a bool:"<<sizeof(d)<<endl;

    short int si;
    long int li;
    cout<<"size of a short int:"<<sizeof(si)<<endl;
    cout<<"size of a long int:"<<sizeof(li)<<endl;

    return 0;


}
