#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

double d(double arc) {
    return arc / 180.0 * acos(-1);
}

int main(){

    Eigen::Vector3f p(2, 1, 1);
    std::cout << "point p is \r\n" << p << std::endl;
    Eigen::Matrix3f rotate45deg;
    rotate45deg << cos(d(45)), -sin(d(45)), 0,
                   sin(d(45)),  cos(d(45)), 0,
                   0,           0,          1;
    p = rotate45deg * p;
    std::cout << "after rotate 45 degree" << std::endl;
    std::cout << p << std::endl;
    Eigen::Matrix3f trans;
    trans << 1, 0, 1,
             0, 1, 2,
             0, 0, 1;
    p = trans * p;
    std::cout << "after trans (1, 2)" << std::endl;
    std::cout << p << std::endl;
}