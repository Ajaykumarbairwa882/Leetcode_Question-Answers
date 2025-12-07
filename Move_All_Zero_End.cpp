#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,0,6,8,0,8,9,0,9,0,9,0,8,9,0};
    int j=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]!=0){
            swap(v[i],v[j]);
            j++;
        }
    }
    for(auto x:v){
        cout<<x<<" ";
    }
}