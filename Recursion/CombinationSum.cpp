//   we have to print the array who have the sum equal to  given number 
//   and the number of that array can be taken any number of times


// {2,3,6,7}   =>  {2,2,3}


#include<bits/stdc++.h>
using namespace std;


void combinationSum(vector<int>& arr, int ind,int target, vector<int> ds){
    if(ind==arr.size()){
        if(target==0){
            for(int i=0;i<ds.size();i++){
                cout<<ds[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(target >= arr[ind]){
        ds.push_back(arr[ind]);
        target-= arr[ind];
        combinationSum(arr, ind, target, ds);
        ds.pop_back();
        target+= arr[ind];
    }
    combinationSum(arr, ind+1, target, ds);
}

int main(){
    int n, target;
    cin>>n>>target;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ds;
    combinationSum(arr, 0, target, ds);
    return 0;



    //input  4 7
            // 2 3 6 7

}



//tc == exponential