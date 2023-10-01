#include<iostream>
using namespace std;

int divisible(int n, int a, int b){

    int c1 = n/a;           //count multiples of a till n
    int c2 = n/b;           //count multiples of b till n
    int c3 = n/(a*b);       //count multiples of a*b till n
    return c1 + c2 - c3;    //total no. of multiples of a and b till n.
}

int gcd(int a, int b){
    while(b != 0){
        int rem=a%b;
        a=b;
        b=rem;
    }

    return a;
}

int main(){

    // int n, a, b;
    // cin>>n>>a>>b;

    // cout<<divisible(n, a, b)<<endl;

    int a,b;
    cin>>a>>b;

    cout<<gcd(a, b)<<endl;  //greatest common divisor
    return 0;
}
