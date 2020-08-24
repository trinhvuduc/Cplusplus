#include<bits/stdc++.h>
using namespace std;

bool prime[10005];

void sieve(int n) {
	memset(prime, true, sizeof(prime));
	prime [0] = prime[1] = false;
    for(int i=2; i*i<=n; i++) { 
        if(prime[i]) {
            for(int j=i*i; j<=n; j+=i) 
                   prime[j] = false; 
        }
    } 
}

int main() {
	sieve(10001);
	int t = 1;
	cin >> t;
	while(t--) {
		int m, n; cin >> m >> n;
		for(int i=m; i<=n; i++)
			if(prime[i])
				cout << i << " ";
		cout << endl;
	}
	return 0;
}

