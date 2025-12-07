#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,3,4,-5,5,-6,4};
    int n=v.size();
    int currsum=0,maxsum=v[0];
    for(int i=0; i<n; i++){
        currsum+=v[i];
        maxsum=max(currsum,maxsum);
        if(currsum<0) currsum=0;
    }
    cout<<"maximum subarray sum : "<<maxsum;
}