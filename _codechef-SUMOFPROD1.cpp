#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long findOutput() {
    int n,x,temp=0;
    long long sum=0;
    vector<long long> integerArr;
    cin >> n;
    for(int i=0; i<n; ++i) {
        cin >> x;
        if(x == 1) {
            temp++;
        } else {
            if(temp) {
                integerArr.push_back(temp);
            }
            temp=0;
        }
    }
    integerArr.push_back(temp);
    for(long long a:integerArr) {
        sum+=a*(a+1)/2;
    }
    return sum;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    cout << findOutput() << endl;
	}
	return 0;
}
