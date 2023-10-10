// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a;
	scanf("%lld", &a);
	while(a!=1){
		printf("%lld ", a);
		if(a%2){
			a= a*3 +1;
		}else{
			a/=2;

		}
	}
	printf("%lld ", a);

}
