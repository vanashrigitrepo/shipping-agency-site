#include<iostream>
#include<cmath>
using namespace std;
int main(){
int arr[]={1,2,3,4,5,6,7,8,9};
int k=2;
for(int i=0;i<9;i+=k){
int start=i;
int end=min(i+k-1,8);
while(start<end){
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
}
}
for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
}
}