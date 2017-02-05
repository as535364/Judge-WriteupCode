#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(cin>>n&&n!=0){
		int all = n * (n-1) / 2,cnt=0,num[55]={0};
		for(int i=0;i<n;i++)cin>>num[i];
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				int tmp = __gcd( num[i] , num[j] );
				if(tmp == 1)cnt++;
			}
		}
		if(cnt==0)puts("No estimate for this data set.");
		else{
			double p = (double)cnt / (double)all;
			double pi = sqrt( 6 * (1/p) );
			printf("%.6f\n",pi);
		}		
	}
}