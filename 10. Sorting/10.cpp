#include<bits/stdc++.h>
using namespace std;

int n;
set<long long> s;

void tachSo(long long n) {
	while(n>0) {
		s.insert(n%10);
		n /= 10;
	}
}
int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		s.clear();
		cin >> n;
		for(long long i=0, x; i<n; i++) {
			cin >> x;
			tachSo(x);
		}
		for(set<long long>::iterator i=s.begin(); i!=s.end(); i++)
			cout << *i << " ";
		cout << endl;
	}	
	return 0;
}

