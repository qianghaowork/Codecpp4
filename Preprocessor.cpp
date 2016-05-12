/* Enter your macros here */
#define INF 2147483647 
#define FUNCTION(fname, opr) void fname(int &a, int b) { if (!(a opr b) ) a = b; }
#define toStr(s) #s
#define io(v) cin >> v
#define foreach(v,i) for(int i=0; i<v.size(); ++i)

#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
    int n; cin >> n;
    vector<int> v(n);
    foreach(v, i) {
        io(v)[i];
    }
    int mn = INF;
    int mx = -INF;
    foreach(v, i) {
        minimum(mn, v[i]);
        maximum(mx, v[i]);
    }
    int ans = mx - mn;
    cout << toStr(Result =) <<' '<< ans;
}


