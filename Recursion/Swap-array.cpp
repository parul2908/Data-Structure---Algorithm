#include<bits/stdc++.h>
using namespace std;


void swapArray(vector<int> &arr, int ind){
    if(ind >= arr.size()/2){
        return;
    }
    swap(arr[ind], arr[arr.size() - ind - 1]);
    swapArray(arr, ind+1);
}

int main(){
    vector<int> arr = {2,4,5,2,7,4};
    swapArray(arr, 0);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<< " ,";
    }
    return 0;
}