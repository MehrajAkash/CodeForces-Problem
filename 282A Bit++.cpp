#include<iostream>
using namespace std;
int main(){
 string s; int n,X=0;
 cin>>n;
 while(n--){
    cin>>s;
    if(s=="++X" || s=="X++"){
        ++X;
    }
    else{
        --X;
    }

 }
 cout<<X<<endl;








return 0;
}
/*
#import<cstdio>
char s[4];int x;main(){for(gets(s);gets(s);x+=44-s[1]);printf("%d",x);} */
