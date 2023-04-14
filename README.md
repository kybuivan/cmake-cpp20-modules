# Cmake C++20 Modules
[![Build Status](https://github.com/kybuivan/cmake-cpp20-modules/actions/workflows/windows.yml/badge.svg)](https://github.com/kybuivan/cmake-cpp20-modules/actions)

## Getting started
Prerequisites
To build and run Cmake C++20 Modules, you will need the following:

- C++20 or later
- CMake 3.26 or newer
- Visual Studio 2022 17.4 (19.34) or newer

## Building
To build Cmake C++20 Modules:

1. Clone the repository:
```bash
git clone https://github.com/kybuivan/cmake-cpp20-modules.git
```
2. Initialize the cmake submodule recursively:
```bash
cd cmake-cpp20-modules
git submodule update --init --recursive
```
3. Create a build directory:
```bash
mkdir build
cd build
```
4. Run CMake:
```bash
cmake -Wno-dev ..
```
5. Build the project:
```bash
cmake --build .
```

## Running
To run Cmake C++20 Modules, simply execute the cmake_cpp20_modules executable that was built in the previous step.

## License
This project is licensed under the Apache-2.0 license - see the [LICENSE](https://github.com/kybuivan/cmake-cpp20-modules/blob/main/LICENSE) file for details.