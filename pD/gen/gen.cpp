#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
inline int randomint(){
	return pow(10.,rnd.next(1.,9.));
}
int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);
    int subtask=atoi(argv[1]),idx=atoi(argv[2]);
	int n=(subtask==5?3000:subtask==6?800000:100000);
	long long int c;
	if(subtask==1)c=0;
	else if(subtask==2)c=(idx%2?rnd.next(1,100):rnd.next(100000,1000000));
	else if(subtask==3||subtask==4)c=1e18;
	else{
		if(idx%4==1)c=rnd.next(1,100);
		else if(idx%4==2)c=rnd.next(100000LL,1000000LL);
		else if(idx%4==3)c=rnd.next(1000000000LL,10000000000LL);
		else c=rnd.next((long long int)1e12,(long long int)1e13);
	}
	if(c<0)c=1;
	cout<<n<<' '<<c<<'\n';
	for(int i=0;i<n;i++){
		if(subtask==3)cout<<1<<" \n"[i==n-1];
		else cout<<(idx%5==1?rnd.next(1,100):idx%5==2?rnd.next(100,10000):idx%5==3?rnd.next(10000,1000000):idx%5==4?randomint():rnd.next((int)1e8,(int)1e9))<<" \n"[i==n-1];
	}
	for(int i=0;i<n;i++){
		cout<<(idx%3==1?rnd.next(1000,1000000):idx%3==2?rnd.next(1000000,1000000000):randomint())<<" \n"[i==n-1];
	}
}