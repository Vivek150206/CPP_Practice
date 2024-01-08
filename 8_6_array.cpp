// Print all the subarrays of an array

#include <iostream>
using namespace std;

int main1() {

    int n;
    cin>>n;

    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    for (int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            for (int k=i; k<=j; k++){
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
    }
}

// maximum subarray sum

int main4() {
    int n;
    cin>>n;

    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    int ans_sum=0;

    for (int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            int temp_sum=0;
            for (int k=i; k<=j; k++){
                temp_sum+=a[j];
            }
            ans_sum=max(ans_sum,temp_sum);
        }
    }
    cout<<ans_sum<<endl;
}

// Cumulative Sum approach.
int main2() {
    int n;
    cin>>n;

    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    int currsum[n+1];
    currsum[0]=0;
    for (int i =1; i<=n; i++){
        currsum[i]=currsum[i-1]+a[i-1];
    }

    int maxSum = INT16_MIN;
    for (int i=1; i<=n; i++){
        int sum=0;
        for (int j=0; j<i; j++){
            sum=currsum[i]-currsum[i-1];
            maxSum=max(sum, maxSum);
        }
    }
    cout<<maxSum<<endl;
}

// Kadane's Algo

int main3() {
    int n;
    cin>>n;

    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    int currSum=0;
    int maxSum=INT32_MIN;

    for (int i=0; i<n; i++){
        currSum+=a[i];
        if (currSum<0){
            currSum=0;
        }
        maxSum=max(maxSum, currSum);
    } 
    cout<<maxSum<<endl;
}

// Maximum Circular Subarray Sum

// algorithm
// max subarray sum = total sum of array - sum of non contributing elements
// non contributing elements = min subarray sum
// min subarray sum = - max subarray sum of inverted array(add a negative sign to all elements)
// and then apply kadane's algo

int main(){
    int n;
    cin>>n;

    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    // Sum of array
    int sum=0;
    for (int i=0; i<n; i++){
        sum+=a[i];
    }

    // change the sign of all elements
    int sign[n];
    for (int i=0; i<n; i++){
        sign[i]=-a[i];
    }

    int currSum=0;
    int maxSum=INT32_MIN;

    for (int i=0; i<n; i++){
        currSum+=sign[i];
        if (currSum<0){
            currSum=0;
        }
        maxSum=max(maxSum, currSum);
    }
    int totalSum=sum+maxSum;
    cout<<totalSum<<endl;
    return 0;
}

// Subarray with given sum
//array should be sorted

bool pairsum(int a[], int k, int n){
    int low=0;
    int high=n-1;

    while (low<high){
        if (a[low]+a[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if (a[low]+a[high]>k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}