#include<iostream>
using namespace std;

int main(){
    
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin>>n;

    int sum=0;
    for(int counter=1;counter<=n;counter++){
        sum=sum+counter;
    }

    cout<<sum<<endl;

    return 0;
}