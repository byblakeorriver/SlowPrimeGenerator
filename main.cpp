#include <iostream>
#include <stdio.h>
#include <vector>
#include "Primes.h"
using namespace std;

int main()
{
	int n;
	cout<<"Please enter a number:"<<endl;
	cin >> n;
	std::vector<int> ans(n);
	ans =  primes(n);
	for(int i = 0; i<n;i++){
		if(ans[i]==1){
			cout<< i<<endl;
		}
	}
    return 0;
}
