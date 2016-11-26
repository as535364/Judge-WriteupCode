#include <iostream>
using namespace std;
int main() {
	int c;
	scanf("%d",&c);
	while(c--){
		int score[1505],n;
		double ava = 0,above = 0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&score[i]);
			ava += score[i];
		}
		ava /= n;
		for(int i=0;i<n;i++){
			if(score[i]>ava)above++;
		}
		printf("%.3f%\n",above/n*100);
	}
	return 0;
}
