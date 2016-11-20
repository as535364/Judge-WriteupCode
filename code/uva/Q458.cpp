#include<iostream>
using namespace std;
int main(){
	char c[10005];
	while(cin>>c){
		for(int i=0;c[i]!='\0';i++){
			c[i] = '*'- '1' + c[i];
			cout<<c[i];
		}
		cout<<'\n';
	}
}

