#include<bits/stdc++.h>
using namespace std;

void findSubsequnceWithsumK(int n, int k, vector<int>&arr, vector<int>&temp, int ind, int sum){
    if(ind>= n){
        if(sum==k){
            for(int i=0;i<temp.size();i++){
                cout<<temp[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    temp.push_back(arr[ind]);
    sum += arr[ind];
    findSubsequnceWithsumK(n,k,arr, temp,ind+1, sum);
    temp.pop_back();
    sum-= arr[ind];
    findSubsequnceWithsumK(n,k,arr, temp,ind+1, sum);

}

int main(){
    int n, k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> temp;
    findSubsequnceWithsumK(n,k,arr, temp,0, 0);
    return 0;
}






