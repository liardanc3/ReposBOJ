#include <bits/stdc++.h>
using namespace std;
int arr[1025][1025]{ 0, }, dp[1025][1025]{ 0, }, n, m;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
			dp[i][j] = dp[i][j - 1] + dp[i-1][j] - dp[i-1][j-1] + arr[i][j];
		}
	}
	int x1, x2, y1, y2;
	while (m--) {
		cin >> x1 >> y1 >> x2 >> y2;
		cout << dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1] << '\n';
	}
	return 0;
}