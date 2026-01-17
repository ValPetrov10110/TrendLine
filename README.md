# Terminal Stock Market Visualizer

**A real-time terminal-based stock market visualizer built in C++.**
Designed to display market data, charts, and indicators directly in the terminal using ncurses


---


## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Architecture & Design](#architecture--design)
- [Skills & Concepts](#skills--concepts)
- [Future Enhancements](#future-enhancements)
- [License](#license)


---


## Overview
This project is a terminal application that simulates or visualizes stock market data in real-time
It was built to explore and apply skills in:

- Systems-level C++ programming
- Data structures for time-series processing
- Terminal rendering and input handling
- Real-time event-driven design

The project emphasizes **performance, correctness, and maintainability**, making it a strong exercise in building finance-focused tools with a systems perspective.


---


## Feautures
- Load historical stock data from CSV
- Display **line charts** and **candlestick charts** in the terminal
- Real-time updates with smooth ASCII rendering as backup
- Scrollable timeline for navigating through market data
- Keyboard-based controls for ticker selection and chart switching
- Optional indicators (SMA, EMA, volume)


---


## Installation

1. Clone the repository:

```bash
git clone https://github.com/ValPetrov10110/TrendLine.git
cd TrendLine
```

2. Build the project (using `g++`)

```bash
g++ -std=c++20 -lncurses -02 -o TrendLine src/*.cpp
```
> **_NOTE:_** `ncurses` is optional; ASCII fallback rendering is included for pure terminal usage

3. Run the visualizer:

```bash
./TrendLine
```


---


## Usage

- **Arrow keys** - Navigate through the timeline
- **t** - Switch between stock tickers
- **i** - Toggle technical indicators (e.g., SMA, EMA, volume)
- **q** - Quit the program

> All functionality is available directly in the terminal. No GUI is required.


---


## Architecture & Design
The project is organized around modular systems:

- **Data Manager** - Handles stock data ingestion, parsing, and updates
- **Renderer** - Draws charts, candlesticks, and UI elements in the terminal
- **Input Manager** - Handles non-blocking keyboard input
- **Update Loop** - Deterministic cycle for processing and rendering
- **Indicators System** - Calculates moving averages, volumes, and other technical indicators

This architecture emphasizes **separation of concerns** and **extensibility**, allowing future integration of live API data, multi-ticker dashboards, or advanced visualizations.


---


## Skills & Concepts Demonstrated
- Modern C++ (C++17/20 features)
- Pointers, memory management, and references
- Data structures for real-time time-series data (vectors, deques, sliding windows)
- Non-blocking terminal input with `ncurses` or ANSI escape codes
- Event-driven programming and deterministic update loops
- Terminal visualization and ASCII rendering
- File I/O and CSV parsing
- Modular design, clean architecture, and maintainable code


---


## Future Enhancements
- Integrate live market data via WebSocket APIs
- Implement multi-ticker dashboards
- Add advanced technical indicators (RSI, MACD, VWAP)
- Color-coded charts for trend visualization
- Multi-threaded or lock-free design for high-frequency updates


---


## License
This project is released under the **MIT License**.
