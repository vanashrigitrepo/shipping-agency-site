#include<iostream>
using namespace std;
int main(){
int arr[]={0,2,0,5,0,4,0,6};
int k=5;
int index=0;
int s=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<s;i++){
    if(arr[i]!=k){
        arr[index++]=arr[i];
    }
}
while(index<s){
    arr[index++]=k;
}
for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}
}