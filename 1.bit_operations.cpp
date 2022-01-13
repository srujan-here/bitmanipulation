#include<bits/stdc++.h>
using namespace std;
bool even(int a){
if((a&1)==0)
return true;
return false;
}
void swap(int &a,int &b){
a=a^b;
b=b^a;
a=a^b;
}
int No_of_setBit(int a){
    int b=0;
while(a){
     b+=a&1;
    a=a>>1;
}
return b;
}
int getBit(int a,int b){
    return ((a&(1<<b))!=0);
}
int clearbit(int a,int b){
    return (a&(~(1<<b)));
}
int setBit(int a,int n){
return a|(1<<n);
}
int updateBit(int a,int b,int c){
    int mask=~(1<<b);
    int n=a&mask;
    return n|(1<<c);
}
int main(){
    // int a,b;
    // cin>>a>>b;
   //cout<<even(a)<<endl;
   //swap(a,b);
   //cout<<a<<" "<<b<<endl;
// int a;
// cin>>a;
// cout<<No_of_setBit(a)<<endl;
// cout<<getBit(a,b)<<endl;
//  cout<<setBit(a,b)<<endl;
//    cout<<clearbit(a,b)<<endl;
int a,b,c;
cin>>a>>b>>c;
cout<<updateBit(a,b,c)<<endl;

}