CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
SRC = src/main.cpp src/capteur.cpp
BIN = sensor_monitor

$(BIN): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(BIN) $(SRC)

clean:
	rm -f $(BIN)