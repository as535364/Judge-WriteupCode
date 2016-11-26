#include <iostream>
#include <cstring>
#define INF 4294967295
using namespace std;
unsigned int ugly[1500];
unsigned int uglymin(int x){
	for(int i=0;i<x;i++){
		if(ugly[i]*2>ugly[x-1])ugly[x] = min(ugly[x],ugly[i]*2);
		if(ugly[i]*3>ugly[x-1])ugly[x] = min(ugly[x],ugly[i]*3);
		if(ugly[i]*5>ugly[x-1])ugly[x] = min(ugly[x],ugly[i]*5);
	}
	return ugly[x];
}

int main() {
	memset(ugly,INF,sizeof(ugly));
	ugly[0] = 1;
	for(int i=1;i<1500;i++){
		ugly[i] = uglymin(i);
	}
	cout<<"The 1500'th ugly number is "<<ugly[1499]<<".\n";
	return 0;
}
