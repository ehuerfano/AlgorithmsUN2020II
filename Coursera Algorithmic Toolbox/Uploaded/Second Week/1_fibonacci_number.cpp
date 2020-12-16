#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;

int fibonacci(ll n){
  vector<ll> fib;
  for(ll i=0; i<n+1; i++){
    if(i<2){
      fib.push_back(i);
    }
    else{
      fib.push_back(fib.at(i-1) + fib.at(i-2));
    }
  }
  return fib.at(n);
}

int main() {
	ll n;
  cin >> n;
  cout << fibonacci(n) << "\n";
	return 0;
}
