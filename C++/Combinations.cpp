#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n";
cin>>n;
int r;
cout<<"enter r";
cin>>r;
int fn=1;
int fr=1;
int fnr=1;
int c=n-r;
for(int i=1;i<=n;i++){
    fn*=i;
}
for(int i=1;i<=r;i++){
    fr*=i;
}
for(int i=1;i<=c;i++){
    fnr=fnr*i;
}
int k=fr*fnr;
double d=fn/k;
cout<<d;
}