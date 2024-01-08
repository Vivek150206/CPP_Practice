// program to find sum of first n natural numbers
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int sum;
    sum = 0;

    // for (initialization; condition; updation){
    //   body
    // }

    for (int i=0; i<=n; i++) {
        sum+=i;    
    }
    cout<<sum<<endl;
}

// while loop

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    while (n>0){
        cout<<n<<endl;
        cin>>n;
    }
}

// do while loop

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    do{
        cout<<n<<endl;
        cin>>n;
    }while (n>0);
}

// the difference between while and do while loop is that in while loop the condition is checked first and then the body is executed but in   do while loop the body is executed first and then the condition is checked and based on the condition the body is executed again

// Extra Questions

// program to print multiplication table of a number

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for (int i=1; i<=10; i++) {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
}

// 

