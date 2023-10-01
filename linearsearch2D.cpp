#include<iostream>
using namespace std;

int main(){

    int n, m, i, j;
    cin>>n>>m;
    
    // matrix with sorted column and rows in ascending order
    // rows are sorted
    // columns are sorted

    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    
    int x;
    cin>>x;

    i=0;
    j=m-1;
    bool flag=false;

    while( i<n && j>=0){
        if(a[i][j]==x){
            flag=true;
            break;
        }

        if(a[i][j]>x){
            j--;
        }
        else
        i++;
    }
    if (flag){
        cout<<"Element found at "<<i+1<<" "<<j+1<<endl;
    }
    else
    cout<<"Not found."<<endl;

    return 0;
}