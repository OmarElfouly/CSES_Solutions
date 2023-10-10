#include <bits/stdc++.h>
using namespace std;

int main(){
    // x == y ----> 1 3 7 13 21 <---  2 4 6 8  < == 2 2 2 2  <--- n^2 -n + 1 
    // every spiral[2x] = spiral[2x-1] + :(
    // idea - find out which square corner ur answer lives on
    // if x> y answer lives on the right handside of sqaure x
    // else y>x answer lives on the bottom handside of sqaure y
    // pattern for row: length of edge is y, if odd count up from y^2 - 2y+2, if even count down from y^2
    // y=2 -> 4 3     y=3 --> 5 6 7    y=4 -> 16 15 14 13      y= 5-> 17 18 19 20 21        y= 7 --> 37
    // pattern for column: length of edge is x, if odd count down from x^2, if even count from (x-1)^2 +1
    int t;
    long long x,y,ans;
    cin>>t;
    for(int i=0;i<t;++i){
        cin >> y >> x;
        if(y==x){
            ans = y*y -y +1;
        }else if(y>x){
            if(y%2){//odd
                ans = y*y -2*y +1 +x;
            }else{//even
                ans = y*y -x +1;
            }
        }else{
            if(x%2){
                ans = x*x -y +1;
            }else{
                ans = x*x -2*x+1 + y;
            }
        }
        cout << ans << '\n';
    }
}