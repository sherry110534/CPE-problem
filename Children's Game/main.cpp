#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool cmp(string a, string b){
	return (a+b) > (b+a);
}
int main(int argc, char** argv) {
	int n = 0;
	while(cin >> n){
		if(n == 0){
			break;
		}
		vector<string> number;
		string tmp;
		for(int i=0; i<n; i++){
			cin >> tmp;
			number.push_back(tmp);
		}
		sort(number.begin(), number.end(), cmp);
		for(int i=0; i<n; i++){
			cout << number[i];
		}
		cout << endl;
	}
	
	return 0;
}
