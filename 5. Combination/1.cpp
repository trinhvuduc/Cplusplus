#include<bits/stdc++.h>
using namespace std;

int n, check;
char s[25];

void next() {
	for(int i=0; i<n; i++)
		cout << s[i];
	cout << " ";
	int i = n-1;
	while(i >= 0) {
		if(s[i] == '0') {
			s[i] = '1';
			break;
		}
		else s[i] = '0';
		i--;
	}
	if(i < 0) check = false;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		check = true;
		cin >> n;
		memset(s, '0', sizeof(s));
		while(check) {
			next();
		}
		cout << endl;
	}
	return 0;
}

