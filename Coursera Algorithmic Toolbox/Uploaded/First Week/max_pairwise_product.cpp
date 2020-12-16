#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;

int main() {
	ll T;
	cin >> T;
	ll maxa=0;
	ll maxb=0;
	ll aux;
	for(ll i=0;i<T;i++){
		cin >> aux;
		if(aux > maxa){
			maxb=maxa;
			maxa=aux;
		}
		else if(aux > maxb){maxb=aux;}
	}
	cout << maxa*maxb << '\n';
	return 0;
}
