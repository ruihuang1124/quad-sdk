## Overview

ArcLab-Quad-SDK is an open source, ROS-based full stack software framework for
agile quadrupedal locomotion originally fork from [Quad-SDK](https://github.com/robomechanics/quad-sdk).
Readers can refer to the original [readme](README_QUAD_SDK.md) of quad-sdk to obtain basic information about this software.
Thanks to quad-sdk, we can easily verify our own quadruped robotic algorithm in both simulations and real robot platform.

### License

The source code is released under the same licence of Quad-SDK.

**Authors: [Rui Huang](https://arclab.hku.hk/Huang%20Rui.html)<br />
Affiliation: [The ArcLab at The University of Hong Kong](https://arclab.hku.hk/)<br />
Maintainer: Rui Huang, ruihuang.scut@gmail.com**

The packages in ArcLab-Quad-SDK have been tested under [ROS] Noetic on Ubuntu 20.04.
This is research code, expect that it changes often and any fitness for a particular purpose is disclaimed.

### Publications

TODO


## Installation

Refer to the [Wiki](https://github.com/robomechanics/quad-sdk/wiki/1.-Getting-Started-with-Quad-SDK) for installation,
dependency, and unit testing information.

## Usage

Launch the simulation with:

```
roslaunch quad_utils quad_gazebo.launch
```

Stand the robot with:
```
rostopic pub /robot_1/control/mode std_msgs/UInt8 "data: 1"
```
Run the stack with twist input:
```
roslaunch quad_utils quad_plan.launch reference:=twist logging:=true
rosrun teleop_twist_keyboard teleop_twist_keyboard.py cmd_vel:=/robot_1/cmd_vel
```
Run the stack with global planner:
```
roslaunch quad_utils quad_plan.launch reference:=gbpl logging:=true
```
Refer to the [Wiki](https://github.com/robomechanics/quad-sdk/wiki/2.-Using-the-Software) for more information on alternate usage.

## Bugs & Feature Requests

