#include<iostream>
using namespace std;
int main(){
int arr[]={2,5,6,8};
int pro=1;
for(int i:arr){
    pro=pro*i;
}
cout<<"product is "<<pro;
}