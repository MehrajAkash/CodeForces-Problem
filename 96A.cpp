#include<iostream>
using namespace std;
int main(){
int n,count1=0,count0=0,item;
string player;
cin>>player;

for(int i=0;i<player.size();i++){
    if(player[i]=='0'){
        count0++;
        count1=0;
    }
    else{
        count1++;
        count0=0;
    }

    if(count0>=7 || count1>=7){
    cout<<"YES"<<endl;
    return 0;
    }
}


    cout<<"NO"<<endl;







return 0;
}
