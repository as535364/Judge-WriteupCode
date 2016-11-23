#include <iostream>
using namespace std;

int main() {
	int n,k = 1,tmp[105];
	while(cin>>n&&n!=0){
		int ava = 0,ans=0;
		for(int i=0;i<n;i++){
			cin>>tmp[i];
			ava += tmp[i];
		}
		ava /= n;
		for(int i=0;i<n;i++){
			ans += max(ava,tmp[i]) - min(ava,tmp[i]);
		}
		cout<<"Set #"<<k++<<'\n';
		cout<<"The minimum number of moves is "<<ans/2<<".\n\n";
	}
	return 0;
}
