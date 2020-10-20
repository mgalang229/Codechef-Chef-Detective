#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	int a[n];
	set<int> s;
	for(int i=1; i<=n; ++i) {
		cin >> a[i];
		s.insert(i); 
	}
	for(int i=1; i<=n; ++i)
		if(s.find(a[i])!=s.end())
			s.erase(a[i]);
	for(set<int>::iterator it=s.begin(); it!=s.end(); ++it)
		cout << *it << " ";
	cout << "\n";
}
