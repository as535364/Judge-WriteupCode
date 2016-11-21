#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	while(getline (cin,s) ){
		bool flag = 0;
		int ans = 0;
		for(int i=0;i<s.size();i++){
			if( ('A'<=s[i]&&s[i]<='Z')||('a'<=s[i]&&s[i]<='z') )
				flag = 1;
			else if(flag==1){
				ans++;
				flag = 0;
			}
		}
		cout<<ans<<'\n';
	}
	return 0;
}
