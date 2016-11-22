#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int tmp[55],n,sum = 0;
		cin>>n;
		for(int i=0;i<n;i++)cin>>tmp[i];
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(tmp[i]>tmp[j]){
					swap(tmp[i],tmp[j]);
					sum++;
				}
			}
		}
		cout<<"Optimal train swapping takes "<<sum<<" swaps.\n";
	}
	return 0;
}
