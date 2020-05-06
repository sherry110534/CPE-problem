#include <iostream>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long long int UPPER = 6227020800;
	long long int LOWER = 10000;
	long long int n = 0;
	while(cin >> n){
		bool u_flag = false;
		bool o_flag = false;
		long long int ans = 1;
		if(n < 0){
			if(abs(n)%2 == 0){
				u_flag = true;
			}
			else{
				o_flag = true;
			}
		}
		else{
			for(int i=1; i<=n; i++){
				ans = i * ans;	
				if(ans > UPPER){
					o_flag = true;
					break;
				}
			}
			if(ans < LOWER){
				u_flag = true;
			}
		}
		if(u_flag){
			cout << "Underflow!" << endl;
		}
		else if(o_flag){
			cout << "Overflow!" << endl;
		}
		else{
			cout << ans << endl;
		}
		
	}
	return 0;
}
