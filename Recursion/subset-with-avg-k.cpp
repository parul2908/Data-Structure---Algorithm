

//{To find the number of subsets having an average equal to the given average value k.}
#include <iostream>
#include <vector>
using namespace std;

void findSSubset(int ind, vector<int> &arr, int sum, int cnt, int &ans, int k) {
    if (ind >= arr.size()) {
        if (cnt > 0 && sum * 1.0 / cnt == k) {
            ans++;
        }
        return;
    }
    findSSubset(ind + 1, arr, sum + arr[ind], cnt + 1, ans, k);
    findSSubset(ind + 1, arr, sum, cnt, ans, k);
}

int main() {
    vector<int> arr = {9, 8, 4, 0, 7};
    int k = 4;
    int sum = 0;
    int cnt = 0;
    int ans = 0;
    findSSubset(0, arr, sum, cnt, ans, k);
    cout << "Number of subsets with average " << k << ": " << ans << endl;
    return 0;
}
