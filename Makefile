CC := clang++
CXX_FLAGS := -std=c++11 -I.

SRCS := test/AllTests.cpp test/TestUtils.cpp test/SolverTests.cpp test/ContextTests.cpp src/Context.cpp
HEADERS := src/Allocator.h src/Var.h src/Context.h test/TestUtils.h test/SolverTests.h test/ContextTests.h

granite-tests: $(SRCS) $(HEADERS)
	$(CC) $(CXX_FLAGS) $(SRCS) -o $@

clean:
	rm -f granite-tests
