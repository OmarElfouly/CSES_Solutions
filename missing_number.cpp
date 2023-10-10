#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, sum = 0, input;
    cin >> n;
    for(int i=1;i<n;i++){
        cin >> input;
        sum+=input;
    }
    cout << ( n *(n + 1) ) / 2 - sum;

}
