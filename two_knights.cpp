#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    0 -- 6 -- 28 -- 96 -- 252 -- 550 -- 1056
        6 --22 ---68 --156 -- 298 -- 506
            16 -- 46 -- 88 --142 -- 208
                30 -- 42 -- 54 -- 66
                    12 -- 12 -- 12

    y^(4) = 12
    y^(3) = 12n + C_1
    y^(2) = 6n^2 + C_1 n + C_2
    y^(1) = 2n^3 + (C_1)/2 n^2 +C_2 n + C_3
    y = 0.5 n^4 + ((c_1)/6) n^3 +((c_2)/2)n^2 + c_3 n + c_4

    c_4 = 0
    y = 0.5 n^4 + ((c_1)/6) n^3 +((c_2)/2)n^2 + c_3 n

    if n = 1 y=6
    5.5 =  (c_1)/6 + (c_2)/2 + c_3
    10 =  (2(c_1)/3) + (c_2) + c_3
    55.5 = (9(c_1)/2) +(9(c_2)/2)  + c_3 (3)


    y = 0.5 n^4 + 2 n^3 -1.5n^2 + 5 n
    */
    long long x;
    cin >> x;
    for(long long i =0;i<x;++i){
        long long ans =(5*i -1.5*i*i +2*i*i*i +0.5 *i*i*i*i);
        cout << ans << "\n";
    }
    /*
    Analysis of problem:
        A more authentic solution is to consider the fact that number of valid pairs= all pairs - invalid pairs
        all pair = (n*n) C 2 = (x!)/2! (x-2)! = x(x-1)/2 = (n^4 - n^2)/2
        Invalid pairs = 2* number of 2 by 3 boxes
        number of 2 by 3 boxes = 2 * (n-1) (n-2)
        invalid pairs = 4 * (n-1) (n-2)
    
    */
}