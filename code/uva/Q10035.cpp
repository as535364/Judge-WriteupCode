#include <iostream>
#define LL long long int
using namespace std;
int main() {
	LL a,b;
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	while(cin>>a>>b){
		if(a==0&&b==0)return 0;
		int sum=0,carry=0;
		while(a!=0||b!=0){
			sum += (a%10 + b%10 + carry) / 10;
			carry = (a%10 + b%10 + carry) / 10;
			a /= 10;b /= 10;
		}
		if(sum==0)cout<<"No carry operation.\n";
		else if(sum==1)cout<<"1 carry operation.\n";
		else cout<<sum<<" carry operations.\n";
	}
}
