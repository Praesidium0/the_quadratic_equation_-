TARGET = app.out
CXX = g++
DR_OBJ = build
PREF_SRC = ./
PREF_OBJ = ./build/

SRC = $(wildcard $(PREF_SRC)*.cpp)
OBJ = $(patsubst $(PREF_SRC)%.cpp, $(PREF_OBJ)%.o, $(SRC))

$(TARGET): $(OBJ) | $(DR_OBJ)
	$(CXX) -g $(OBJ) -o $(TARGET)

$(PREF_OBJ)%.o: $(PREF_SRC)%.cpp | $(DR_OBJ)
	$(CXX) -g -c $< -o $@

$(DR_OBJ):
	mkdir -p $(DR_OBJ)

.PHONY: clean
clean:
	rm -f $(TARGET) $(PREF_OBJ)*.o
