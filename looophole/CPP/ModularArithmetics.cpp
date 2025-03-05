#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	int res = 1;
	while(n>0){
		if(n&1){
			res = (1LL * (res) * (x)%m)%m;
		}
		x = (1LL * (x)%m * (x)%m)%m;
		n = n>>1;
	}
	return res;
}

// 1LL used to typecast from int to long

/*
modularExponentiation(2, 10, 1000);
Iterations:
n	x	res	n & 1 (odd?)	Action
10	2	1	No				x = (2*2) % 1000 = 4
5	4	1	Yes				res = (1 * 4) % 1000 = 4, x = (4*4) % 1000 = 16
2	16	4	No				x = (16*16) % 1000 = 256
1	256	4	Yes				res = (4 * 256) % 1000 = 24, x = (256*256) % 1000 = 536
0	536	24	No				Stop
Final Result: 
2^10 mod1000=24
*/
