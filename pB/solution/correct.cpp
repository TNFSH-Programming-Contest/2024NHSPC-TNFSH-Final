#include<bits/stdc++.h>
using namespace std;
int way[105],t[15],a[105][15],b[105][15],c[105][15],x[105][15][15];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>way[i];
	for(int i=1;i<=m;i++)cin>>t[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=way[i];j++){
			cin>>a[i][j];
			for(int k=1;k<=a[i][j];k++)cin>>x[i][j][k];
		}
	}
}