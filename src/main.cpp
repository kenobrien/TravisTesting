#include <iostream>
#include <array>

int main(int argc, char *argv[]) {
	std::array<int, 10> arr;
	
	arr.fill(0xff);

	for(auto &i: arr) {
		std::cout << i << std::endl;
	}
	return 0;
}
