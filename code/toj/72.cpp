#include <bits/stdc++.h>
int n;double l,r,a[15],b[15],c[15];
void reset(){
	l  = 0;r = 300;
	for(int i=0;i<15;i++)a[i]= b[i] = c[i] = 0;
}
double cal(int i,double t){
	return a[i] * (t - b[i]) * (t - b[i]) + c[i];
}
double s(double t){
	double max = cal(0,t);
	for(int i=1;i<n;i++){
		max = std::max(max,cal(i,t));
	}
	return max;
}
int main(){
	//freopen ("1.out","w",stdout);freopen ("1.in","r",stdin);
	int t;std::cin>>t;
	while(t--){
		reset();
		std::cin>>n;
		for(int i=0;i<n;i++)std::cin>>a[i]>>b[i]>>c[i];
		int cnt = 100;
		while(cnt--){
			double w = s(l),x = s(l + (r-l)/3),y = s(l + (r-l)/3*2),z = s(r);//左 三分之一  三分之二 右
			if(x<y)r = l + (r-l)/3*2;//不在最右邊
			else if(x>y)l = l + (r-l)/3;//不在最左邊
			else {//在中間
				double tmpa = l + (r-l)/3,tmpb = l + (r-l)/3*2;
				r = tmpb;l = tmpa;
			}
		}
		printf("%.5f\n",s((l + r) / 2) );
	}	
}
