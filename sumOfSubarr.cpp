#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    // input no. of elements
    cin>>n;

    int i,j,curr=0;
    int a[n];
    // input elements of array
    for(i=0; i<n; i++){
        cin>>a[i];
    }

    for(i=0; i<n; i++){
        curr=0;
        for(j=i; j<n; j++){
            curr+=a[j];
            cout<<curr<<endl;
        }
    }
    return 0;
}