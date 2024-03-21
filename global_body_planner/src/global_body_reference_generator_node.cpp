//
// Created by ray on 3/21/24.
//

#include <ros/ros.h>

#include "global_body_planner/global_body_reference_generator.h"

int main(int argc, char **argv) {
    ros::init(argc, argv, "global_body_reference_generator");
    ros::NodeHandle nh;

    GlobalBodyReferenceGenerator global_body_reference_generator(nh);
    global_body_reference_generator.spin();
    return 0;
}