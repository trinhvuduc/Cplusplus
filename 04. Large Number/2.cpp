#include<bits/stdc++.h>
using namespace std;

string sum(string s1, string s2) {
	if(s1.length() > s2.length())    // lay s2 lon hon
		swap(s1, s2);
	int n1 = s1.length();
	int n2 = s2.length();
	string s = "";
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	int du = 0;
		int sum = (s1[i] - '0') + (s2[i] - '0') + du;
		s += (sum%10 + '0');
		du = sum/10;
	}
	for(int i=n1; i<n2; i++) {		// phan thua
		int sum = (s2[i] - '0') + du;
		s += (sum%10 + '0');
		du = sum/10;
	}
	if(du > 0) s += du + '0';  		// phan du
	reverse(s.begin(), s.end());
	return s;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		string s1, s2;
		cin >> s1 >> s2;
		cout << sum(s1, s2) << endl;
	}
	return 0;
}

