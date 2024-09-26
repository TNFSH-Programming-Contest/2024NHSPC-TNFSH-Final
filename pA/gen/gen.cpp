#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	int subtask=atoi(argv[1]);
	int n, q, l, r, k;
	if(subtask==1) n=500, q=500;
	else if(subtask==5) n=500000, q=500000;
	else n=1000000, q=1000000;
	cout << n << ' ' << q << "\n";
	
	vector<int> v;
	for(int i=1;i<=n;i++)v.push_back(i);
	shuffle( v.begin(), v.end() );
	int it = 0;
	
	if(subtask==1||subtask==5){
		for(int i=0;i<q;i++){
			int ch;
			if(it!=n-1) ch = rnd.next(1, 3);
			else {
				ch = rnd.next(1, 2);
				if(ch==2)ch=3;
			}
			if(ch==1){
				if(i%3==0){
				l = rnd.next(1, n);
				r = l;
				k = rnd.next(1, 100000);
			}else if(i%3==1){
				int cc = n/10;
				l = rnd.next(1, cc);
				r = rnd.next(n-cc, n);
				k = rnd.next(10000, 100000);
			}else if(i%3==2){
				l = rnd.next(1, n);
				r = n;
				k = rnd.next(50000, 100000);
			}
				cout << ch << ' ' << l << ' ' << r << ' ' << k << endl;
			}else if(ch==2){
				cout << ch << ' ' << v[it] << "\n";
				it++;
			}else{
				cout << ch << ' ' << rnd.next(1, n) << "\n";
			}
		}
	}else if(subtask==2){
		for(int i=0;i<q;i++){
			if(i%3==0){
				l = rnd.next(1, n);
				r = l;
				k = rnd.next(1, 100000);
			}else if(i%3==1){
				int cc = n/10;
				l = rnd.next(1, cc);
				r = rnd.next(n-cc, n);
				k = rnd.next(10000, 100000);
			}else if(i%3==2){
				l = rnd.next(1, n);
				r = n;
				k = rnd.next(50000, 100000);
			}
			cout << 1 << ' ' << l << ' ' << r << ' ' << k << "\n";
		}
	}else if(subtask==3){
		for(int i=0;i<q;i++){
			int ch;
			ch = rnd.next(1, 2);
			if(ch==2)ch=3;
			if(ch==1){
				if(i%3==0){
					l = rnd.next(1, n);
					r = l;
					k = rnd.next(1, 100000);
				}else if(i%3==1){
					int cc = n/10;
					l = rnd.next(1, cc);
					r = rnd.next(n-cc, n);
					k = rnd.next(10000, 100000);
				}else if(i%3==2){
					l = rnd.next(1, n);
					r = n;
					k = rnd.next(50000, 100000);
				}
				cout << ch << ' ' << l << ' ' << r << ' ' << k << "\n";
			}
			else{
				cout << ch << ' ' << rnd.next(1, n) << "\n";
			}
		}
	}else if(subtask==4){
		for(int i=0;i<q;i++){
			int ch;
			ch = rnd.next(1, 2);
			if(it==n-1)ch=1;
			if(ch==1){
				if(i%3==0){
					l = rnd.next(1, n);
					r = l;
					k = rnd.next(1, 100000);
				}else if(i%3==1){
					int cc = n/10;
					l = rnd.next(1, cc);
					r = rnd.next(n-cc, n);
					k = rnd.next(10000, 100000);
				}else if(i%3==2){
					l = rnd.next(1, n);
					r = n;
					k = rnd.next(50000, 100000);
				}
				cout << ch << ' ' << l << ' ' << r << ' ' << k << "\n";
			}else {
				cout << ch << ' ' << v[it] << "\n";
				it++;
			}
		}
	}else if(subtask==6){
		for(int i=0;i<q;i++){
			int ch;
			if(it!=n-1) ch = rnd.next(1, 3);
			else {
				ch = rnd.next(1, 2);
				if(ch==2)ch=3;
			}
			if(ch==1){
				if(i%7<=4){
					l = rnd.next(1, n);
					r = l;
					k = rnd.next(50000, 100000);
				}else if(i%7==5){
					int cc = n/10;
					l = rnd.next(1, cc);
					r = rnd.next(n-cc, n);
					k = rnd.next(50000, 100000);
				}else if(i%7==6){
					l = rnd.next(1, n);
					r = n;
					k = rnd.next(50000, 100000);
				}
				cout << ch << ' ' << l << ' ' << r << ' ' << k << "\n";
			}else if(ch==2){
				cout << ch << ' ' << v[it] << "\n";
				it++;
			}else{
				cout << ch << ' ' << rnd.next(1, n) << "\n";
			}
		}
	}
	return 0;
}
