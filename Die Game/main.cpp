#include <iostream>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int m = 0;
	while(cin >> m){
		int t = 1, b = 6, n = 2, s = 5, e = 4, w = 3;
		if(m == 0){
			break;
		}
		string act;
		for(int i=0; i<m; i++){
			cin >> act;
			int tmp;
			if(act[0] == 'n'){
				tmp = t;
				t = s;
				s = b;
				b = n;
				n = tmp;
			}
			else if(act[0] == 's'){
				tmp = t;
				t = n;
				n = b;
				b = s;
				s = tmp;
			}
			else if(act[0] == 'w'){
				tmp = t;
				t = e;
				e = b;
				b = w;
				w = tmp;
			}
			else if(act[0] == 'e'){
				tmp = t;
				t = w;
				w = b;
				b = e;
				e = tmp;
			}
		}
		cout << t << endl;
	}
	return 0;
}
