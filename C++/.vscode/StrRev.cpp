#include<iostream>
#include<vector>

using namespace std;
int main(){
string s="Hello";
string rev;
for(int i=s.length()-1;i>=0;i--){
rev+=s[i];
}
cout<<s<<endl;
cout<<rev<<endl;

}