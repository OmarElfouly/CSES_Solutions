#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int best = 0,cur =1;
    for(int i =1; i < s.length(); ++i){
        if(s[i] != s[i-1]){
            best = max(best,cur);
            cur = 0;
        }
        ++cur;
    }
    cout << max(best,cur) << "\n";
    return 0;
}