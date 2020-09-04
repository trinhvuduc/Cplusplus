// code by L. D. Hai
#include <bits/stdc++.h>
using namespace std;

int a[300];
vector <char> vt;

int main()
{
	int t, len;
	string s;
	cin  >> t;
	while (t--){
		memset(a, 0, sizeof(a));
		vt.clear();
		cin >> s;
		len = s.size();
		for (int i = 0; i < len; i++){
			a[s[i]]++;
		}
		for (int i = 0; i < len; i++){
			if (a[s[i]] == 1){
				vt.push_back(s[i]);
			}
		}
//		sort(vt.begin(), vt.end());
		for (int i = 0; i < vt.size(); i++) {
			 cout << vt[i];
		}
		cout << endl;
	}	
}
