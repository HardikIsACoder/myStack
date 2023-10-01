#include<iostream>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    int n;
    cin>>n;
    
    do{
        cout<<n<<endl;
        cin>>n;
    }while(n>0);
    
    return 0;
}