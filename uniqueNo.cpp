#include<bits/stdc++.h>
using namespace std;
void RemDuplicates(int a[],int n){
int sum=0;
for(int i=0;i<n;i++){
    sum=sum^a[i];
}
 cout<<sum<<endl;
}
int main(){
    int a;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    RemDuplicates(b,a);
}