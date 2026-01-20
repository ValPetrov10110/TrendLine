#include <cstdlib>
#include <vector>
#include "time.hpp"
#include <ftxui/component/screen_interactive.hpp>
#include <ftxui/component/component.hpp>
#include <ftxui/dom/elements.hpp>

using namespace ftxui;

int main(){
	Color rgbColorHeader = Color::RGB(95,196,193);
	Color rgbColorBody = Color::RGB(163, 163, 163);
	auto screen = ScreenInteractive::Fullscreen();

	// This data set is just to test my menu dynamics, logic will obviously
	// be reworked
	std::vector<std::string> stock_PLACEHOLDER = {
		"AAPL    +1.32%    $87.93",
		"MSFT    -0.03%    $143.43",
		"TSLA    +32.30%   $3.21"
	};
	int stockSelection{};
	auto menu = Menu(&stock_PLACEHOLDER, &stockSelection);

	// This is creating our vertical cell where the stock tickers will live
	auto make_box = [](auto& menu, int xdim, int ydim){
		return vbox({
			text("WATCHLIST"),
			separator(),
			menu->Render()
		}) | size(WIDTH, EQUAL, xdim) | size(HEIGHT, EQUAL, ydim) | borderLight;
	};

	auto container = Container::Vertical({
		menu | color(rgbColorBody)
	});

	auto mainWindow = Renderer(container, [&](){
		return vbox({
			hbox({
				text("TRENDLINE") | flex | color(rgbColorHeader),
				text(timeDisplay() + " ") | bold | flex | align_right | color(rgbColorHeader)
			}),
			separator() | color(rgbColorHeader),
			text(" "),
			hflow({
				make_box(menu, 30, 58)
			}),
			separator() | color(rgbColorHeader),
			text("Press 's' to Search") | bold | color(rgbColorHeader) | center
		}) | borderEmpty;
	});

	screen.Loop(mainWindow);


	return EXIT_SUCCESS;
}

