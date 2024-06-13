#include<iostream>
using namespace std;
int main(){
  int n,k,sol=0,a,b,c;
  cin>>n;

  if(n>=1&&n<=1000){
     for(int i=1;i<=n;i++){
      cin>>a>>b>>c;
      k=a+b+c>1?1:0;
      sol=sol+k;
      k=0;
  }
     cout<<sol<<endl;

}



  return 0;
}
