# Self-Driving Car Note

[Book](https://www.packtpub.com/data/hands-on-vision-and-behavior-for-self-driving-cars?utm_source=github&utm_medium=repository&utm_campaign=9781786461629)

[Book](https://www.packtpub.com/in/data/hands-on-self-driving-cars-with-deep-learning?utm_source=github&utm_medium=repository&utm_campaign=9781838646301)

## Level of Autonomy

- Level 0: No Automation
    
    In Level 0 autonomy, both the steering and the speed of the car are controlled by the driver. Level 0 autonomy may include issuing a warning to the driver, but the vehicle itself may not take any action.

- Level 1: Driver Assistance

    In level 1 autonomy, the driver of the car takes care of controlling most of the features of the car. They look at all the surrounding environments, acceleration, braking, and steering. An example of level 1 is that if the vehicle gets too close to another vehicle, it will apply the brake automatically.

- Level 2: Partial Automation

    In level 2 autonomy, the vehicle will be partially automated. The vehicle can take over the steering or speed acceleration and will try to eliminate drivers from performing a few basic tasks. However, the driver is still required in the car for monitoring critical safety functions and environmental factors.

- Level 3: Conditional Automation

    With level 3 autonomy and higher, the vehicle itself performs all environmental monitoring (using sensors such as LIDARs). At this level, the vehicle can drive in autonomous mode in certain situations, but the driver should be ready to take over when the vehicle is in a situation that may exceed the vehicle's control limit.

- Level 4: High Automation

    Level 4 autonomy is just one level below full automation. In this level of autonomy, the vehicle can control the steering, brakes, and acceleration of the car. It can even monitor the vehicle itself, as well as pedestrians, and the highway as a whole. Here, the vehicle can drive in autonomous mode for the majority of the time; however, a human is still required to take over in uncontrollable situations, such as in crowded places such as cities and streets.

- Level 5: Full Automation

    In level 5 autonomy, the vehicle will be completely autonomous. Here, no human driver is required; the vehicle controls all the critical tasks such as steering, the brakes, and the pedals. It will monitor the environment and identify and react to all unique driving conditions such as traffic jams.

## Common computer vision tasks in self-driving cars

- <b>Lane detection: </b> This is useful for driving correctly, as the car needs to know which side of the road it is on. Lane detection also makes it easy to follow a curved road.

- <b>Road sign recognition:</b> The system must recognize road signs and be able to act accordingly.

- <b>Pedestrian detection:</b> The system must detect pedestrians as it drives through a scene. Whether an object is a pedestrian or not, the system needs to know so that it can put more emphasis on not hitting pedestrians. It needs to drive more carefully around pedestrians than other objects that are less important, such as litter.

- <b>Traffic light detection:</b> The vehicle needs to detect and recognize traffic lights so that, just like human drivers, it can comply with road rules.

- <b>Car detection:</b> The presence of other cars in the environment must also be detected.

- <b>Face recognition:</b> There is a need for an SDC to identify and recognize the driver's face, other people inside the car, and perhaps even those who are outside it. If the vehicle is connected to a specific network, it can match those faces against a database to recognize car thieves.

- <b>Obstacle detection:</b> Obstacles can be detected using other means, such as ultrasound, but the car also needs to use its camera systems to identify any obstacles.

- <b>Vehicle action recognition:</b> The vehicle should know how to interact with other drivers since autonomous cars will drive alongside non-autonomous cars for many years to come.



