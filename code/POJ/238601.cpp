#include<iostream>
#define MAXN 105
using namespace std;
char field[MAXN][MAXN];
int n,m;
void dfs(int x,int y);
void solve();
int main(){
	//freopen("2386.in","r",stdin);
	//freopen("2386.out","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>field[i][j];
		}
	}
	solve();
}
void dfs(int x,int y){
	field[x][y] = '.';
	for(int dx=-1;dx<=1;dx++){
		for(int dy=-1;dy<=1;dy++){
			int nx = x + dx,ny = y + dy;
			if(0<=nx && nx<n && 0<=ny && ny<m && field[nx][ny] == 'W')
				dfs(nx,ny);
		}
	}
	return ;
}
void solve(){
	int ans = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(field[i][j]=='W'){
				dfs(i,j);
				ans++;
			}
		}
	}
	cout<<ans;
}

