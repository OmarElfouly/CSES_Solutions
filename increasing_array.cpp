#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, prev, curr, ans=0;
    cin >> n;
    cin >> prev;
    for(int i=1;i<n;++i){
        cin>>curr;
        while(curr<prev){
            ++curr;
            ++ans;
        }
        prev = curr;
    }
    cout << ans;
}