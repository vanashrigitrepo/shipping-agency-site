#include<iostream>
#include<cmath>
using namespace std;
string prime(int n){
    if(n<=1)
    {
        return "false";
    }else {
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return "false";
            }
        }
    }
    return "true";
}
int main(){
int n;
cout<<"Enter num";
cin>>n;
cout<<prime(n);
}