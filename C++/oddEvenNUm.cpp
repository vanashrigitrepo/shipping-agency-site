#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter num";
cin>>n;
if(n%2==0){
    cout<<n<<" is Even "<<endl;
}else{
    cout<<n<<" is odd"<<endl;
}

n%2==0?cout<<n<<"Even":cout<<n<<"odd";
}