TARGET = app.out

CXX = g++

PREF_SRC = ./
PREF_OBJ = ./build/

SRC = $(wildcard $(PREF_SRC)*.cpp)
OBJ = $(patsubst $(PREF_SRC)%.cpp, $(PREF_OBJ)%.o, $(SRC))


$(TARGET): $(OBJ)
	$(CXX) -g $(OBJ) -o $(TARGET)

$(PREF_OBJ)%.o : $(PREF_SRC)%.cpp	
	$(CXX) -g -c $< -o $@

clean:
	rm $(TARGET) $(PREF_OBJ)*.o