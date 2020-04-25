#include <iostream>
#include <stdlib.h>  
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num = 0;
	while(cin >> num){
		int n[3000] = {0};
		int a[3000] = {0};
		int c[3000] = {0};
		bool jolly = true;
		for(int i=0; i<num; i++)
			cin >> n[i];
		for(int i=0; i<num-1; i++){
			a[i] = abs(n[i+1] - n[i]);
			if(a[i] != 0 && a[i] < 3000 ){
				c[a[i]] = 1;
			}
			else{
				jolly = false;
				break;
			}
		}
		if(jolly){
			for(int i=1; i<=num-1; i++){
				if(c[i] != 1){
					jolly = false;
					break;
				}
			}
		}
		if(jolly){
			cout << "Jolly" << endl;
		}
		else{
			cout << "Not jolly" << endl;
		}
			
	}
	return 0;
}
