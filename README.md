## README for Task 1: Custom ROS2 Message Communication

### Directory Structure
```
GahanAI_task1/
└── src/
    ├── training_interfaces/        # Defines custom Person.msg
    │   └── msg/
    │       └── Person.msg
    └── training/                   # ROS 2 Python nodes
        └── training/
            ├── publisher.py       # Publishes Person message every 1 second
            └── subscriber.py      # Subscribes and prints Person data
```

### How to Run the program
1. **Source your ROS 2 workspace**:

```bash
source ~/GahanAI_task1/install/setup.bash
```

2. **Run the publisher node**:

```bash
ros2 run training publisher
```

3. Open a **new terminal tab** and source again:

```bash
source ~/GahanAI_task1/install/setup.bash
```

4. **Run the subscriber node**:

```bash
ros2 run training subscriber
```


The outcome should be something like:
```
[INFO] Publishing: Vishrut, 19
[INFO] Received: Name=Vishrut, Age=19
```

* We can try using `ros2 topic echo /person_topic` to confirm message flow

