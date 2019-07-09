#include <iostream>
#include <vector>
#include <bits/stdc++.h> 

using std::vector;

long long get_number_of_inversions(vector<int> &a, vector<int> &b, size_t left, size_t right) {
	int inversion_count = 0;
	for(int i = 0 ; i < a.size() ; i++){
		for(int j = i ; j < a.size() ; j++){
			if(a[i] > a[j]){
				std::swap(a[i],a[j]);
				inversion_count ++;
			}
		}
	}
	return inversion_count;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  vector<int> b(a.size());
  std::cout << get_number_of_inversions(a, b, 0, a.size()) << '\n';
}
