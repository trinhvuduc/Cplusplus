#include <iostream> 
using namespace std; 

int arr[10000005];

int minSwap(int *arr, int n, int k) { 
	int count = 0; 
	for (int i = 0; i < n; ++i) 
		if (arr[i] <= k) 
			++count; 
	int bad = 0; 
	for (int i = 0; i < count; ++i) 
		if (arr[i] > k) 
			++bad; 
	int ans = bad; 
	for (int i = 0, j = count; j < n; ++i, ++j) { 
		if (arr[i] > k) 
			--bad; 
		if (arr[j] > k) 
			++bad; 
		ans = min(ans, bad); 
	} 
	return ans; 
} 
int main() {
	int t; cin >> t;
	while(t--) {
		int n, k; cin >> n >> k;
		for(int i=0; i<n; i++) cin >> arr[i];
		cout << minSwap(arr, n, k) << endl;
	}
	return 0; 
}
