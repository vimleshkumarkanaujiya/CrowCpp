# CrowCpp
A fast and easy-to-use microframework for C++

## Crow Requirements

i. C++ compiler with at least C++11 support. <br>
ii. Asio development headers (1.10.9 or later), it is a part of Boost Library. <br>
iii. (optional) ZLib for HTTP Compression. <br>
iv. (optional) OpenSSL for HTTPS support. <br>
v. (optional) CMake for building tests, examples, and/or installing Crow. <br>
vi. (optional) Python3 to build tests and/or examples. 

### How to install Boost Library?

1. `wget "https://boostorg.jfrog.io/artifactory/main/release/1.82.0/source/boost_1_82_0.tar.gz"`

2. `tar xvfz boost_1_82_0.tar.gz`

3. `rm boost_1_82_0.tar.gz`


### How to install Crow C++ Framework?

1. Download the source file (<a href="https://github.com/CrowCpp/Crow/releases/">Github Release</a>)<br>

   `$ wget "https://github.com/CrowCpp/Crow/releases/download/v1.0%2B5/crow-v1.0+5.tar.gz"`

2. `$ mkdir crow && cd crow`

3. `$ tar xvfz ../crow-v1.0+5.tar.gz`

4. `$ rm crow-v1.0+5.tar.gz`

### CMakeLists.txt
```cmake
cmake_minimum_required(VERSION  3.15)

project(CrowPro)

set(INCLUDE_PATHS boost_1_82_0 crow/include)

add_executable(CrowPro main.cpp)

target_include_directories(CrowPro PUBLIC ${INCLUDE_PATHS})
```
