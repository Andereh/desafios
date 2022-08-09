target:
	@echo "Running..."
	@g++ -std=c++11 -Wall -O2 $(foo).cpp -o bin/$(foo) && ./bin/$(foo)
