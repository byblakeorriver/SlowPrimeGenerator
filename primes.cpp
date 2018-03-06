#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
#include "Primes.h"
using namespace std;

std::vector<int>primes(int n){
	std::vector<int>test(n);
	for(int i = 0; i<n; i++){

		test[i]=1;

	}
	test[0]=0;
	test[1]=0;
	for(int k = 2; k<sqrt(n);k++){
		if(test[k]==1){

			for(int j = k*k;j<n;j=j+k){

				test[j]=0;
			}
		}
	}
	return test;
}
