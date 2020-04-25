#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a, b;
	while(cin >> a >> b){
		int change = 0;
		int max = 0;
		if(a > b){
			int tmp;
			tmp = a;
			a = b;
			b = tmp;
			change = 1;
		}
		for(int i = a; i <= b; i++){
			int count = 0;
			int n = i;
			while(1){
				count++;
				//cout << n << endl;
				if(n == 1){
					break;
				}
				if(n%2 == 1){
					n = 3*n+1;
				}
				else{
					n = n/2;
				}
			}
			if(count > max){
				max = count;
			}
		}
		if(change){
			cout << b << " " << a << " " << max << endl;
		}
		else{
			cout << a << " " << b << " " << max << endl;
		}

		 
	}
	return 0;
}
