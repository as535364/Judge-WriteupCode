#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int j[3005],t=0;
		bool vis[3005] = {0};
		for(int i=0;i<n;i++)cin>>j[i];
		for(int i=0;i<n-1;i++){
			int tmp = max(j[i+1] , j[i]) - min(j[i+1] , j[i]);
			if(tmp>0&&tmp<n&&vis[tmp]==false){
				vis[tmp] = true;
				//cout<<"tmp:"<<tmp<<endl;
				t++;
				//cout<<"t:"<<t<<endl;
			}
		}
		if (t==n-1)cout<<"Jolly\n";
		else cout<<"Not jolly\n";
	}
}
