#include<iostream>
using namespace std;
int main(){
 string s;
 cin>>s;
 int n,l=s.length();

for(int i=0;i<l;i=i+2){
    for(int j=0;j<l;j=j+2){
        if(s[i]<s[j]){
            int temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }
}
cout<<s<<endl;






 return 0;
}
