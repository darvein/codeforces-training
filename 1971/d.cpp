#include <iostream>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;
typedef long long  ll;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve(){
  int n, k, q;
  cin >> n >> k >> q;

  vector<int> a(k+1);
  vector<int> b(k+1);
  vector<int> queries(q);

  // Reading all positions, times and queries
  for(int i=0; i<k; ++i){ cin >> a[i]; }
  for(int i=0; i<k; ++i){ cin >> b[i]; }
  for(int i=0; i<q; ++i){ cin >> queries[i]; }

  // Setting the last position and time
  a[k] = n;
  b[k] = b[k-1];

  vector<int> res(q);
  for(int i=0; i<q; ++i){ // Looping queries
    int query = queries[i];
    
    if(query == 0){
      res[i] = 0;
      continue;
    }

    for(int j=0; j<=k; ++j){ // 
      if(query <= a[j]){
        if(j == 0){ res[i] = query; }
        else {
          int distance = a[j] - a[j-1];
          int time = b[j] - b[j-1];
          double speed = (double) distance/time;

          int prev_stop_time = b[j-1];
          int distance_from_prev_stop = distance - a[j-1];
          int time_from_prev_stop = (int)(distance_from_prev_stop/speed);
          res[i] = prev_stop_time + time_from_prev_stop;
        }
      }

      break;
    }
  }

  for(const auto& res: res){ cout << res << " "; }
  cout << endl;
}

int32_t main() {
    int t;
    cin >> t;

    while(t--){
      solve();
    }
    
    return 0;
}
