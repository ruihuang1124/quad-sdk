#!/bin/bash
echo "Sourcing legged_ws/devel/setup.bash"
source /home/ray/legged_ws/devel/setup.bash
echo "Setting ROS_MASTER_URI and ROS_IP to 192.168.8.101"
export ROS_MASTER_URI=http://192.168.8.101:11311
export ROS_IP=192.168.8.101