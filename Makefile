CC := clang++
CXX_FLAGS := -std=c++11 -I.

ALL_FILES := test/AllTests.cpp

granite-tests: $(ALL_FILES)
	$(CC) $(CXX_FLAGS) $(ALL_FILES) -o $@

clean:
	rm -f granite-tests
