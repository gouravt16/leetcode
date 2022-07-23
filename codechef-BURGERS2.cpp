#include <iostream>
using namespace std;

void findOutput() {
    int x,y,n,total;
    cin >> x >> y >> n >> total;
    if(total/x < n) {
        cout << "-1" << endl;
        return;
    }
    int remaining = total - x*n;
    int prem = remaining / (y-x);
    if(prem >= n) {
        cout << "0 " << n << endl;
    } else {
        cout << n-prem << " " << prem << endl;
    }
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    findOutput();
	}
	return 0;
}
