#include<iostream>
using namespace std;
int main(){
int arr[]={2,5,6,8};
int sum=0;
for(int i:arr){
    sum=sum+i;
}
cout<<"sum is "<<sum;
}