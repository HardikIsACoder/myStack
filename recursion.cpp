#include<iostream>
using namespace std;

long long sum(int n){

    if(n == 0){
        return 0;
    }
    else{
        return n + sum(n-1);
    }
}

long long power(int n, int p){

    if(p == 0){
        return 1;
    }
    else{
        return n * power(n,p-1);
    }
}

long long fact( int n ){
    if(n==0){
        return 1;
    }
    else {
        return n * fact(n-1);
    }
}

int fib(int n){
    if(n<=0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}

int main(){

    int n;
    cin>>n;
    for(int i=0 ;i<n; i++){
        cout<<fib(i)<<"  ";
    }

    // cout<<sum(n)<<endl;                //sum of integers till n
    // cout<<fact(n)<<endl;
    // int p;
    // cin>>p;

    // cout<<power(n,p)<<endl;               //pth power of n

}