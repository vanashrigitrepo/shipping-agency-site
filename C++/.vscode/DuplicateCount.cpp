#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v={1,2,3,2,3,4,1,2,2};
bool arr[v.size()]={false};
for(int i=0;i<v.size();i++){
    if(arr[i]){
        continue;
    }
    int count=1;
    for(int j=i+1;j<v.size();j++){
        if(v[i]==v[j] && !arr[j]){
            arr[j]=true;
            count++;
        }
    }
    if(count>1){
        cout<<v[i]<<" occured "<<count<<" times"<<endl;
    }
}
}