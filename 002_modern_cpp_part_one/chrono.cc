// Example of intervals in std::chrono
#include <iostream>
#include <chrono>
#include <thread>

int main()
{
	// Interval types defined in the std::chrono library
	std::chrono::seconds(2);                        // 2 second interval
	std::chrono::milliseconds(20);                  // 20 millisecond interval
	std::chrono::microseconds(50);                  // 50 microsecond interval
	
	// Literal suffixes added in C++14
	using namespace std::literals;
	2s;
	20ms;
	50us;

	// an example how to applies in real code
	std::cout << "Waiting for 2 seconds ..." << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::cout << "Waiting for 1 second more ..." << std::endl;
	std::this_thread::sleep_for(1s);

	return 0;
}