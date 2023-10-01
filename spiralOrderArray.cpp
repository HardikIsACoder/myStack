#include<iostream>
using namespace std;

int main (){

    int n,m,r,c;
    cin>>n>>m;

    int a[n][m];
    for(r=0;r<n;r++){
        for(c=0;c<m;c++){
            cin >> a[r][c];
        }
    }

    int r_start = 0 , r_end = n-1 , c_start = 0 , c_end = m-1;

    while( r_start<=r_end && c_start<=c_end){

        for( c=c_start ; c<=c_end ; c++ ){
            cout << a[r_start][c] <<"  ";
        }

        r_start++;

        for( r=r_start ; r<=r_end ; r++ ){
            cout << a[r][c_end] <<"  ";
        }

        c_end--;

        for( c=c_end ; c>=c_start ; c-- ){
            cout << a[r_end][c] <<"  ";
        }

        r_end--;

        for( r=r_end ; r>=r_start ; r-- ){
            cout << a[r][c_start] <<"  ";
        }
        
        c_start++;
    }

    return 0;
}