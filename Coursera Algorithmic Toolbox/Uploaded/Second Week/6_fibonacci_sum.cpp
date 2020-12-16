#include <bits/stdc++.h>
using namespace std;
typedef long long lll;
typedef unsigned long long int ll;

int fibonacci(ll n){
  // vector<ll> fib;
  ll fibi2 = 0, fibi1 = 1;
  ll sum = 1;
  n%=60;
  if(n<2)
    return n;
  for(ll i=2; i<n+1; i++){
    ll aux = fibi2;
    fibi2 = fibi1;
    fibi1 = (fibi1 + aux)%10;
    sum+=fibi1;
    sum=sum%10;
  }
  return sum;
}

int main() {
  ll n;
  cin >> n;
  cout << fibonacci(n) << "\n";
  return 0;
}