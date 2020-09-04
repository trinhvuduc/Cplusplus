// Chuan hoa ten
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t = 1;
//	cin >> t;
	while(t--) {
		vector<string> v;
		string s;
		getline(cin, s);
		istringstream iss(s);
		string tmp;
		while(iss >> tmp)      // loai bo dau khoang trang
			v.push_back(tmp);
		int n = v.size();
		for(int i=0; i<n-1; i++) {
			for(int j=0; j<v[i].length(); j++) {
				if(j == 0)
					v[i][j] = toupper(v[i][j]);  // ky tu dau viet hoa
				else
					v[i][j] = tolower(v[i][j]);  // ky tu con lai viet thuong
			}
		}
		for(int i=0; i<n-2; i++) {
			cout << v[i] << " ";
		}
		cout << v[n-2] << ", ";  // in them dau ','
		for(int i=0; i<v[n-1].length(); i++)
			v[n-1][i] = toupper(v[n-1][i]);  // chu cuoi viet hoa
		cout << v[n-1];
	}
	return 0;
}

