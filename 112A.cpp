#include<iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
 char s1[n],s2[n];
//if('b'>'B'){cout<<'B'-'b';} s1[1]='B'+32;
//cout<<s1[1];
 for(int j=0;j<n;j++){
   cin>>s1[j];
 }
 for(int j=0;j<n;j++){
   cin>>s2[j];
 }
 for(int i=0;i<n;i++){
    if((s1[i]==s2[i])||(s1[i]-s2[i]==32)||(s2[i]-s1[i]==32)){
        cout<<"0"<<endl;
    }
    if(s1[i]-s2[i]<32){
        cout<<"1"<<endl;
    }
    if(s2[i]-s1[i]<32){
        cout<<"-1"<<endl;
    }
 }




  return 0;
}
