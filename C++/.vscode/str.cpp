#include<iostream>
#include<cstring>

using namespace std;
int main(){

    string str="hello how are you";
    cout<<str<<endl;
for(int i=0;i<str.length();i++){
    string rev;
    while(i<str.length() && str[i]!=' '){
        rev+=str[i];
        i++;
    }
 
    if(rev.length()>0){
        string res;
for(int i=rev.length()-1;i>=0;i--){
    res+=rev[i];
}
cout<<res<<" ";
    }
}
    // char arr[str.length()];
    // strcpy(arr,str.c_str());
    // cout<<arr;
    // char arr1[] = "Hello";

    // for(int i=0;i<arr1[i]!='\0';i++){
    //     cout<<arr1[i]<<" ";
    // }
  

}