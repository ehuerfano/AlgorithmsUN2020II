#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;

int fibonacci(ll n){
  vector<ll> fib;
  for(ll i=0; i<n+1; i++){
    if(i<2){
      fib.push_back(i);
      // cout <<i <<": "<< i << " " << "\n";
    }
    else{
      ll ith_fib = ((fib.at(i-1))%10 + (fib.at(i-2))%10)%10;
      fib.push_back(ith_fib);
      // cout << i<<": " << fib.at(i) << "\n";
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