#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
int main(void)
{
	Array<int> test(6);
	Array<std::string> strs(2);
	Array<int> test2;
	try {

	test[2] = 6;
	test2 = test;
	Array<int> testCopy(test);
	testCopy[2] = 8;
	test2[2] = 10;
	std::cout << test[2] << std::endl;
	std::cout << testCopy[2] << std::endl;
	std::cout << test2[2] << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		test[-2] = 0;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		test[8] = 0;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		strs[0] = "Hello";
		strs[1] = "World";
		std::cout << strs[0] << std::endl;
		std::cout << strs[1] << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		strs[-1] = "h";
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		strs[3] = "h";
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
