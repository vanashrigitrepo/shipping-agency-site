#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v={1,2,3,2,3,4,1,2,2};
int k;
int x=10;
int* p=&x;
cout<<*p<<" hello";
cout<<"enter value";
cin>>k;
int c=1;

for(int i=0;i<v.size();i++){
if(v[i]==k){
    c++; 
}
} 
if(c>0){
    cout<<k<<" occured "<<c<<" times"<<endl;

} else{
    cout<<k<<" not found";
}
return 0;
}
