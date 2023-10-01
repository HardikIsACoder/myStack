#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i;

    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    const int N= 100;
    int idx[N];
    for(i=0; i<N; i++){
        idx[i]=-1;
    }
    
    int minidx= INT_MAX;

    for(i=0; i<n; i++){

        if(idx[a[i]] != -1){
            minidx = min(minidx,idx[a[i]]);
        }

        else{
            idx[a[i]]=i;
        }
    }
    if(minidx==INT_MAX){
        cout<<"No repetition"<<endl;
    }
    else{
        cout<<a[minidx]<<endl;

    }
    return 0;

}