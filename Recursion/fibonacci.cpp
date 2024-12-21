#include<bits/stdc++.h>
using namespace std;

int findFibonacciNumber(int ind) {
    if (ind == 0 || ind == 1) {
        return ind;
    }
    return findFibonacciNumber(ind-1) + findFibonacciNumber(ind-2); 
}

int main() {
    int n;
    cin >> n;
    cout << findFibonacciNumber(n);
}
