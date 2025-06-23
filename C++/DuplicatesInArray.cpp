#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,3,4,2,3};
int s=sizeof(arr)/sizeof(arr[0]);
bool visited [s]={false};
for(int i=0;i<s;i++){
    if(visited[i]){
        continue;
    }
    int count=1;
    for(int j=i+1;j<s;j++){
        if(arr[j]==arr[i] && !visited[j]){
            count++;
            visited[j]=true;
        }
    }
    if(count>1){
        cout<<"The Number "<<arr[i]<<" Occured "<<count<<" Times "<<endl;
    }
}

}
