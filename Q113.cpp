// double 有誤差 所以 加上 0.5 再讓 int 無條件捨去
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double n,p;
	while(cin>>n>>p){
		int k = pow(p,1/n) + 0.5;
		cout<<k<<'\n';
	}
	return 0;
}
