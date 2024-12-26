// we can take the elements of the array only once


#include<bits/stdc++.h>
using namespace std;

void combinationSum2(vector<int>& arr, int target, int ind, vector<int> &ds, vector<vector<int>> ans){
    if(ind==arr.size()){
        if(target == 0){
            // for(int i=0;i<ds.size();i++){
            //     cout<<ds[i]<<" ";
            // }
            // cout<<endl;
            sort(ds.begin(), ds.end());
            
            ans.push_back(ds);
        }
        return;
    }
    if(arr[ind]<=target){
        target -= arr[ind];
        ds.push_back(arr[ind]);
        combinationSum2(arr,target, ind+1, ds, ans);
        target += arr[ind];
        ds.pop_back();
    }
    combinationSum2(arr,target, ind+1, ds, ans);

}

int main(){
    int n , target;
    cin>>n>>target;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ds;
    vector<vector<int>> ans;
    combinationSum2(arr, target, 0, ds, ans);
    return 0;
}