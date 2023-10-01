#include<iostream>
using namespace std;

bool sorted( int a[], int n){
    if(n == 1){
        return true;
    }
    return ( a[0]<a[1] && sorted(a+1,n-1) );
}

void dec(int n){

    if(n==0){
        return;
    }

    cout<<n<<"  ";
    dec(n-1);

}

void inc(int n){

    if(n==0){
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}

int firstocc(int a[], int n, int i, int key){

    if (i==n){
        return -1;
    }

    if(a[i]==key){
        return i;
    }
    return firstocc(a, n, i+1, key);
}

int lastocc(int a[], int n, int i, int key){
    if (i==-1){
    return -1;
    }
    if(a[i]==key){
        return i;
    }
    return lastocc(a, n, i-1, key);
}

int main(){

    // int n;
    // cin>>n;

    // int a[] = {1,2,3,4,5,6,8,7};
    // cout<<sorted(a,8)<<endl;
    // dec(n);
    // inc(n);
    // int arr[] = {4, 2, 1, 2, 5, 2, 7};
    // cout<<firstocc(arr,7,0,2)<<endl;
    // cout<<lastocc(arr,7,6,2)<<endl;

    return 0;

}