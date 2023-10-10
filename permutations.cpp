#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n==1) cout << "1" ;
    else if(n<4) cout << "NO SOLUTION";
    else {
        /*
        string s = "3 1 4 2";
        bool flag = true;
        for(int i = n; i >4 ;--i){
            if(flag){
                s = to_string(i) + " " + s;
            }else{
                s = s + " "+ to_string(i);
            }
            flag = ! flag;
        }
        cout << s;

        Time limit excedeed
        */
       for(int i = 2; i<n+1;i+=2){
            cout << to_string(i) + " ";
       }
       for(int i = 1; i<n+1;i+=2){
            cout << to_string(i) + " ";
       }
    }
}