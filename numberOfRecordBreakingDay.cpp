#include<bits/stdc++.h>
using namespace std;

// This program tells the no. of total record breaking days where n is the no. of days 
// of the event and a[i] is the no. of visitors on the (i+1)th day of the event.
int main(){
    
    int n;
    cin>>n;
    int i;

    int a[n+1];
    a[n]=-1;

    for(i=0; i<n; i++){
        cin>>a[i];
    }

    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
    int mx=-1;
    int ans=0;

    for(i=0; i<n; i++){
        if(a[i]>mx && a[i]>a[i+1]){
            ans++;
        }
        mx=max(mx,a[i]);
    }

    cout<<ans<<endl;
    return 0;
}