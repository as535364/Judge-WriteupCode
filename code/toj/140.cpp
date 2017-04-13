#include <iostream>
#define MAXN 100005
#define MOD 1000007
using namespace std;
int dp1[MAXN][3],dp2[MAXN][3];
void build(){
	dp1[1][0] = dp1[1][1] = dp1[1][2] = 1;
	for(int i=2;i<MAXN;i++){
		dp1[ i ][0]  = (dp1[ i-1 ][0] + dp1[ i-1 ][1] + dp1[ i-1 ][2]) % MOD;
		dp1[ i ][1]  = (dp1[ i-1 ][0] + dp1[ i-1 ][1]) % MOD;
		dp1[ i ][2]  = (dp1[ i-1 ][0] + dp1[ i-1 ][2]) % MOD;
	}
	dp2[1][0] = 0;dp2[1][1] = 1;dp2[1][2] = 0;
	for(int i=2;i<MAXN;i++){
		dp2[ i ][0]  = (dp2[ i-1 ][0] + dp2[ i-1 ][1] + dp2[ i-1 ][2]) % MOD;
		dp2[ i ][1]  = (dp2[ i-1 ][0] + dp2[ i-1 ][1]) % MOD;
		dp2[ i ][2]  = (dp2[ i-1 ][0] + dp2[ i-1 ][2]) % MOD;
	}
}
long long f(int n){ return ((dp1[n][0] + dp1[n][1] + dp1[n][2])%MOD - (2*dp2[n][2]%MOD) + MOD)%MOD;}
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	build();
	while(t--){
		int tmp;cin>>tmp;
		cout<<f(tmp)<<'\n';
	}
}
