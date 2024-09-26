#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define F first
#define S second
lli h[1000005], n, a, b, c, d, l, r, dp[6000005];
lli lim = 6e6;
multiset<lli> ms;
pair<lli, lli> p[5];
bool cmp(pair<lli, lli> a, pair<lli, lli> b){
	return a.S*b.F>a.F*b.S;
}
lli get(int x){
	if(x<=lim)return dp[x];
	lli cal = (x-lim+p[3].F-1)/p[3].F;
	cal = cal*p[3].S + dp[x-cal*p[3].F];
	return cal;
}
void sol(){
	lim = 6e6;
	for(int i=1;i<=lim;i++)dp[i]=1e18;
	cin >> n >> a >> b >> c;
	p[1].F=11;p[2].F=451;p[3].F=11451;
	p[1].S=a;p[2].S=b;p[3].S=c;
	sort(p+1, p+4, cmp);
	//cout << p[1].F << " " << p[2].F << " " << p[3].F << endl;
	cin >> d;
	l=1, r=11450;
	for(int i=1;i<=n;i++)cin >> h[i];
	for(int i=11;i<=lim;i++)dp[i]=min(dp[i], dp[i-11]+a);
	for(int i=451;i<=lim;i++)dp[i]=min(dp[i], dp[i-451]+b);
	for(int i=11451;i<=lim;i++)dp[i]=min(dp[i], dp[i-11451]+c);
	for(int i=lim+l+1;i<=lim+r;i++)ms.insert(get(i));
	for(int i=lim;i>0;i--){
		ms.insert(get(i+l));
		lli tmp = *ms.begin();
		dp[i]=min(dp[i], tmp+d);
		ms.erase(ms.find(dp[i+r]));
	}

	lli ans = 0;
	for(int i=1;i<=n;i++){
		if(h[i]<=lim){
			if(dp[h[i]]==1e18){
				cout << -1 << endl;
				return;
			}
			ans=ans+dp[h[i]];
		}
		else{
			lli cal = (h[i]-lim+p[3].F-1)/p[3].F;
			if(dp[h[i]-cal*p[3].F]==1e18){
				cout << "-1\n";
				return;
			}
			cal = cal*p[3].S + dp[h[i]-cal*p[3].F];
			ans += cal;
		}
	}
	cout << ans << endl;
}
int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	sol();
}
