#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);
    int subtask=atoi(argv[1]);
    if(subtask==1)cout<<rnd.next(1,10000000)<<' '<<1;
    else if(subtask==2)cout<<rnd.next(1,10000000)<<' '<<rnd.next(800000,1000000);
    else if(subtask==3)cout<<rnd.next(1LL,1000000000039LL)<<' '<<1;
    else if(subtask==4)cout<<rnd.next(1LL,1000000000039LL)<<' '<<rnd.next(800000,1000000);
	else cout<<rnd.next(1LL,1000000000039LL)<<' '<<rnd.next("[1-9][0-9]{9999999}");
    cout<<'\n';
}