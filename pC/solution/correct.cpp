#include <bits/stdc++.h>
using namespace std;
#define lli long long int
const lli mod = 998244353;
lli n, m, q, mmod;
lli s[1000005], c[1000005];
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
    sieve(n);mmod=getphi(mod-1);
    for(int i=1;i<=m;i++)cin >> c[i];
    s[0]=s[1]=1;
    for(int i=1;i<=n;i++){
        lli tmp = 1;
        for(int j=1;j<=m;j++){
            tmp=tmp*fastpow(c[j], get(i, c[j]), mod)%mod;
            //cout << i << " and " << c[j] << " get " << get(i, c[j]) << endl;
        }
        //cout << i << " " << tmp << endl;
        s[i]=s[i-1]*tmp%mod;
    }
    for(int i=1;i<=q;i++){
        int a, b;
        cin >> a >> b;
        cout << s[b]*fastpow(s[a-1], mod-2, mod)%mod << endl;
    }
}
