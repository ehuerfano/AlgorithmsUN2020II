#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;

int fibonacci(ll n, ll m){
  vector<ll> fib;
  vector<ll> fibmod;
  ll period;
  ll i = 0;
  while(1){
    if(i<2){
      fib.push_back(i);
      fibmod.push_back(i);
    }
    else{
      fibmod.push_back((fibmod.at(i-1)+fibmod.at(i-2))%m);
    }
    if(i>1){
      ll prev = fibmod.at(fibmod.size()-2);
      ll last = fibmod.at(fibmod.size()-1);
      if(prev==0 && last ==1){
        period = fibmod.size()-2;
        break;
      }
    }
    i++;
  }
  return fibmod.at(n%period);
}

int main() {
	ll n,m;
  cin >> n >> m;
  cout << fibonacci(n,m) << "\n";
	return 0;
}
