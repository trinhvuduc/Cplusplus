#include<bits/stdc++.h>
using namespace std;

string s1, s2;

long long tongNho() {
	for(int i=0; i<s1.length(); i++)
		if(s1[i] == '6')	s1[i] = '5';
	for(int i=0; i<s2.length(); i++)
		if(s2[i] == '6')	s2[i] = '5';
	long long a, b;
	istringstream(s1) >> a;
	istringstream(s2) >> b;
	return a + b;
}
long long tongLon() {
	for(int i=0; i<s1.length(); i++)
		if(s1[i] == '5')	s1[i] = '6';
	for(int i=0; i<s2.length(); i++)
		if(s2[i] == '5')	s2[i] = '6';
	long long a, b;
	istringstream(s1) >> a;
	istringstream(s2) >> b;
	return a + b;
}

int main() {
//	ios::sync_with_stdio(false); cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> s1 >> s2;
		cout << tongNho() << " " << tongLon() << endl;
	}
	return 0;
}

