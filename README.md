Interfacing DC Motor with 8051 Microcontroller
📌 Project Description

This project demonstrates how to interface a DC Motor with an 8051 Microcontroller and control its direction of rotation using two switches. The switches are connected to Port 2 pins (P2.0 and P2.1), which control the motor to rotate clockwise or anticlockwise through a motor driver IC (L293D).

🎯 Objective

To interface a DC motor with 8051 microcontroller.

To control the direction of motor rotation using switches.

To understand the use of digital input/output ports of 8051.

🛠️ Components Required

8051 Microcontroller (AT89C51 / AT89S52)

L293D Motor Driver IC

DC Motor

2 Push Button Switches

Resistors

Power Supply

Connecting Wires

Breadboard / PCB

⚙️ Working Principle

Two switches are connected to Port 2 pins P2.0 and P2.1 of the 8051 microcontroller.

The microcontroller continuously checks the state of these switches.

If Switch 1 (P2.0) is pressed, the motor rotates clockwise.

If Switch 2 (P2.1) is pressed, the motor rotates anticlockwise.

The motor direction is controlled through the L293D motor driver, which drives the DC motor.

🔌 Pin Configuration
Microcontroller Pin	Function
P2.0	Switch 1 (Clockwise Control)
P2.1	Switch 2 (Anticlockwise Control)
P1.0	Motor Driver Input 1
P1.1	Motor Driver Input 2
🔄 Algorithm

Start the program.

Configure Port 2 as input for switches.

Configure Port 1 as output for motor control.

Check the status of Switch 1 and Switch 2.

If Switch 1 is pressed, rotate motor clockwise.

If Switch 2 is pressed, rotate motor anticlockwise.

If no switch is pressed, stop the motor.

Repeat the process continuously.

💡 Applications

Robotic vehicles

Conveyor belt systems

Industrial automation

Direction control in motor-based systems

🚀 Future Scope

Speed control using PWM.

Remote control using Bluetooth or WiFi.

Integration with sensors for automatic control.
