#include <iostream>
using namespace std;

void solution() {
    int n, m; cin >> n >> m;
    int last = m;
    int ans1, ans2, diff=-1,maxDiff = m - n;
    for(int i=n; i<=last; ++i,--maxDiff) {
        int rem = m/i;
        
        if(i*(rem-1) > diff) {
            ans1 = i;
            ans2 = i*rem;
            diff = i*(rem-1);
            last = min(last, i*rem);
        }
        if(diff > maxDiff)
            break;
    }
    cout << ans1 << " " << ans2 << endl;
}

int main() {
	// your code goes here
	int t; cin >> t; while(t--) {
	    solution();
	}
	return 0;
}
