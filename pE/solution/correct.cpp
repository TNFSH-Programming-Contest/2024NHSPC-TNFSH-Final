#include <bits/stdc++.h>
using namespace std;
#define lli long long int
lli h[1000005], a, b, c, d, l, r, dp[6000005];
void sol(){
	lli lim = 6e6;
	cin >> n >> a >> b >> c;
	for(int i=1;i<=n;i++)cin >> h[i];
	cin >> d >> l >> r;
	for(int i=11;i<=lim;i++)dp[i]=min(dp[i], dp[i-11]+a);
	for(int i=451;i<=lim;i++)dp[i]=min(dp[i], dp[i-451]+b);
	for(int i=11451;i<=lim;i++)dp[i]=min(dp[i], dp[i-11451]+c);
	lli ans = 0;
	for(int i=1;i<=n;i++){
		if(h[i]<=lim)ans=ans+dp[h[i]];
		else{
			lli cal = (h[i]-lim)/mm;
		}
	}
}
int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	sol();
}
