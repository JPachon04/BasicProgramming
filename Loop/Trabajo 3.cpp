#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	for(int i=1;i<=2;i++){
		cout<<"outer:"<<i<<"\n";
		for(int j=1;j<=3;++j){
			cout<<"Inner:"<<j<<"\n";
		}
	}
	
	return 0;
}
