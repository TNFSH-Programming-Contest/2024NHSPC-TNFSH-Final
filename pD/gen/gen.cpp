#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
inline long long int randomint(){
	return pow(10.,rnd.next(1.,18.));
}
int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);
    int subtask=atoi(argv[1]),idx=atoi(argv[2]);
	int n=rnd.next(800000,1000000),c;
	if(subtask==1)c=0;
	else if(subtask==2)c=(idx%2?rnd.next(1,100):rnd.next(100000,1000000));
	else if(subtask==3||subtask==4)c=1e18;
	else c=(idx%4==1?rnd.next(1,100):idx%4==2?rnd.next(100000,1000000):idx%4==3?rnd.next(1000000000LL,10000000000LL):rnd.next((long long int)1e12,(long long int)1e13));
	for(int i=0;i<n;i++){
		if(subtask==3)cout<<1<<" \n"[i==n-1];
		else cout<<(idx%3==1?rnd.next(100,1000):idx%3==2?rnd.next(100000,1000000):rnd.next(100000000,1000000000))<<" \n"[i==n-1];
	}
	for(int i=0;i<n;i++){
		cout<<(idx%5==1?rnd.next(100,1000):idx%5==2?rnd.next(10000000,100000000):idx%5==3?rnd.next(1000000000000,10000000000000):idx%5==4?(long long int)1e18:randomint())<<" \n"[i==n-1];
	}
}