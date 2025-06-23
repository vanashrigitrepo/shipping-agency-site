#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
int arr[]={1,2,3,4,5,6,7,8,9};
int s=sizeof(arr)/sizeof(arr[0]);
int arr2[s];
int index=0;
for(int i=s-1;i>=0;i--){
    arr2[index++]=arr[i];
}
if(equal(arr,arr+s,arr2)){
cout<<"True";
}else{
    cout<<"false";
}
// string s1="hello";
// cout<<s1.size();
}