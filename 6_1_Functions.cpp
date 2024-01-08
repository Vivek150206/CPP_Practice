#include <iostream>
using namespace std;

int print(int abc){
    cout<<abc<<endl;
    return 0;
}

int sum(int n1, int n2){
    int sum=n1+n2;
    return sum;
}

int main() {
    int a, b;
    cin>>a>>b;

    print(sum(a,b));
}
