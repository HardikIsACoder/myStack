#include<bits/stdc++.h>
using namespace std;

int main(){

    int i,n,s;
    cin >> n >> s;

    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }

    int j=0, st=-1, en=-1, sum=0;
    i=0;

    while(j<n && a[j] + sum <= s){

        sum+=a[j];
        j++;
    }
    if(sum==s){
        cout<< i+1<<" "<< j<<endl;
        return 0;
    }

    while(j<n){
        sum+=a[j];

        while(sum>s){
            sum-=a[i];
            i++;
        }
        if(sum==s){
            st=i+1;
            en=j+1;
            break;
        }

        j++;
    }

    cout<<st<<" "<<en<<endl;
    return 0;
}