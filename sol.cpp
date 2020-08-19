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
		int p[n], s[n];
		for(int i=0; i<n; ++i)
			cin >> p[i] >> s[i];
		int sum[9]={0};
		for(int i=0; i<n; ++i)
			if(p[i]<9)
				sum[p[i]-1]=max(sum[p[i]-1], s[i]);
		ll ans=0;
		for(int i=0; i<9; ++i)
			ans+=sum[i];
		cout << ans << "\n";
	}
}
