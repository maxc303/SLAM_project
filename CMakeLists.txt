cmake_minimum_required( VERSION 2.8 )
project( myslam )

include_directories(${CMAKE_SOURCE_DIR}/include) 
link_directories(${CMAKE_SOURCE_DIR}/lib)

add_library (CAMERA SHARED src/camera.cpp)

add_executable(test_myslam test/test.cpp )
target_link_libraries(test_myslam CAMERA)
