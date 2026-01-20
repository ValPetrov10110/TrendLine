add_executable(TrendLine main.cpp time.cpp)

target_link_libraries(
	TrendLine
	PRIVATE
	ftxui::screen
	ftxui::dom
	ftxui::component
)

