#include <Arduino.h>
#line 1 "/mnt/c/Users/eleni/Documents/GitHub/ros-docker-examples/hello-arduino/hello_world/hello_world.ino"
/*
 * rosserial Publisher Example
 * Prints "hello world!"
 */

#include <ros.h>
#include <std_msgs/String.h>

ros::NodeHandle  nh;

std_msgs::String str_msg;
ros::Publisher chatter("chatter", &str_msg);

char hello[13] = "hello world!";

#line 16 "/mnt/c/Users/eleni/Documents/GitHub/ros-docker-examples/hello-arduino/hello_world/hello_world.ino"
void setup();
#line 22 "/mnt/c/Users/eleni/Documents/GitHub/ros-docker-examples/hello-arduino/hello_world/hello_world.ino"
void loop();
#line 16 "/mnt/c/Users/eleni/Documents/GitHub/ros-docker-examples/hello-arduino/hello_world/hello_world.ino"
void setup()
{
  nh.initNode();
  nh.advertise(chatter);
}

void loop()
{
  str_msg.data = hello;
  chatter.publish( &str_msg );
  nh.spinOnce();
  delay(1000);
}

