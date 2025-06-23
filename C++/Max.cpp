#include<iostream>
using namespace std;
int main(){
int arr[]={2,5,6,8};
int max=arr[0];
for(int i:arr){
   if(i>max){
    max=i;
   }
}
cout<<"max in array is "<<max;
}