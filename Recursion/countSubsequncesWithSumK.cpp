#include<bits/stdc++.h>
using namespace std;


int countSubsequnce(vector<int> arr, int ind, int sum, int k){
    if(ind>= arr.size()){
        if(sum==k) return 1;
        else return 0;
    }
    sum+=arr[ind];
    int l = countSubsequnce(arr, ind+1,sum, k);
    sum-=arr[ind];
    int r = countSubsequnce(arr, ind+1, sum, k);

    return l+r;
}



int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<countSubsequnce(arr, 0, 0, k);
    return 0;
}