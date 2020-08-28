#include<bits/stdc++.h>
using namespace std;

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		long long n, k; cin >> n >> k;
		long long cnt = 0;
		for(long long i=1; i<k; i++) {
			if(i*i % k == 1) {
				long long last = i + k*(n/k);
				if(last > n)
					last -= k;
				cnt += ((last - i)/k+1);
			}
		}
		cout << cnt << endl;
	}
	return 0;
}

