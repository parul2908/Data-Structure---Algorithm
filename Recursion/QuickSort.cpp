#include<bits/stdc++.h>
using namespace std;

int func(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low, j = high;
    while(i<j){
        while(arr[i]<= pivot && i<=high-1) i++;   //high-1 is done to manage the edge case
        while(arr[j]> pivot && j>= low+1) j--;
        if(i<j)swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSortF(vector<int>& arr, int low, int high){
    if(low<high){
        int pivotIndex = func(arr, low, high);
        quickSortF(arr, low, pivotIndex-1);
        quickSortF(arr, pivotIndex+1, high); 
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    quickSortF(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}   



//tc === 0(nlogn)