#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int getUniqueCharsCount(const string& s){
  set<char> uniques(s.begin(), s.end());
  return uniques.size();
}

string rearrange(string s){
  next_permutation(s.begin(), s.end());
  return s;
}

int main() {
    int t;
    cin >> t;

    int uniques;
    string rearranged;

    string word;
    while(t--){
      cin >> word;

      uniques = getUniqueCharsCount(word);

      if (uniques == 1){
        cout << "NO" << endl;
      } else {
        rearranged = rearrange(word);
        cout << "YES" << endl << rearranged << endl;
      }
    }
    
    return 0;
}
