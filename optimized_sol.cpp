#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> mx(11);
		for(int i=0; i<n; ++i) {
			int p, s;
			cin >> p >> s;
			mx[p]=max(mx[p], s);
		}
		cout << accumulate(begin(mx), begin(mx)+9, 0LL) << "\n";
	}
}
