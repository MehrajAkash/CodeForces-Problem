#include<iostream>
using namespace std;
int main(){
int n;
string a,b;
cin>>n;

for(int i=0;i<n;i++){
    cin>>a>>b;
    char temp= a[0];
    a[0] = b[0];
    b[0] = temp;

    cout<<a<<" "<<b<<endl;
}




return 0;
}
