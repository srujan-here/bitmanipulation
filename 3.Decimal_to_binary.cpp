#include<bits/stdc++.h>
using namespace std;
void binary(int a){
    stack<int> s1;
    while(a>0){
        if((a%2)==0){
            s1.push(0);
        }
        else{
            s1.push(1);
        }
        a=a/2;
    }
    while(!s1.empty()){
        cout<<s1.top();
        s1.pop();
    }cout<<endl;

}

int main(){
    int a;
    cin>>a;
    binary(a);



}