# Compiler and compiler flags
CXX = clang++
CXXFLAGS = -std=c++11

# Target binary name
OUT = my_program

all: build_and_run

build_and_run: $(f)
	@echo "Compiling and running $(f)...\n\n"
	$(CXX) $(CXXFLAGS) -o $(OUT) $(f)
	./$(OUT)
	@echo "\n\n...END Cleaning up..."
	rm -f $(OUT)

clean:
	rm -f $(OUT)

