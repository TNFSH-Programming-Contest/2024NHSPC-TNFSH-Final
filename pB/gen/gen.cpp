#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
int way[130],t[15],a[130][15],b[130][15],c[130][15],shufa[130],shufb[15];
inline int randomint(double l,double r){
	return pow(10.,rnd.next(l,r));
}
int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);
    int subtask=atoi(argv[1]),idx=atoi(argv[2]);
	int n=(idx%2?rnd.next(1,127):128),m=(subtask==7?12:10),sp=0;
	cout<<n<<' '<<m<<'\n';
	for(int i=0;i<n;i++)shufa[i]=i+1;
	for(int i=0;i<m;i++)shufb[i]=i+1;
	for(int i=0;i<n;i++)way[i]=(subtask==5?1:idx%3==1?10:rnd.next(1,10));
	for(int i=0;i<n;i++)cout<<way[i]<<" \n"[i==n-1];
	for(int i=0;i<m;i++)t[i]=randomint(0,9);
	for(int i=0;i<m;i++)cout<<t[i]<<" \n"[i==m-1];
	for(int i=0;i<n;i++)for(int j=0;j<way[i];j++){
		sp++;
		a[i][j]=(subtask==1||subtask==2?0:subtask==3||subtask==4?1:idx%5!=0&&sp%10==1?0:rnd.next(0,min(n,10)));
		cout<<a[i][j]<<' ';
		shuffle(shufa,shufa+n);
		for(int k=0;k<a[i][j];k++)cout<<shufa[k]<<' '<<rnd.next(1,10)<<" \n"[k==a[i][j]-1];
		if(!a[i][j])cout<<'\n';
		b[i][j]=(subtask==1||subtask==3?0:rnd.next(0,10));
		cout<<b[i][j]<<' ';
		shuffle(shufb,shufb+m);
		for(int k=0;k<b[i][j];k++)cout<<shufb[k]<<" \n"[k==b[i][j]-1];
		if(!b[i][j])cout<<'\n';
		c[i][j]=rnd.next(0,100);
		cout<<c[i][j]<<'\n';
	}
}