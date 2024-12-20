// Sub set or subsequence
#include<bits/stdc++.h>
using namespace std;
 

void findSubset(vector&<int> arr, vector&<int> temp, int ind){
    if(ind>= arr.size()){
        return;
    }
    temp.push_back(arr[ind]);
    findSubset(arr, temp, ind+1);
    temp.pop_back();
    findSubset(arr, temp, ind+1);

}

int main(){
    vector<int> arr = {9, 8, 4, 0, 7};
    vector<int> temp;
    findSubset(arr, temp, 0);
    return 0;
}



//{To find the number of subsets having an average equal to the given average value k.}
#include <iostream>
#include <vector>
using namespace std;

void findSubset(int ind, vector<int> &arr, int sum, int cnt, int &ans, int k) {
    if (ind >= arr.size()) {
        if (cnt > 0 && sum * 1.0 / cnt == k) {
            ans++;
        }
        return;
    }
    findSubset(ind + 1, arr, sum + arr[ind], cnt + 1, ans, k);
    findSubset(ind + 1, arr, sum, cnt, ans, k);
}

int main() {
    vector<int> arr = {9, 8, 4, 0, 7};
    int k = 4;
    int sum = 0;
    int cnt = 0;
    int ans = 0;
    findSubset(0, arr, sum, cnt, ans, k);
    cout << "Number of subsets with average " << k << ": " << ans << endl;
    return 0;
}
