#include <iostream>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long long a, b;
	while(cin >> a >> b){
		cout << abs(a-b) << endl;
	}
	return 0;
}
