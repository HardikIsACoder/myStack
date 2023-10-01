#include<iostream>
using namespace std;
/*fix this code
it gives wrong answer with "do or die"
and correct answer with "die or do"*/
int main (){

    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();

    int i=0;
    int currLen=0, maxLen=0;
    int st=0, maxst=0;

    while(1){

        if( a[i]  == ' ' || '\0'){
            if(currLen > maxLen )
            {
                maxLen=currLen;
                maxst=st;
            }
            currLen=0;
            st=i+1;
        }
        currLen++;
        
        if( a[i] == '\0' ){
            break;
        }
        i++;
    }

    cout<<maxLen<<endl;
    for(int i=0 ; i<maxLen; i++){
        cout<<a[i+maxst];
    }

    return 0;
}