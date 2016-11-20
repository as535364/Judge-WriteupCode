#include<iostream>
#define MAXN 105
using namespace std;
char field[MAXN][MAXN];
int n,m;
void dfs(int x,int y);
void solve();
int main(){
	freopen("2386.in","r",stdin);
	freopen("2386.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>field[j][i];
		}
	}
	solve();
}
void dfs(int x,int y){
	field[x][y] = '.';
	for(int dx=-1;dx<=1;dx++){
		for(int dy=-1;dy<=1;dy++){
			int nx = dx + x;
			int ny = dy + y;
			if( 0<=nx && 0<=ny && nx<m && ny<n && field[nx][ny]=='W' ) 
				dfs(nx,ny);
		}
	}
	return ;
}
void solve(){
	int ans = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(field[j][i]=='W'){
				dfs(j,i);
				ans++;
			}
		}
	}
	cout<<ans;
}
