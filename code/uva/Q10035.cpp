//Not Solved Yet

#include <iostream>
using namespace std;

int main() {
	int a,b;
	while(cin>>a>>b){
		int carry,tmp,sum=0;
		int tmpa[15]={0},tmpb[15]={0};
		if(a==0&&b==0)return 0;
		while(a!=0||b!=0){
			sum = (a % 10 + b % 10) / 10 + sum;
			a/=10;b/=10;
		}
		if(sum==0)cout<<"No carry operation.\n";
		else if(sum==1)cout<<"1 carry operation.\n";
		else cout<<sum<<" carry operations.\n";
	}
}
