#include <iostream>
#define LLI long long int

using namespace std;
int t, n, arr[5000000], good;
int main(int argc, char const *argv[]) {

  cin>>t;//the number of the tests
  for(int i = 1; i <= t; ++i) {
    cin>>n;
    good = 0;
    for(int j = 0; j < n; ++j) {
        cin>>arr[j];
        if(arr[j]<=j+1) good=1;
    }
    if(good) cout<<"YES"<<endl;
        else
             cout<<"NO"<<endl;
  }
  return 0;
}
