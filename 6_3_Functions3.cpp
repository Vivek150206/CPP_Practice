#include <iostream>
using namespace std;

int cumsum(int n){
    int sum=0;
    for (int i=1; i<=n; i++){
        sum+=i;
    }
    return sum;
}

// int main() {
//     int num;
//     cin>>num;

//     cout<<cumsum(num);
// }

// Pythagorean triplet
int max(int a, int b){
    if (a>=b){
        return a;
    }
    else{
        return b;
    }

}

bool pythagoras(int a,int b,int c){
    int p=max(a,max(b,c));
    int q,r;

    if (p==a){
        q=b;
        r=c;
    }
    else if (p==b){
        q=a;
        r=c;
    }
    else{
        q=a;
        r=b;
    }

    if ((p*p)==(q*q+r*r)){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    int x,y,z;
    cout<<"Enter the sides of the triangle";
    cin>>x>>y>>z;

    if (pythagoras(x,y,z)){
        cout<<"A Pythagorean Triplet";
    }
    else{
        cout<<"Not a Pythagorean Triplet";
    }
}

// add two binary number.

int reverse(int n){
    int ans=0;
    while (n>0){
        int lastdigit = n%10;
        ans=ans*10+lastdigit;
        n=n/10;
    }
    return ans;
}

int binaryadd(int n1, int n2){
    int result=0;
    int carry=0;
    
    while (n1>0 && n2>0){
        int lastdigit1=n1%2;
        int lastdigit2= n2%2;
        
        if (lastdigit1==0 && lastdigit2==0){
            result=result*10+carry;
            carry=0;
        }

        else if (lastdigit1==0 && lastdigit2==1){
            if (carry==0){
                result=result*10 +1;
                carry=0;
            }
            else{
                result=(result)*10;
                carry=1;
            }
        }

        else if (lastdigit1==1 && lastdigit2==0){
            if (carry==0){
                result=result*10+1;
                carry=0;
            }
            else{
                result=result*10;
                carry=1; 
            }
        }

        else{
            if (carry==0){
                result = result*10;
                carry=1;
            }
            else{
                result = result*10 +1;
                carry=1;
            }
        }
        n1=n1/10;
        n2=n2/10;
    }

    while(n1>0){
        if (carry==1){
            if (n1%2==1){
                result=result*10;
                carry=1;
            }
            else{
                result=result*10 +1;
                carry=0;
            }
        }
        else{
            result=result*10+ (n1%2);
        }
        n1/=10;   
    }

    while(n2>0){
        if (carry==1){
            if (n2%2==1){
                result=result*10;
                carry=1;
            }
            else{
                result=result*10 +1;
                carry=0;
            }
        }
        else{
            result=result*10+ (n2%2);
        }
        n2/=10;   
    }

    if (carry==1){
        result=result*10+1;
    }

    result=reverse(result);
    return result;
}

int main() {
    int a,b;
    cout<<"Enter two binary numbers";
    cin>>a>>b;
    cout<<binaryadd(a,b)<<endl;
}