#include<iostream>
using namespace std;
int main(){
 int arr[5][5],i,j,v,r,c;
 for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>v;
        if(v==0){
            arr[i][j]=v;
        }
        if(v==1){
            r=2-i; c=2-j;
            if(r<0)r=-r;
            if(c<0)c=-c;
            break;
        }

    }
 }
 cout<<r+c<<endl;


  return 0;
}
