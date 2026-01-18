cmake_minimum_required(VERSION 3.14)
project(TrendLine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
	ftxui
	GIT_REPOSITORY https://github.com/ArthurSonzogni/FTXUI.git
	GIT_TAG v6.1.9
)
FetchContent_MakeAvailable(ftxui)

add_subdirectory(src)
