#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string& s, int ind){
    if(ind >= s.size()) return true;
    if(s[ind] != s[s.size()-1-ind] ) return false;
    return isPalindrome(s, ind+1);
}

int main(){
    string s;
    cin>>s;
    bool flag = isPalindrome(s, 0);
}