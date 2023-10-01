#include<bits/stdc++.h>
using namespace std;
//program for displaying the maximum no. in array till the ith element

int main(){

    int mx;
    int n;
    cout<<"Input array size:";
    cin>>n;

    int a[n];
    cout<<"Enter array elements:"<<endl;
    
    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    mx=a[0];

    for(i=0;i<n;i++){
        mx=max(mx,a[i]);
        cout<<"Max till "<<i+1<<" element is "<<mx<<endl;
    }

    return 0;
}