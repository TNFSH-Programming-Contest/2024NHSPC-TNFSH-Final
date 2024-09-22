#include <bits/stdc++.h>
using namespace std;
#define lli long long int
const lli mod = 998244353;
lli s[1000005], c[1000005];
bitset<(ll)1e6+5> np;
lli p[(ll)1e6+5], phi[(ll)1e6+5];
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
lli get(lli a, lli b){
    if(a<=b||a%b)return 0;
    return (a*phi[a/b]%(mod-1))*fastpow(2, mod-3)%(mod-1);
}
lli fastpow(lli a, lli b){
    lli res = 1;
    while(b!=0){
        if(b&1)res=res*a%mod;
        b>>=1;a=a*a%mod;
    }
}
int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
    cin >> n >> m >> q;
    for(int i=1;i<=m;i++)cin >> c[i];
    s[0]=s[1]=1;
    for(int i=1;i<=n;i++){
        lli tmp = 1;
        for(int j=1;j<=m;j++){
            tmp=tmp*fastpow(c[j], get(i, c[j]))%mod;
        }
        s[i]=s[i-1]*tmp%mod;
    }
    for(int i=1;i<=q;i++){
        int a, b;
        cin >> a >> b;
        cout << s[b]*fastpow(s[a-1], mod-2)%mod << endl;
    }
}
