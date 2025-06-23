#include<iostream>
#include<cmath>
using namespace std;
int main(){
int arr[]={1,2,3,4,5,6,7,8,9};
int s=sizeof(arr)/sizeof(arr[0]);
int arr2[s];
for(int i=0;i<s;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
int index=0;
for(int i=s-1;i>=0;i--){
arr2[index++]=arr[i];
}
for(int i=0;i<s;i++){
    cout<<arr2[i]<<" ";
}
}