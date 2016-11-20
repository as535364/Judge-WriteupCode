// not yet solved
#include<iostream>
using namespace std;
void check(double x,double y,int point_n);
double rec[15][5];//矩形  第一矩形左上以 x:rec[1][1]表示 Y:rec[1][2] 右下： x:rec[1][3] x:rec[1][4]
int n=1;
int point_n=1;
int main(){
	freopen("476.in","r",stdin);
	freopen("476.out","w",stdout);
	char c;
	double x,y;
	while(cin>>c&&c!='*'){
		cin>>rec[n][1]>>rec[n][2]>>rec[n][3]>>rec[n][4];		
		n++;
	}
	while(cin>>x>>y){
		if(x==9999.9&&y==9999.9){
			return 0;
		}
		check(x,y,point_n);
		point_n++;
	}
	return 0;
}
void check(double x,double y,int point_n){
	int flag=1;
	for(int i=1;i<n;i++){
		if(rec[i][1] <x && x< rec[i][3] && rec[i][4] <y && y< rec[i][2]){
			printf("Point %d is contained in figure %d\n",point_n,i);
			flag = 0;
		}
	}
	if(flag)printf("Point %d is not contained in any figure\n",point_n);
}

