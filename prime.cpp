#include<iostream>
#include<cmath>
using namespace std;

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    
    bool flag=0;
    
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Non-prime"<<endl;
            flag=1;
            break;
        }
     }

     if(flag==0){
        cout<<"Prime"<<endl;
     }
     return 0;  
}