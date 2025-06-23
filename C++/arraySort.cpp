#include<iostream>
using namespace std;
int main(){
int arr[]={4,5,8,2,1,6};
int l=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<l;i++){
    for(int j=0;j<l-1;j++){
        if(arr[j]<arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
for(int i=0;i<l;i++){
    cout<<arr[i]<<" ";
}
}