#include <iostream>
using namespace std;
int main() {
	string index="1234567890-=QWERTYUIOP[]\\ASDFGHJKL;\'ZXCVBNM,./";
	string tmp;
	while(getline(cin,tmp)){
		for(int i=0;i<tmp.size();i++){
			for(int j=0;j<index.size();j++){
				if(tmp[i]==index[j]){
					cout<<index[j-1];
				}
			}
			if(tmp[i]==' ')cout<<' ';
		}
		cout<<'\n';
	}
	return 0;
}
