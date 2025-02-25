#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T, typename R, typename P>
void	iter(T *array, const size_t len, R(*f)(P))
{
	for (unsigned int i = 0; i < len; i++)
		f(array[i]);
}

template<typename T, typename R, typename P>
void	iter(T *array, const size_t len, R(*f)(P*))
{
	for (unsigned int i = 0; i < len; i++)
		f(&array[i]);
}

#endif
