#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	int subtask=atoi(argv[1]);
	long long int n, q;
	if(subtask==1) n=3000, q=3000;
	else n=5000000, q=5000000;
	cout << n << ' ' << q << "\n";
	vector<int> v;
	for(int i=1;i<=n;i++)v.push_back(i);
	shuffle( v.begin(), v.end() );
	int it = 0;
	for(int i=0;i<q;i++){
		int ch;
		if(it!=n-1) ch = rnd.next(1, 3);
		else {
			ch = rnd.next(1, 2);
			if(ch==2)ch=3;
		}
		if(ch==1){
			int l = rnd.next(1LL, n);
			int r = rnd.next(lLL, n);
			int k = rnd.next(1, 1000000000);
			cout << ch << ' ' << l << ' ' << r << ' ' << k << "\n";
		}else if(ch==2){
			cout << ch << ' ' << v[it] << "\n";
			it++;
		}else{
			cout << ch << ' ' << rnd.next(1LL, n) << "\n";
		}
	}
	return 0;
}
