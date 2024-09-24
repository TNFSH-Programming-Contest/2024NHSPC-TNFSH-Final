#include<bits/stdc++.h>
using namespace std;
int way[105],t[15],a[105][15],b[105][15],c[105][15],x[105][15][15],y[105][15][15],z[105][15][15],in[105][15];
long long int dis[105][15];
vector<pair<int,int>>out[105];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>way[i];
	for(int i=1;i<=m;i++)cin>>t[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=way[i];j++){
			cin>>a[i][j];
			for(int k=1;k<=a[i][j];k++)cin>>x[i][j][k]>>y[i][j][k];
            cin>>b[i][j];
            for(int k=1;k<=b[i][j];k++)cin>>z[i][j][k];
            cin>>c[i][j];
		}
	}
    for(int p=0;p<(1<<m);p++){
        for(int i=1;i<=n;i++)for(int j=1;j<=way[i];j++){
            dis[i][j]=1e15;
            in[i][j]=a[i][j];
            for(int k=1;k<=b[i][j];k++)if(~p&(1<<(z[i][j][k]-1)))in[i][j]++;

        }
    }
}
