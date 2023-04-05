set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

file(GLOB FilterSRC "*.h" "*.cpp")
add_executable(filter ${FilterSRC})
