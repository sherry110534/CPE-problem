#include <iostream>
#include <queue>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n = 0;
	while(cin >> n){
		if(!n){
			break;
		}
		priority_queue<int, vector<int>, greater<int> > pq;
		int tmp;
		long long int cost = 0;
		for(int i=0; i<n; i++){
			cin >> tmp;
			pq.push(tmp);
		}
		while(pq.size() != 1){
			tmp = pq.top();
			pq.pop();
			tmp += pq.top();
			pq.pop();
			cost += tmp;
			pq.push(tmp);
		}
		cout << cost << endl;
	}
	return 0;
}
