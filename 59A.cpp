#include<iostream>
#include<string>
using namespace std;//65 97
int main(){
string s,f;
cin>>s;
int sm=0,cp=0;
for(int i=0;i<s.length();i++){
    if(isupper(s[i])) {cp++;}
    if(islower(s[i])) {sm++;}
}

if(cp>sm){
        for(int i=0;i<s.length();i++){
            s[i]=toupper(s[i]);
        }
        cout<<s<<endl;
}
else{
    for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
}




return 0;
}
