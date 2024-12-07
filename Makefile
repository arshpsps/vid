MAIN: ./src/main.cpp | builds
	@ g++ -o builds/output ./src/main.cpp
	@ ./builds/output

builds:
	@ mkdir -p $@
