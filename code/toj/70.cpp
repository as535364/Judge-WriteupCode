#include <bits/stdc++.h>
using namespace std;
struct c{
	bool operator()(const long long& l, const long long& r){  
       		return l > r;  
	}
};
int main() {
    	cin.tie(NULL);	
	int n;
	while(cin>>n&&n){
		priority_queue<long long,vector<long long>,c>heap;
		long long ans = 0;
		for(int i=0;i<n;i++){
			long long tmp;cin>>tmp;
			heap.push(tmp);
		}
		while(heap.size()>1){
			long long a = heap.top();
			heap.pop();
			long long b = heap.top();
			heap.pop();
			long long c = a + b;ans += c;
			heap.push(c);
		}
		cout<<ans<<'\n';
	}
	return 0;
}