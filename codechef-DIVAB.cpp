#include <iostream>
using namespace std;

int findOutput(int a, int b, int n) {
    if(a == b || b == 1 || a%b == 0)
        return -1;
    if(n%a == 0 && n%b)
        return n;
    for(int i=n/a+1; ; ++i) {
        if((i*a)%b)
            return i*a;
    }
    return -1;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int a,b,n;
	    cin >> a >> b >> n;
	    cout << findOutput(a,b,n) << endl;
	}
	return 0;
}
