#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);
    int subtask=atoi(argv[1]);
    long long int n;
    if(subtask==1||subtask==2){
        int temp=rnd.next(1,10000000);
        while(temp--)n=n*2%1000000000039LL;
    }else n=rnd.next(1LL,1000000000038LL);
    if(subtask==1||subtask==3)cout<<n<<' '<<1<<'\n';
    else if(subtask==2||subtask==4)cout<<n<<' '<<rnd.next(800000,1000000)<<'\n';
	else cout<<n<<' '<<rnd.next("[1-9][0-9]{9999999}")<<'\n';
}