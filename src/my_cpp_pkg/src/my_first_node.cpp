#include "rclcpp/rclcpp.hpp"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<rclcpp::Node>("cpp_tests"); // cpp_tests is nodde name
    // here node is a pointer and node-> means (*node)
    RCLCPP_INFO(node->get_logger(), "Hello world");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}