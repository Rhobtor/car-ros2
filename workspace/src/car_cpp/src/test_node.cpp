// my_cpp_package/src/my_cpp_node.cpp
#include "rclcpp/rclcpp.hpp"

class MyCppnode : public rclcpp::Node
{
public:
MyCppnode() : Node("test_node")
{
    RCLCPP_INFO(this->get_logger(),"Hello from cpp node");

}
};

int main(int argc,char **argv)
{
rclcpp::init(argc,argv);
rclcpp::spin(std::make_shared<MyCppnode>());
rclcpp::shutdown();
return 0;
}