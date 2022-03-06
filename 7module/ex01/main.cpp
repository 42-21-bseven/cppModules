#include "Iter.hpp"

int		main() {
	int arr[] = {1, 2, 3};
	iter(arr, 3, fonc);

	double d_arr[] = {4.7, 5.8, 6.9};
	iter(d_arr, 3, fonc);

	float f_arr[] = {2.0f, 3.45f, 789.9f};
	iter(f_arr, 3, fonc);

	char c_arr[] = {'O', 'M', 'G'};
	iter(c_arr, 3, fonc);

	std::string s_arr[] = {"Oh", "My", "God"};
	iter(s_arr, 3, fonc);

	return(0);
}
