#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int f[41] = {0, 1};
	for(int i = 2; i < 41; i++){
		f[i] = f[i-1] + f[i-2];
	}
	int num;
	while(cin >> num){
		while(num--){
			int DEC_BASE = 0;
			cin >> DEC_BASE;
			cout << DEC_BASE << " = ";
			bool start_print = false; // start to print data
			for(int i=40; i >= 2; i--){		
				if(DEC_BASE >= f[i]){
					cout << "1";
					DEC_BASE -= f[i];
					start_print = true;
				}
				else if(start_print){
					cout << "0";
				}
			}
			cout << " (fib)" << endl;
		}
	}
	return 0;
}
