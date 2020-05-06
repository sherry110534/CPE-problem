#include <iostream>
#include <math.h>
#define Size 1000000
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool prime[Size] = {false};
int bitSum(int num){
	int sum = 0;
	while(num > 0){
		sum += num % 10;
		num /= 10;
	}
	return sum;
}
int main(int argc, char** argv) {
	prime[0] = true; // 0 and 1 not prime
	prime[1] = true;
	for(int i=2; i<sqrt(Size); i++){
		if(!prime[i]){
			for(int j=i+i; j<Size; j+=i){
				prime[j] = true; // not prime
			}
		}
	}
	int n;
	while(cin >> n){
		while(n--){
			int t1, t2;
			int count = 0;
			cin >> t1;
			cin >> t2;
			for(int i=t1; i<=t2; i++){
				if(!prime[i] && !prime[bitSum(i)]){
					count++;
				}
			}
			cout << count << endl;
		}
	}
	return 0;
}
