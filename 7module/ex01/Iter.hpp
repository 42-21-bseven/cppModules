#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename someType>
void fonc (someType symbol) {
	std::cout << "OMG it's " << symbol << std::endl;
}

template <typename T, typename U>
void iter (T *mas, U length, void (*func)(T const &t)) {
	for (U i = 0; i < length; i++)
		func(mas[i]);
}

#endif
