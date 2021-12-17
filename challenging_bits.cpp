#include<bits/stdc++.h>
using namespace std;
bool is2power(int a){
    return ((a&(a-1))==0);
}
int noOfones(int a){
    int sum=0;
    while(a){
        sum++;
        a=a&(a-1);
    }
    return sum;
}

int main(){
    int a;
    cin>>a;
    cout<<is2power(a)<<endl;
    cout<<noOfones(a)<<endl;


}