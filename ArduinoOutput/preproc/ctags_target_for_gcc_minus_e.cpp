# 1 "/mnt/c/Users/eleni/Documents/GitHub/ros-docker-examples/hello-arduino/hello_world/hello_world.ino"
/*

 * rosserial Publisher Example

 * Prints "hello world!"

 */
# 6 "/mnt/c/Users/eleni/Documents/GitHub/ros-docker-examples/hello-arduino/hello_world/hello_world.ino"
# 7 "/mnt/c/Users/eleni/Documents/GitHub/ros-docker-examples/hello-arduino/hello_world/hello_world.ino" 2
# 8 "/mnt/c/Users/eleni/Documents/GitHub/ros-docker-examples/hello-arduino/hello_world/hello_world.ino" 2

ros::NodeHandle nh;

std_msgs::String str_msg;
ros::Publisher chatter("chatter", &str_msg);

char hello[13] = "hello world!";

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
