add_executable(TrendLine main.cpp)

target_link_libraries(
	TrendLine
	PRIVATE
	ftxui::screen
	ftxui::dom
	ftxui::component
)
