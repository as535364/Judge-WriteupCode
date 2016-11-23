/*
想法：先寫出 reverse 的函式
reverse 的作法就是取原先數值的最後一位加上去
然後 * 10
在找最後一位加上去
直到 tmp == reverse(tmp) 為止
*/
#include <iostream>
using namespace std;
unsigned int reverse(unsigned int x){
	unsigned int ans=0;
	while(x){
		ans = ans * 10 + x % 10;
		x /= 10;
	}
	return ans;
}
int main() {
	int n;
	cin>>n;
	while(n--){
		unsigned int tmp;
		int t = 1;
		cin>>tmp;
		tmp += reverse(tmp);
		while(tmp!=reverse(tmp) ){
			tmp += reverse(tmp);
			t++;
		}
		cout<<t<<' '<<tmp<<'\n';
	}
	return 0;
}
