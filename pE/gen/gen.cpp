#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	int subtask=atoi(argv[1]);
	int a, b, c, d, n, l, r;
	if(subtask==1){
		n = rnd.next(1000, 100000);
		a = rnd.next(1, 10000000);
		b = rnd.next(1, 10000000);
		c = rnd.next(1, 10000000);
		d = rnd.next(1, 10000000);
		l = rnd.next(1, 1000000);
		r = rnd.next(l, 1000000);
		cout << n << ' ' << a << ' ' << b << ' ' << c << endl;
		cout << d << ' ' << l << ' ' << r << endl;
		for(int i=1;i<=n;i++){
			if(i%3==1){
				cout << rnd.next(1, 100) << " \n"[i==n];
			}else if(i%3==2){
				cout << rnd.next(1000, 10000) << " \n"[i==n];
			}else if(i%3==0){
				cout << rnd.next(500000, 1000000) << " \n"[i==n];
			}
			
		}
	}else if(subtask==2){
		n = 1;
		a = rnd.next(1, 10000000);
		b = rnd.next(1, 10000000);
		c = rnd.next(1, 10000000);
		d = rnd.next(1, 10000000);
		l = rnd.next(1, 1000000);
		r = l;
		cout << n << ' ' << a << ' ' << b << ' ' << c << endl;
		cout << d << ' ' << l << ' ' << r << endl;
		for(int i=1;i<=n;i++){
			if(i%3==1){
				cout << rnd.next(1, 100) << " \n"[i==n];
			}else if(i%3==2){
				cout << rnd.next(10000, 1000000) << " \n"[i==n];
			}else if(i%3==0){
				cout << rnd.next(100000000, 1000000000) << " \n"[i==n];
			}
			
		}
	}else{
		n = 100000;
		a = rnd.next(1, 10000000);
		b = rnd.next(1, 10000000);
		c = rnd.next(1, 10000000);
		d = rnd.next(1, 10000000);
		l = rnd.next(1, 100000);
		r = rnd.next(500000, 1000000);
		cout << n << ' ' << a << ' ' << b << ' ' << c << endl;
		cout << d << ' ' << l << ' ' << r << endl;
		for(int i=1;i<=n;i++){
			if(i%3==1){
				cout << rnd.next(1, 100) << " \n"[i==n];
			}else if(i%3==2){
				cout << rnd.next(10000, 1000000) << " \n"[i==n];
			}else if(i%3==0){
				cout << rnd.next(100000000, 1000000000) << " \n"[i==n];
			}
			
		}
	}
	return 0;
}
