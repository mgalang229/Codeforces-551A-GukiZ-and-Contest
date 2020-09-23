#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; ++i)
		cin >> a[i];
	int max=*max_element(a, a+n);
	for(int i=0; i<n; ++i) {
		if(a[i]==max)
			cout << 1;
		else {
			int cnt=0;
			for(int j=0; j<n; ++j)
				if(a[i]<a[j]&&i!=j)
					cnt++;
			cout << cnt+1;
		}
		cout << " ";
	}
	cout << "\n";
}
