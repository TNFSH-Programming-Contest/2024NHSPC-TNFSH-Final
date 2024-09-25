#include <bits/stdc++.h>
using namespace std;
#define lli long long int 
#define F first
#define S second
#define mp make_pair
#define lowbit(x) (x&(-x))
lli n, q;
set<int> s;
pair<lli, lli> p[5000005];
void upd(int idx, lli v, lli u){
	for(int i=idx;i<=n;i+=lowbit(i)){
		p[i].F+=v;
		p[i].S+=u;
	}
}
pair<lli, lli> sum(int idx){
	pair<lli, lli> tmp = mp(0, 0);
	for(int i=idx;i>0;i-=lowbit(i)){
		tmp.F+=p[i].F;tmp.S+=p[i].S;
	}
	return tmp;
}
lli get(int idx){
	pair<lli, lli> tmp = sum(idx);
	return (idx+1)*tmp.F-tmp.S;
}
void sol(){
	cin >> n >> q;
	for(int i=0;i<=n+1;i++)s.insert(i);
	for(int i=1;i<=q;i++){
		int ch;
		cin >> ch;
		if(ch==1){
			lli l, r, k;
			cin >> l >> r >> k;
			upd(l, k, l*k);
			if(r+1<=n)upd(r+1, -k, -(r+1)*k);
		}else if(ch==2){
			int x;
			cin >> x;
			s.erase(x);
		}else{
			int y;
			cin >> y;
			if(s.find(y)==s.end())cout << 0 << endl;
			else{
				auto it = s.lower_bound(y);
				it--;
				int lm = *it;
				cout << get(y)-get(lm) << endl;
			}
		}


		// cout << "now : " << endl;
		// for(int j=1;j<=n;j++){
		// 	if(s.find(j)==s.end())cout << 0 << " ";
		// 	else{
		// 		auto it = s.lower_bound(j);
		// 		it--;
		// 		int lm = *it;
		// 		cout << get(j)-get(lm) << " ";
		// 	}
		// }
		// cout << endl;


	}

	
	for(int i=1;i<=n;i++){
		if(s.find(i)==s.end())cout << 0 << " ";
		else{
			auto it = s.lower_bound(i);
			it--;
			int lm = *it;
			cout << get(i)-get(lm) << " ";
		}
	}
	cout << endl;
}
int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	sol();
}
