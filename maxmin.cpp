#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n,i;
    cout<<"Enter no. of elements of array:"<<endl;
    cin>>n;
    
    int a[n];
    cout<<"Enter elements"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for(i=0;i<n;i++){
        maxNo=max(maxNo,a[i]);
        minNo=min(minNo,a[i]);
    }

    cout<<"Max="<<maxNo<<endl;
    cout<<"Min="<<minNo<<endl;

    return 0;
}