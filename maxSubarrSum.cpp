#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i, j, k;

    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    int maxSum=INT_MIN;

    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            int sum=0;
            for(k=i;k<=j;k++){
                sum+=a[k];
            }
            maxSum=max(maxSum,sum);
        }
    }

    cout<<maxSum<<endl;

    return 0;
}