#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve(){
  string in;
  cin >> in;

  int cnt = 1;
  bool zerouno = false;

  for(int i=0; i+1<(int)in.size(); ++i){
    if(in[i] != in[i+1]){
      cnt++;
    }
    if(in[i] == '0' && in[i+1] == '1'){
      zerouno = true;
    }
  }

  int res = cnt - zerouno;
  cout << res << endl;
}

int main() {
    int t;
    cin >> t;

    while(t--){
      solve();
    }
    
    return 0;
}
