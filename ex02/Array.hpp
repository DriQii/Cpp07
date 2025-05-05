#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <sstream>
#include <cstdlib>


template<typename T>
class Array
{
	public :
		Array() : _size(0), _array(NULL) {};
		Array(Array &copy) : _size(copy._size), _array(new T[copy._size]) {
			for (long i = 0; i < _size; i++)
				_array[i] = copy[i];
		};
		Array(unsigned int n) : _size(n), _array(new T[n]) {};
		~Array() {
			delete[] _array;
		};
		Array& operator=(Array &rhs) {
			if (_array)
				delete[] _array;
			_size = rhs._size;
			_array = new T[_size];
			for (long i = 0; i < _size; i++)
				_array[i] = rhs[i];
			return(*this);
		};
		T& operator[](long i)
		{
			if(i >= _size || i < 0)
			{
				std::ostringstream oss;
				oss << i;
				std::string str = "Index " + oss.str() + " out of range";
				throw std::out_of_range(str);
			}
			return (_array[i]);
		};
		long	size() const
		{
			return(_size);
		}
	private :
		long	_size;
		T		*_array;
};
#endif
