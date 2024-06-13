#include<iostream>
using namespace std;
 int arr[]={1,2,3,4,5};
 int a[5];
void finsert(){
  int v,b,i,j;
  cout<<"enter first insert value"<<endl;
  cin>>v;
  a[0]=v;
 // int temp = a;
  for(int j=1;j<5;j++){
    a[j]=arr[j-1];
  }
}
void linsert(){
  int v,b,i,j;
  cout<<"enter last insert value"<<endl;
  cin>>v;
  a[4]=v;
 // int temp = a;
  for(int j=3;j>=0;j--){
    a[j]=arr[j+1];
  }
}
void display(){
  for(int i=0;i<5;i++){
    cout<<a[i]<<" ";
  }

}
int main(){
 display();
 finsert();
 display();
 linsert();
 display();

}
