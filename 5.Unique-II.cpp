#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int b[n];
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    int temp=0;
    for(int i=0; i<n; i++){
        temp=temp^b[i];
    }
   int p=0;
   while((temp&1)==0){

       p++;
       temp=temp>>1;
      
   }
   int setA=0;
   int setB=0;
   for(int i=0; i<n; i++){
       if((b[i]&(1<<p))>0){
           setA=setA^b[i];


       }
       else{
           setB=setB^b[i];
       }
   }
   cout<<setA<<" "<<setB<<endl;
    
}