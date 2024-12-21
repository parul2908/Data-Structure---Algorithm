// Here’s a very short explanation of each:

// Subsequence: A sequence derived from another sequence by deleting some or no elements without changing the order of the remaining elements. Example: For [1, 2, 3], [1, 3] is a subsequence.

// Subset: A set derived from another set by including some or all elements, with no concern for order. Example: For {1, 2, 3}, {1, 2} is a subset.

// Subarray: A contiguous part of an array. It maintains the order of elements and must be consecutive. Example: For [1, 2, 3], [2, 3] is a subarray.

// In summary:

// Subsequence: Order matters, no continuity required.
// Subset: No order, no continuity.
// Subarray: Order matters, must be contiguous.




// recursion tree
//                                 arr[1,2,3] , ind=0, f(arr,ind)
                    
//                                                f({}, 0)
//                         f({1},1)                                       f({},1)
//            f({1,2},2)            f({1},2)                    f({2},2)                 f({},2)
//    f({1,2,3},3)  f({1,2},3)  f({1,3},3)   ff({1},3)   f({2,3},3)  f({2},3)     f({3},3)     f({},3)


#include <bits/stdc++.h>
using namespace std;
 
void findSubsequence(int n, vector<int> &arr, vector<int>&temp, int ind){
    if(ind>= n){
        for(int i=0;i<temp.size();i++){ 
            cout<<temp[i]<<" ";
        }
        cout<<endl;
        return;
    }
    temp.push_back(arr[ind]);
    findSubsequence(n, arr, temp, ind+1);
    temp.pop_back();
    findSubsequence(n, arr, temp, ind+1);
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    vector<int> temp;
    findSubsequence(n, arr, temp, 0);
    return 0;
}