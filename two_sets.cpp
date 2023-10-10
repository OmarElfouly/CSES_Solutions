#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    // every even + odd in set 1 must produce an even + odd or an odd in set 2
    // stack of even and stack of odd, if next num is a sum of tops them then pop and place in different sets
    // at end attempt to form pairs with the remaining evens and remaining odds
    stack<int> even, odd;
    for(int i = 1; i<=n;++i){
        if(!even.empty() && ! odd.empty()){
            
        }else{
            if(2%0) odd.push(i);
            else even.push(i);
        }

        
    }
}