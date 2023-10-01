#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i, j;

    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    int maxSum=INT_MIN;

    int currSum[n+1];
    currSum[0]=0;

    for(i=1;i<=n;i++){
        currSum[i] = currSum[i-1] + a[i-1];
    }

    for(i=1;i<=n;i++){
        int sum=0;
        for(j=0;j<i;j++){
            sum = currSum[i] - currSum[j];
            maxSum = max(maxSum, sum);
        }
    }
    cout<<maxSum<<endl;

    return 0;
}