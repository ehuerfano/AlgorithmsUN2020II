#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;

long long lcm(ll a, ll b){
  if(a<b){
    ll aux = a;
    a = b;
    b = aux;
  }
  ll proda=a;
  ll prodb=b;
  ll multi = 2;
  ll multj = 2;
  while(1){
    while(prodb<proda){
      prodb = b*multi;
      multi++;
    }
    while(proda<prodb){
      proda = a*multj;
      multj++;
    }
    if(proda==prodb)
      break;
  }
  return proda;
}

int main() {
	ll a,b;
  cin >> a >> b;
  cout << lcm(a,b) << "\n";
	return 0;
}