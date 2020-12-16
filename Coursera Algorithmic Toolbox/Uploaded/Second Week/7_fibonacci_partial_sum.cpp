#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;

vector<ll> fibonacci_arr(){
  ll fibi2 = 0, fibi1 = 1;
  ll sum = 1;
  vector<ll> fib_sums;
  fib_sums.push_back(0);
  fib_sums.push_back(1);
  for(ll i=2; i<60; i++){
    ll aux = fibi2;
    fibi2 = fibi1;
    fibi1 = (fibi1 + aux)%10;
    fib_sums.push_back(fibi1);
  }
  return fib_sums;
}

ll fibonacci(ll m, ll n, vector<ll> fib){
  ll sum=0;
  if(n-m<60){
    n%=60;
    m%=60;
    for(int i=m;i<=n;i++)
      sum+=fib.at(i)%10;
    sum%=10;
  }
  else{
    n%=60;
    m%=60;
    ll sum_1 = 0;
    for(int i=m;i<60;i++){
      sum_1+=fib.at(i)%10;
    }
    sum = sum_1%10;

    ll sum_2 = 0;
    ll res = n/60;
    if(res > 1){
      for(ll i=0;i<60;i++)
        sum_2+=fib.at(i)%10;
      sum+= ((sum_2*res)%10)%10;
    }

    ll sum_3 = 0;
    for(int i=0;i<=n;i++)
      sum_3+=fib.at(i)%10;
    sum += (sum_3%10)%10;
  }
  return sum%10;
}

int main() {
  ll m, n;
  cin >> m >> n;
  vector<ll> fib_sums = fibonacci_arr();
  cout << fibonacci(m,n,fib_sums) << "\n";
  return 0;
}