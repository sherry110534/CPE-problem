#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num;
	while(cin >> num){
		while(num--){
			int r;
			int r_array[500] = {0};
			int house = 0;
			int dst = 0;
			cin >> r;
			for(int i=0; i<r; i++){
				cin >> r_array[i];
			}
			sort(r_array, r_array+r);
			house = r_array[r/2];
			for(int i=0; i<r; i++){
				dst += abs(r_array[i]-house);
			}
			cout << dst << endl;
		}
	}
	return 0;
}
