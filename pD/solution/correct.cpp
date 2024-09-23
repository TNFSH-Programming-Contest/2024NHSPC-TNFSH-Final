#include<bits/stdc++.h>
using namespace std;
int a[(int)1e6+5];
long long int v[(int)1e6+5];
int main(){
	cin.tie(0)->sync_with_stdio(0);
	int n;
	long long int c;
	cin>>n>>c;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>v[i];
	int bs=(1<<30),ans=0;
	while(bs){
		long long int left=c,t=ans+bs;
		for(int i=0;i<n;i++){
			if((1+t*2)*(1+t*2)+8LL*(1LL*a[i]*t-v[i])<0)left=-1;
			else left-=max(0.,ceil((t*2+1-sqrt((1+t*2)*(1+t*2)+8LL*(1LL*a[i]*t-v[i])))/2));
			if(left<0)break;
		}
		if(left<0)ans+=bs;
		bs/=2;
	}
	cout<<ans+1;
}