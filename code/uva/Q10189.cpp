#include <iostream>
#include <cstring>
#define INF 10000000
using namespace std;
int sum[105][105];
void add(int x,int y){
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			sum[x+i][y+j]++;
		}
	}
}
int main() {
	char tmp;
	int n,m,k=1;
	while(cin>>m>>n&&n!=0&&m!=0){
		memset(sum,0,sizeof(sum));
		if(k>1)cout<<'\n';
		cout<<"Field #"<<k++<<":\n";
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				cin>>tmp;
				if(tmp=='*'){
					sum[i][j] = INF;
					add(i,j);
				}
			}
		}
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				if(sum[i][j]>=INF)cout<<'*';
				else cout<<sum[i][j];
			}
			cout<<'\n';
		}
	}	
	return 0;
}
