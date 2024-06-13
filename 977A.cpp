#include<iostream>
using namespace std;
int main(){
 int n,k,count=0,r;
 cin>>n>>k;
 if((2<=n<=1000000000) && (1<=k<=50)){
    for(int i=1;i<=k;i++){
    r=n%10;
    if(r==0){
        n=n/10;
    }
    else{
        n--;
     }
    }
 }

cout<<n<<endl;




 return 0;
}
