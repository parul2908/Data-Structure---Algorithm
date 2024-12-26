// Merge Sort means divide and merge

#include<bits/stdc++.h>
using namespace std;

void mergeSort(vector<int> &arr, int low, int mid, int high){
    int left = low, right = mid+1;
    vector<int> temp;
    while(left<=mid && right<=high){
        if(arr[left] >= arr[right]){
            temp.push_back(arr[right]);
            right++;
        }
        else{
            temp.push_back(arr[left]);
            left++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left++]);
    }
    while(right<=high){
        temp.push_back(arr[right++]);   
    }
    for(int i=low;i<=high;i++ ){
        arr[i] = temp[i-low];
    }
}

void mergeArray(vector<int> &arr, int low, int high){
    if(low== high) return;
    int mid = (high+low)/2;
    mergeArray(arr, low, mid);
    mergeArray(arr, mid+1, high);
    mergeSort(arr, low, mid, high);
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeArray(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}


//time complexity ---- 0(N).0(log2n)