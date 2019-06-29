#include<bits/stdc++.h>
using namespace std;

int main() {
	string source;
	string target;
	cin >> source >> target;
	
	int x1, y1, x2, y2;
	x1 = source[0]-96;
	y1 = source[1]-'0';
	x2 = target[0]-96;
	y2 = target[1]-'0';
	
	queue<string> q;
	while (x1 != x2 || y1 != y2) {
		if(x1 < x2 && y1 < y2) {
			q.push("RU");
			x1++;
			y1++;
		} else if(x1 > x2 && y1 > y2) {
			q.push("LD");
			x1--;
			y1--;
		} else if(x1 < x2 && y1 > y2) {
			q.push("RD");
			x1++;
			y1--;
		} else if(x1 > x2 && y1 < y2) {
			q.push("LU");
			x1--;
			y1++;
		} else if(x1 < x2) {
			q.push("R");
			x1++;
		} else if(x1 > x2) {
			q.push("L");
			x1--;
		} else if(y1 < y2) {
			q.push("U");
			y1++;
		} else if(y1 > y2) {
			q.push("D");
			y1--;
		}
	}
	
	cout << q.size() << endl;
	while(!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}
	
	return 0;
}
