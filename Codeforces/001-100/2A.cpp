#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	
	int n;
	cin >> n;
	
	string name[n] = {};
	int score[n] = {};
	
	for(int i = 0; i < n; i++) {
		cin >> name[i] >> score[i];
	}
	
	map<string, int> m;
	for(int i = 0; i < n; i++) {
		m[name[i]] += score[i];
	}
	
	set< string > s;
	int maxscore = -1e7;
	for(map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
		if(it->second > maxscore) {
			maxscore = it->second;
			s.clear();
			s.insert(it->first);
		} else if(it->second == maxscore) {
			s.insert(it->first);
		}
	}
	
	map<string, int> m2;
	for(int i = 0; i < n; i++) {
		if(s.find(name[i]) != s.end()) {
			m2[name[i]] += score[i];
			if(m2[name[i]] >= maxscore) {
				cout << name[i] << endl;
				return 0;
			}
		}
	}
	
	return 0;
}
