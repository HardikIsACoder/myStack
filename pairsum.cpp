#include<iostream>
using namespace std;

// This cose is for a sorted array case.
// If the array is not sorted then sort the array first.

bool pairsum(int a[], int k, int n){

    int low=0;
    int high=n-1;

    while(low<high){
        if( a[low] + a[high] == k){
            cout<<low<<"  "<<high<<endl;
            return true;
        }

        else if( a[low] + a[high] >k)
        high--;

        else
        low++;
    }
    return false;
}

int main(){

    int a[]= {2, 4, 7, 11, 14, 16, 20, 21};
    int k=31;

    cout<<pairsum( a, k, 8)<<endl;

    return 0;
}