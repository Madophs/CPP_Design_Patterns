set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

file(GLOB BuilderSRC "*.h" "*.cpp")
add_executable(builder ${BuilderSRC})

