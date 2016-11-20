#include<iostream>
#define MAXN 4294967295
using namespace std;
int main(){
	int bottle[5][5];//bottle[0][0~3] B G C
	unsigned int ans = MAXN ,sum = 0,tmp = 0;
	string s;
	while(cin>>bottle[0][0]){
		ans = MAXN;
		sum = 0;
		cin>>bottle[0][1]>>bottle[0][2];
		sum += bottle[0][0] + bottle[0][1] + bottle[0][2];
		for(int i=1;i<3;i++){
			for(int j=0;j<3;j++){
				cin>>bottle[i][j];
				sum += bottle[i][j];
			}
		}	
		//BCG
		tmp = 0;
		tmp = sum - bottle[0][0] - bottle[1][2] - bottle[2][1];
		if(tmp<ans){
			ans = tmp;
			s = "BCG";
		}
		//BGC
		tmp = 0;
		tmp = sum - bottle[0][0] - bottle[1][1] - bottle[2][2];
		if(tmp<ans){
			ans = tmp;
			s = "BGC";
		}
		//CBG
		tmp = 0;
		tmp = sum - bottle[0][2] - bottle[1][0] - bottle[2][1];
		if(tmp<ans){
			ans = tmp;
			s = "CBG";
		}
		//CGB
		tmp = 0;
		tmp = sum - bottle[0][2] - bottle[1][1] - bottle[2][0];
		if(tmp<ans){
			ans = tmp;
			s = "CGB";
		}
		//GBC
		tmp = 0;
		tmp = sum - bottle[0][1] - bottle[1][0] - bottle[2][2];
		if(tmp<ans){
			ans = tmp;
			s = "GBC";
		}
		//GCB
		tmp = 0;
		tmp = sum - bottle[0][1] - bottle[1][2] - bottle[2][0];
		if(tmp<ans){
			ans = tmp;
			s = "GCB";
		}	
		cout<<s<<' '<<ans<<endl;
	}	
}
