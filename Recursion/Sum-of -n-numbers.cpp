
#include<bits/stdc++.h>
using namespace std;


//sum of n natural numbers 
int sumOfNNaturalNumbers(int n){
    if(n==0){
        return 0;
    }
    return n + sumOfNNaturalNumbers(n-1);
}


//n factorial
int findNFactorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n * findNFactorial(n-1);
}

int main(){
    int n, ans=0;
    cin>>n;
    ans = sumOfNNaturalNumbers(n);
    cout<<ans<<endl;

    int fact = findNFactorial(n);
    cout<<fatc<<endl;

    return 0;
}





