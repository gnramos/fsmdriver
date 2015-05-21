FSMDriver
=========

A driver implementation using a Finite State Machine implementation to control its actions.


Finite State Machine
--------------------

A finite state machine can be described as device (or model of a device) that has a finite number of states it can be in at any given time, though it can only be in one state at any moment, and can operate on input to either make transitions from one state to another or to cause an output or action to take place.

States
------

The implemented states are:

### ApproachingCurve ###

Considering a section of track just before a curve this state prepare the car to enter properly at curve to maximaxe the perform at curve state. It is a state used at 5 states controller.

### Curve ###

Treat curve tracks, this state is important at a race since at curve it is possible to surpass the oponents. It is a state used at 5 states controller.

### InsideTrack ###

Given that driver is inside a distance from the center of the track, it perform the curve, straightline and approaching curve from the 5 states controller.It is a state used at 3 states controller.

### OutOfTrack ###

Given that driver is outside a distance from the center of the track, that state itself mean that the car 

### StraightLine ###

State to tracks not obliquous, the controler can drive at maximum speed. It is a state used at 5 states controller.

### Stuck ###

State used when the car speed is too low, actuators such as steer, accel, gear much be set at values to take it out of this condition.

Transitions
-----------

Transitions between states are defined according to the sensor readings and the FSM's model.


FSMDriver5
----------

This implements a FSM with 5 states: ApproachingCurve, Curve, OutOfTrack, StraightLine, and Stuck.

FSMDriver3
----------

This implements a FSM with 3 states: InsideTrack, OutOfTrack, and Stuck.