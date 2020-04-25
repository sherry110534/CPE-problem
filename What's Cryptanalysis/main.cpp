#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	int n;
	while(cin >> n){
		cin.ignore();
		int count[26] = {0};
		int total = 0;
		while(n--){
			string str;
			getline(cin, str);
			for(int i=0; i<str.length(); i++){
				if(str[i]>='a' && str[i]<='z'){
					count[str[i]-'a']++;
					total++;
				}
				else if(str[i]>='A' && str[i]<='Z'){
					count[str[i]-'A']++;
					total++;
				}
			}
		}
		for(int i=total; i>=1; i--){
			for(int j=0; j<26; j++){
				if(count[j] == i){
					cout << char('A'+j) << " " << i << endl;
				}
			}
		}
	}
	return 0;
}
