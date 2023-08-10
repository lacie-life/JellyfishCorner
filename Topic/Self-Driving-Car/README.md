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

## Chanllegens in computer vision tasks

- <b>Viewpoint variation:</b> The same object can appear differently when viewed from different angles. For example, a car can appear differently when viewed from the front, back, or side.

- <b>Illumination conditions:</b> The same object can appear differently when viewed under different lighting conditions. For example, a car can appear differently when viewed in the day or at night.

- <b>Scale variation:</b> The same object can appear differently when viewed at different scales. For example, a car can appear differently when viewed from a distance or close up.

- <b>Deformation:</b> The same object can appear differently when viewed under different deformations. For example, a car can appear differently when viewed from the front or side.

- <b>Occlusion:</b> The same object can appear differently when viewed under different occlusions. For example, a car can appear differently when viewed from the front or side.

- <b>Object variation:</b> Object variation is all about the differences in the structure of the object. For example, we can classify all the objects in the following photos as chairs, but for a machine learning algorithm, it will be difficult to classify all the different possible labels for the various types of chair.

## Artificial eyes versus human eyes

|Self-Driving Car Requirement|Human Eye|
|---|---|
|It requires 360-degree coverage around the vehicle.|It has 3D vision for 130 degrees of the field of view, resulting in a blind spot. Humans can turn their heads and bodies to mitigate this.|
|It must identify 3D object that are close to and far from the vehicle|The human eye's high resolution extends only to the central 50 degrees in the field of. Outside the central zone, perception drops.|
|It mush process real-time data|It the human eye, the frame is good in the central zone and poor in the peripheries.|
|It should be able to work well in all lighting and weather conditions.|Human eyes perform well in various lighting conditions, but to see in the dark, human eyes depend on headlights in cars.|

## Sensors

- <b>Camera:</b> Cameras are the most important sensors in self-driving cars. They are used to capture images of the environment around the vehicle. Cameras are used for lane detection, traffic sign detection, pedestrian detection, and so on. Cameras are also used for object detection and classification.

- <b>LiDAR:</b> LiDAR is a sensor that uses laser light to measure the distance between the sensor and the object. LiDAR is used to create a 3D map of the environment around the vehicle. LiDAR is used for object detection and classification.

- <b>Ultrasonic sensors:</b> Ultrasonic sensors are used to measure the distance between the sensor and the object. Ultrasonic sensors are used for parking assistance and obstacle detection.

- <b>GPS:</b> GPS is used to determine the location of the vehicle. GPS is used for navigation.

- <b>Radar:</b> This sends radio waves to detect objects. It is cheaper than lidar.









