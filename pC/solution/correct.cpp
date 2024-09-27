#include <bits/stdc++.h>
using namespace std;
#define lli long long int
const lli mod = 998244353;
lli n, m, q, mmod;
lli s[1000005], c[1000005];
set<lli> ss;
bitset<(lli)1e6+5> np;
lli p[(lli)1e6+5], phi[(lli)1e6+5];
void sieve(lli n){
    lli cnt = 1;
    for(lli i=2;i<=n;i++){
        if(!np[i])p[cnt++]=i, phi[i]=i-1;
        for(lli j=1;j<cnt&&i*p[j]<=n;j++){
            np[i*p[j]]=1;
            if(i%p[j]==0){
                phi[p[j]*i]=phi[i]*p[j];
                break;
            }
            else phi[i*p[j]]=phi[i]*(p[j]-1);
        }
    }
}
lli fastpow(lli a, lli b, lli c){
    lli res = 1;
    while(b!=0){
        if(b&1)res=res*a%c;
        b>>=1;a=a*a%c;
    }
    return res;
}
lli get(lli a, lli b){ //gcd(i, a)==b
    if(a<=b||a%b)return 0;
    lli tmp = phi[a/b];
    if(a%2==0)a>>=1;
    else tmp>>=1;
    return (a*tmp%(mod-1));
}
int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
    cin >> n >> m >> q;
    sieve(n);
    for(int i=1;i<=m;i++){
        cin >> c[i];
        ss.insert(c[i]);
    }
    s[0]=s[1]=1;
    for(int i=1;i<=n;i++){
        lli tmp = 1;
        for(lli it : ss){
            tmp = tmp * fastpow(it, get(i, it), mod)%mod;
        }
        s[i]=s[i-1]*tmp%mod;
    }
    for(int i=1;i<=q;i++){
        int l, r;
        cin >> l >> r;
        cout << s[r]*fastpow(s[l-1], mod-2, mod)%mod << endl;
    }
}
