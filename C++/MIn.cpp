#include<iostream>
using namespace std;
int main(){
int arr[]={2,5,6,8};
int min=arr[0];
for(int i:arr){
    if(i<min){
        min=i;
    }
}
cout<<"minimun value is "<<min;
}