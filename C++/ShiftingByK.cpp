#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,3,4,5,6};
int s=sizeof(arr)/sizeof(arr[0]);
int k=3;
int temp[k];
for(int i=0;i<k;i++){
temp[i]=arr[i];
}
for(int i=0;i<s-k;i++){
    arr[i]=arr[k+i];
}
for(int i=0;i<k;i++){
    arr[k+i]=temp[i];
}
for(int i=0;i<s;i++){
cout<<arr[i]<<" ";
}
}
