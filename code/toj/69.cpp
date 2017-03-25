#include <bits/stdc++.h>
#define MAXN 10005
long long a[MAXN],b[MAXN],c[MAXN],tmp[MAXN],n,k;
void cal(int d){
	for(int i=0;i<n;i++)tmp[i] = a[i] + d * b[i];
}
bool check(){//檢查 Ok 否  OK 回傳 true
	std::sort(tmp,tmp+n);
	int cnt = 0,j=0;
	for(int i=0;i<k;i++){//窮舉對方最弱的 k 匹馬
		long long h = c[i];//這匹馬
		for(;j<n;j++){
			if(tmp[j]>h){cnt++;j++;break;}
		}
	}
	return cnt==k;
}
int main(){
	freopen ("1.out","w",stdout);freopen ("1.in","r",stdin);
	long long t;std::cin>>t;
	while(t--){
		int l=0,r=1e8,ans = -1,m;
		std::cin>>n>>k;
		for(int i=0;i<n;i++)std::cin>>a[i]>>b[i];
		for(int i=0;i<n;i++)std::cin>>c[i];
		std::sort(c,c+n);
		//二分搜
		while(l<=r){
			m = (l + r) / 2; //中間
			cal(m);
			bool finall = check(); //結果
			if(finall){r = m - 1;ans = m;}
			else l = m + 1;
		}
		if(ans>=0)std::cout<<ans<<'\n';
		else std::cout<<"-1\n";
	}	
}