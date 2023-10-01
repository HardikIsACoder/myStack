#include<iostream>
using namespace std;

int main (){

    int n;
    cin>>n;

    char a[n+1];
    cin>>a;

    bool check=1;

    for(int i=0;i<n;i++){
        if( a[i] != a[n-1-i]){
            check=0;
            break;
        }
    }

    if(check)
    cout<<"Word is Palindrome"<<endl;
    else
    cout<<"Word is not Palindrome"<<endl;

    return 0;
}