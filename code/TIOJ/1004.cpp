#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("1.in","r",stdin);
	//freopen("1.out","w",stdout);
    int n=10;//n 是人數
    while(cin>>n){
        int num[55]={1},list[55]={0};//num 是紀錄用 //list 為死亡順序 index 從一開始
	int j=0,number=0,s=0,t;//number 是死亡人數，j 為報數用
	for (int i=1;i<=n;i++)num[i]=1;//重置狀態 1 為活者
        t=n;
	while (number<n){
            for (int i=1;i<=n;i++){
                if (num[i]==1){
                    j++;
                    if (j==2){//滿足自殺報數
                        num[i]=0;
			list[++s]=i;                        
                        j=0;
                        number++;
                    }
                }
            }
        }
	cout<<list[t]<<endl;
    }
}
