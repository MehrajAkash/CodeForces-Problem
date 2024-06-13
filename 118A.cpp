#include<iostream>
#include<string>

using namespace std;
int main(){
 string s,f;
 cin>>s;
 int n=s.size();

 for(int i=0;i<n;i++){
        s[i]=tolower(s[i]);
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
        continue;

    }
    else{
        f+='.';
        f+=s[i];
    }
 }


cout<<f<<endl;








return 0;
}
