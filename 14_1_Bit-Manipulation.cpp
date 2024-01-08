// Bit manipulation 

#include <iostream>
using namespace std;

// Get Bit

// To check which bit is present in number n at position p in binary form

int GetBit(int n, int p){
    int sample=(1<<p);
    if ((sample & n)==0){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
    }
}
int getbit(int n, int p){
    return (((1<<p) & n)!=0);
} // same function , one liner

int main(){
    GetBit(5,2);
}

// Set Bit
// Set means to put 1 on any position.

int SetBit(int n, int pos){
    return (n | (1<<pos));
}

int ClearBit(int n, int pos){
    return (n & (~(1<<pos)));
}

int UpdateBit(int n, int pos, int no){
    if (no==1){
        return (n | (1<<pos));
    }else{
        return (n & (~(1<<pos)));
    }
}