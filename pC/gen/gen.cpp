#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	int subtask=atoi(argv[1]);
	int n, m, q;
	if(subtask==1)n=500, q=500, m=100;
	else n=100000, q=100000, m=100;
	cout << n << ' ' << m << ' ' << q << "\n";
	if(subtask!=2){
		for(int i=1;i<=m;i++){
			int c = 1;
			c=rnd.next(c+1, n-(m-i));
			cout << c << " \n"[i==m];
		}
		for(int i=1;i<=q;i++){
			int l, r;
			if(i%3==0){
				int cc = n/5;
				l = rnd.next(1, cc);
				r = rnd.next(n-cc, n);
			}else if(i%3==1){
				int cc = n/5;
				l = 1;
				r = rnd.next(1, n);
			}else if(i%3==2){
				l = rnd.next(1, n);
				r = rnd.next(l, n);
			}
			cout << l << ' ' << r << "\n";
		}
	}else{
		for(int i=1;i<=m;i++){
			int c = (n/2)+1;
			c=rnd.next(c+1, n-(m-i));
			cout << c << " \n"[i==m];
		}
		for(int i=1;i<=q;i++){
			int l, r;
			if(i%3==0){
				int cc = n/5;
				l = rnd.next(1, cc);
				r = rnd.next(n-cc, n);
			}else if(i%3==1){
				int cc = n/5;
				l = 1;
				r = rnd.next(1, n);
			}else if(i%3==2){
				l = rnd.next(1, n);
				r = rnd.next(l, n);
			}
			cout << l << ' ' << r << "\n";
		}
	}
	return 0;
}
