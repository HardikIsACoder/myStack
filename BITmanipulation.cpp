#include<iostream>
using namespace std;

bool isPowerof2(int n){
    return (n && !(n & n-1));
}

int numberofones (int n) {
    int cn=0;
    while(n){
        n = n & (n-1);
        cn++;
    }

    return cn;
}

void subsets (int a[] , int n){

    for( int i = 0; i< (1<<n) ; i++){
        for( int j=0; j<n; j++){
            if(i & (1<<j) ){
                cout<<a[j]<<"  ";
            }
        }
        cout<<endl;
    }
}

int unique(int a[], int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum = xorsum^a[i];
    }
    return xorsum;
}

// int setBit( int n, int pos){
//     return ((n & (1<<pos)) != 0);
// }

int setBit( int n, int pos){
    return (n | (1 << pos));
}
void unique2( int a[] , int n){
    int xorsum=0;
    for( int i=0;i<n;i++){
        xorsum=xorsum^a[i];
    }
    int tempxor=xorsum;
    int setbit=0;
    int pos=0;
    while( setbit!=1){
        setbit=xorsum & 1;
        pos++;
        xorsum = xorsum >>1;
    }

    int newxor=0;
    for(int i=0;i<n;i++){
        if(setBit( a[i] , pos-1)){
            newxor=newxor^a[i];
        }
    }

    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;
}

bool getBit(int n, int pos){
    return ((n & (1 << pos)) != 0);
}

int unique3 (int a[], int n){
    int result=0;

    for(int i=0;i<64;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(getBit( a[j], i )){
                sum++;
            }
        }

        if(sum%3 != 0){
            result = setBit( result, i);
        }
    }

    return result;
}

int main(){

    //cout<<isPowerof2(16)<<endl;
    //cout<<numberofones(19)<<endl;
    // int arr[] = {1, 2, 3, 4};
    // subsets(arr,4);
    // int a[]={1, 2, 3, 4, 1, 2, 3};      //array is such that every no. is repeating except one number.
    // cout<<unique(a,7)<<endl;            //to find unique no. in the array

    // int arr[] = {1, 2, 3, 1, 2, 3, 5, 7};
    // unique2(arr,8);                        //to find two unique no.
    int arr[]= {1, 2, 3, 4, 1, 2, 3, 1, 2, 3};//to find a unique no. in an array where every element is appering thrice except one.
    cout<<unique3(arr, 10)<<endl;
    return 0;
}