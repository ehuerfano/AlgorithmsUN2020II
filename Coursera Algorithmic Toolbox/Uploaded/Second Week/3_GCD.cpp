#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;

int gcd(ll a, ll b){
  if(a<b){
    ll aux = a;
    a = b;
    b = aux;
  }
  if(b==1)
    return 1;
  else if(b==0)
    return a;
  ll r = a%b;
  ll ans = gcd(b,r);
  return ans;
}

int main() {
	ll a,b;
  cin >> a >> b;
  cout << gcd(a,b) << "\n";
	return 0;
}