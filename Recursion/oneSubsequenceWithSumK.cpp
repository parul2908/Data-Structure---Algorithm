#include<bits/stdc++.h>
using namespace std;

bool oneSubsequnceWithSumK(int n, int k, int ind, vector<int> arr, vector<int> &temp, int sum){
    if(ind>= n){
        if(sum==k){
            for(int i=0;i<temp.size();i++){
                cout<<arr[i]<< " ";
            }
            cout<<endl;
            return true;
        }
        else return false;
    }
    temp.push_back(arr[ind]);
    sum += arr[ind];
    if(oneSubsequnceWithSumK(n,k,ind+1,arr, temp,sum)){
        return true;
    }
    temp.pop_back();
    sum-= arr[ind];
       if(oneSubsequnceWithSumK(n,k,ind+1,arr, temp,sum)){
        return true;
    }
    //if no condition satisfies then return false
    return false;


}

int main(){
    int n, k;
    cin>>n>>k;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> temp;
    if(oneSubsequnceWithSumK(n, k, 0, arr, temp,0)){
        return 0;
    }
}