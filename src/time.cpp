#include <iomanip>
#include <chrono>
#include <string>
#include "time.hpp"

std::string timeDisplay(){
	auto now = std::chrono::system_clock::now();
	std::time_t now_time = std::chrono::system_clock::to_time_t(now);

	std::tm* local_time = std::localtime(&now_time);
	std::ostringstream oss;
	oss << std::put_time(local_time, "%Y-%d-%m | %H:%M:%S");

	return oss.str();
} 

