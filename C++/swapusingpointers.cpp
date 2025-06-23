#include<iostream>
using namespace std;
void swap(int *p1,int *p2){
int temp=*p1;
*p1=*p2;
*p2=temp;

}

int main(){
int x=10;
int y=20;
int* p1=&x;
int* p2=&y;
cout<<x<<" "<<y<<endl;
swap(*p1,*p2);
cout<<x<<" "<<y<<endl;
int arr[] ={10,20,30,04,50};
int le=sizeof(arr)/sizeof(arr[0]);
cout<<le;
}

