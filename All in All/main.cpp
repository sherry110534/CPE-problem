#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string str1;
	string str2;
	while(cin >> str1){
		cin >> str2;
		bool allinall = true;
		int start = 0;
		for(int i=0; i<str1.size(); i++){
			bool same = false;
			for(int j=start; j<str2.size(); j++){
				if(str1[i]== str2[j]){
					same = true;
					start = j;
					break;
				}
			}
			if(!same){
				allinall = false;
				break;
			}
		}
		if(allinall){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
	return 0;
}
