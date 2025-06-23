#include<iostream>
using namespace std;
int main(){
int arr[6];
cout<<"Enter data "<<endl;
for(int i=0;i<6;i++){
    cin>>arr[i];
}
for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}
cout<<"Array Rev "<<endl;
int start=0;
int end=5;
while(start<end){
    int temp=arr[start];
    arr[start]=arr[end];
arr[end]=temp;
start++;
end--;
}
for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}
}