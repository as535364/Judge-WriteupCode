//就懶得打一堆 if 所以直接用 sort
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int tmp[3],n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>tmp[0]>>tmp[1]>>tmp[2];
		sort(tmp,tmp+3);
		cout<<"Case "<<i<<": "<<tmp[1]<<'\n';
	}
	return 0;
}
