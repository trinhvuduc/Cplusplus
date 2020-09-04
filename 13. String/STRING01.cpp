// Loai bo xau con
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t = 1;
//	cin >> t;
//	cin.ignore();
	while(t--) {
		vector<string> v;
		string tu_loai_bo, chuoi_ban_dau;
		getline(cin, chuoi_ban_dau);
		istringstream iss(chuoi_ban_dau);
		string tmp;
		while(iss >> tmp) 
			v.push_back(tmp);
		cin >> tu_loai_bo;
		for(int i=0; i<v.size(); i++)
			if(v[i] != tu_loai_bo)
				cout << v[i] << " ";
	}
	return 0;
}
