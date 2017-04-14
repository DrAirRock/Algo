#include <iostream>
#include <cstdlib>
#include "algo.h"
#include <algorithm>
#include <chrono>
#include <ctime>

using std::cout;

int main(){

	int test[6] = {80,34, 65, 62,62,42,6};

	quick_sort_inplace(test, 0, 6);
	quick_sort(test, 0, 6);
	quick_sort_rand(test, 0, 6);
	quick_sort_start(test, 0, 6);
	merge_sort(test,0, 6);
	insertion_sort(test, 0 ,6);
	selection_sort(test, 0, 6);

	a_print(test, 6);

	return 0;

}
