#include<iostream>
#include<string>
using namespace std;

void reverse( string str){
    if(str.length()==0){
        return;
    }
    reverse(str.substr(1));
    cout<<str[0];

}
void replace(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        replace(s.substr(2));
    }
    else{
        cout<<s[0];
        replace(s.substr(1));
    }
}

string removeDup(string s){
    if(s.length()==0){
        return "";
    }

    string ans=removeDup(s.substr(1));

    if(s[0] == ans[0]){
        return ans;
    }
    return s[0]+ans;
}

string putx(string s){

    if(s.length()==0){
        return "";
    }

    if(s[0] == 'x'){        
        return putx(s.substr(1)) + 'x';
    }

    return s[0] + putx(s.substr(1));
}

void subseq(string s, string ans){

    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    subseq(s.substr(1),ans);
    subseq(s.substr(1),ans +s[0]);
}

void subseq2(string s, string ans){

    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    int code=s[0];
    subseq2(s.substr(1),ans);
    subseq2(s.substr(1),ans +s[0]);
    subseq2(s.substr(1),ans + to_string(code));
}

string keypadArr[] = { "" , "" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz" };

void keyPad(string s, string ans){
    if(s.length() == 0){
        cout<<ans<<endl;
        return;
    }

    string code = keypadArr[s[0]-'0'];

    for(int i=0; i<code.length(); i++){
        keyPad(s.substr(1), ans + code[i]);
    } 
}

int main (){
    // char str[] = "stringss";
    // reverse(str);
    //cout<<removeDup("aaaabbbbedddcc");
    // replace("pippppiiiipi");
    //cout<<putx("xxxlxxxjfsxxxlxxihsxxz");
    //subseq("AB", "");
    //subseq2("AB","");
    keyPad("23","");


}