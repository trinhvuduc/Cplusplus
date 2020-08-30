#include<bits/stdc++.h>
using namespace std;

int n, m, a[100005], b[100005];

void Union() {
	int i=0, j=0;
	while(i<n && j<m) {
		if(a[i] < b[j]) cout << a[i++] << " ";
		else if(a[i] > b[j]) cout << b[j++] << " ";
		else {
			cout << a[i] << " ";
			i++; j++;
		}
	}
	while(i<n) cout << a[i++] << " ";
	while(j<m) cout << b[j++] << " ";
	cout << endl;
}
void Intersection() {
	int i=0, j=0;
	while(i<n && j<m) {
		if(a[i] < b[j]) i++;
		else if(a[i] > b[j]) j++;
		else {
			cout << a[i] << " ";
			i++; j++;
		}
	}
	cout << endl;
}
int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		for(int i=0; i<n; i++) cin >>a[i];
		for(int i=0; i<m; i++) cin >>b[i];
		sort(a, a+n);
		sort(b, b+m);
		Union();
		Intersection();
	}
	return 0;
}

