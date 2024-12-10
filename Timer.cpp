//timer problem 12 -24
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string h="",m="",noon="",sec="";
    for(int i=0;i<10;i++){
        if(i<2)
            h+=s[i];
        else if(i>2 && i<5)
            m+=s[i];
        else if(i>5 && i<8)
            sec+=s[i];
        else if(i>7)
            noon+=s[i];
    }
    if(noon=="AM"){
        if(h=="12"){
            h="00";
        }
    }
    else{
        if(h!="12"){
            int h1=stoi(h);
            h1=h1+12;
            h=to_string(h1);
        }
        
    }
    cout<<h<<":"<<m<<":"<<sec;
}
