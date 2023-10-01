#include<iostream>
using namespace std;

void permutation(string s, string ans){

    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    for(int i=0;i<s.length();i++){
        string ros = s.substr(0,i) + s.substr(i+1);

        permutation(ros, ans+s[i]);
    }
}

int countPath(int s, int e){

    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }

    int cn=0;
    for(int i=1;i<=6;i++){
        cn+=countPath(s+i, e);
    }
    return cn;
}

int countPathMaze(int n,int i,int j){

    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n | j>=n){
        return 0;
    }
    return countPathMaze(n, i+1, j) + countPathMaze(n, i, j+1);
}

int main(){
    cout<<countPathMaze(5,0,0);
    //cout<<countPath(0, 3)<<endl;
    //permutation("ABC", "");
}