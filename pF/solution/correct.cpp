#include<bits/stdc++.h>
using namespace std;
const long long int mod=1e12+39;
map<long long int,long long int>mp;
short int k[(int)1e7+20];
long long int fp(long long int x,long long int y){
	if(y==0)return 1;
	return (__int128_t)fp((__int128_t)x*x%mod,y/2)*(y%2?x:1)%mod;
}
int main(){
	long long int loop=mod-1;
	for(long long int i=1;i*i<=mod-1;i++){
		if((mod-1)%i==0){
			if(fp(2,i)==1)loop=min(loop,i);
			if(fp(2,(mod-1)/i)==1)loop=min(loop,(mod-1)/i);
		}
	}
	long long int n,ans=-1,now=1;
	string m;
	cin>>n>>m;
	for(int i=0;i<(1<<20);i++){
		mp[now]=i;
		now=now*2%mod;
	}
	long long int base=now;
	now=1;
	for(long long int i=0;i<(1<<20);i++){
		long long int goal=(__int128_t)n*fp(now,mod-2)%mod;
		if(mp.count(goal)){
			ans=(i<<20|mp[goal]);
			break;
		}
		now=(__int128_t)now*base%mod;
	}
	if(ans==-1){
		cout<<ans;
		return 0;
	}
	for(int i=0;ans>0;i++){
		k[i]+=ans%10;
		ans/=10;
	}
	for(int i=m.size()-1;i>=0;i--){
		if(m[i]!='0'){
			m[i]--;
			break;
		}
		m[i]='9';
	}
	for(int i=0;i<m.size();i++){
		long long int temp=loop;
		for(int j=0;temp>0;j++){
			k[i+j]+=temp%10*(m[m.size()-1-i]-'0');
			temp/=10;
		}
	}
	for(int i=0;i<1e7+15;i++){
		k[i+1]+=k[i]/10;
		k[i]%=10;
	}
	bool flag=0;
	for(int i=1e7+15;i>=0;i--){
		if(k[i])flag=1;
		if(flag)cout<<k[i];
	}
	if(!flag)cout<<0;
}