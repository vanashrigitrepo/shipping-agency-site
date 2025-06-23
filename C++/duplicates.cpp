#include<iostream>
#include<vector>

using namespace std;
int main(){
vector<int> v(6);
cout<<"Enter elements"<<endl;
for(int i=0;i<v.size();i++){
    cin>>v[i];
}
for(int i:v){
    cout<<i<<" ";
}
cout<<endl;
for(int i=0;i<v.size();i++){
    int count=1;
    for(int j=i+1;j<v.size();j++){
        if(v[i]==v[j]){
            count++;
            cout<<v[i]<<" occured "<<count<<" times"<<endl;     

        }  
    }

}
}