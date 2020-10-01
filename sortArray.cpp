#include <iostream>
#include <bits/stdc++.h>

const int D = 10;

void recursiveSort(vector<int> &v, int n) {
	if(n == 0) { // Base Case
		return;
	}
	else {
		int temp = arr[n-1];
		recursiveSort(v, n-1); // Hypothesis

		// Induction
		int pos = 0;
		int flag = 0;
		for(int i = 0; i < n-1; ++i) {
			if(v[i] > temp) {
				pos = i;
				flag = 1;
				break;
			}
		}
		if(flag == 1) {
			vector<int>::iterator it = v.begin() + pos;
			it = v.insert(it, temp);
		}
		
	}
}
int main() {
	int n;
	cin >> n;
	vector<int> v(n, 0);
	for(int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	recursiveSort(v, n);
	for(auto i : v) {
		cout << *i << " ";
	}
	return 0;
}