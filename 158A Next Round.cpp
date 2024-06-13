#include<iostream>
using namespace std;
int main(){
 int n,k,countt=0;
 cin>>n>>k;
 int arr[n];
 if(1<=k<=n<=50){
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    for(int i=0;i<n;i++){
    //cin>>arr[i];
     if(arr[i]>=arr[k-1] && arr[i]>0){
        countt++;
     }
    }
    cout<<countt<<endl;
 }






 return 0;
}
