#include <iostream>
using namespace std;
int f91(int x){
	if(x>=101)return x-10;
	else if(x<=100)return f91(f91(x+11));
}
int main() {
	int n;
	while(cin>>n&&n!=0){
		cout<<"f91("<<n<<") = "<<f91(n)<<'\n';
	}
	return 0;
}
