#include<bits/stdc++.h>
using namespace std;
int way[105],t[15],a[105][15],b[105][15],c[105][15],x[105][15][15],y[105][15][15],z[105][15][15],in[105][15];
long long int dis[105][15],now[105],ans[105];
vector<pair<int,int>>out[105];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>way[i];
	for(int i=1;i<=m;i++)cin>>t[i];
	for(int i=1;i<=n;i++){
		ans[i]=1e15;
		for(int j=1;j<=way[i];j++){
			cin>>a[i][j];
			for(int k=1;k<=a[i][j];k++){
				cin>>x[i][j][k]>>y[i][j][k];
				out[x[i][j][k]].push_back({i,j});
			}
            cin>>b[i][j];
            for(int k=1;k<=b[i][j];k++)cin>>z[i][j][k];
            cin>>c[i][j];
		}
	}
    for(int per=0;per<(1<<m);per++){
		cout<<per<<'\n';
        for(int i=1;i<=n;i++){
			now[i]=1e15;
			for(int j=1;j<=way[i];j++){
            	dis[i][j]=1e15;
            	in[i][j]=a[i][j];
            	for(int k=1;k<=b[i][j];k++)if((~per)&(1<<(z[i][j][k]-1)))in[i][j]++;
			}
        }
		queue<pair<int,int>>qu;//store the (item_id,way_id) which can be maken
		set<pair<int,int>>se;//store the (dis,item_id) whose shortest time is determined and can do Dijkstra
		for(int i=1;i<=n;i++)for(int j=1;j<=way[i];j++)if(!in[i][j])qu.push({i,j});
		while(se.size()||qu.size()){
			while(qu.size()){
				auto [i,j]=qu.front();
				qu.pop();
				dis[i][j]=c[i][j];
				for(int k=1;k<=a[i][j];k++){
					dis[i][j]+=now[x[i][j][k]]*y[i][j][k];
				}
				if(dis[i][j]>=1e15)dis[i][j]=1e15;
				else se.insert({dis[i][j],i});
			}
			if(se.empty())continue;
			auto [temp,i]=*se.begin();
			se.erase(se.begin());
			if(now[i]!=1e15)continue;
			now[i]=temp;
			for(auto p:out[i]){
				if(--in[p.first][p.second]==0)qu.push(p);
			}
		}
		long long int tsum=0;
		for(int i=1;i<=m;i++)if(per&(1<<(i-1)))tsum+=t[i];
		for(int i=1;i<=n;i++)ans[i]=min(ans[i],now[i]+tsum);
    }
	for(int i=1;i<=n;i++)cout<<(ans[i]!=1e15?ans[i]:-1)<<'\n';
}
