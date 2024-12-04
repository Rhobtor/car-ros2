cmake_minimum_required(VERSION 3.5)
project(car_cpp)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)

add_executable(test_node src/test_node.cpp)

target_link_libraries(test_node rclcpp)

install(TARGETS
  test_node
  DESTINATION lib/${PROJECT_NAME})

ament_package()
