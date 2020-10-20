#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	bool vis[n+1];
	memset(vis, 0, sizeof(vis));
	for(int i=0; i<n; ++i) {
		int tmp;
		cin >> tmp;
		if(tmp!=0)
			vis[tmp-1]=1;
	}
	for(int i=0; i<n; ++i)
		if(!vis[i])
			cout << i+1 << " ";
	cout << "\n";
}
