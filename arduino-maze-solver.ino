/*
 * 
 *  Arduino Maze Solver 
 *    - arush15june 20/12/17
 *  https://github.com/arush15june/arduino-maze-solver
 */

#include "DifferentialDrive.h"
#include "LDRLineSensor.h"

// Enums and Structs
enum MODE {
    MAP, // Maze Mapping Mode
    SOLVE // Maze Solving Mode
};

// Pin Definitions

// This pin is the button which changes the modes between MAP and FIND
// If this is high during setup(), then mode is changed to FIND else it 
// is MAP by default

#define pin_find_mode

// DD Config
// DifferentialDrive( pins[rightMotorEnable, rightMotorDirF, rightMotorDirB,leftMotorEnable, leftMotorDirF, leftMotorDirB], rightDefaultSpeed, leftDefaultSpeed )

#define rightMotorEnable
#define rightMotorDirF 
#define rightMotorDirB

#define leftMotorEnable
#define leftMotorDirF
#define leftMotorDirB

#define rightDefaultSpeed
#define leftDefaultSpeed

// LDR Sensor Array
#define noOfSensors

#define sensorPin1
#define sensorPin1Min
#define sensorPin1Max

#define sensorPin2
#define sensorPin2Min
#define sensorPin2Max

#define sensorPin3
#define sensorPin3Min
#define sensorPin3Max

#define sensorPin4
#define sensorPin4Min
#define sensorPin4Max

#define sensorPin5
#define sensorPin5Min
#define sensorPin5Max
// define all the sensor pins: #define sensorsPin<sensorNo>


// Global Variables

int DD_pins[] = {rightMotorEnable, rightMotorDirF, rightMotorDirB,leftMotorEnable, leftMotorDirF, leftMotorDirB};
DifferentialDrive dd(DD_Pins, rightDefaultSpeed, leftDefaultSpeed); 

int LDR_Pins[] = {sensorPin1, sensorPin2, sensorPin3, sensorPin4, sensorPin5};
itn LDR_Ranges[][] = { 
    {sensorPin1Min, sensorPin1Max},
    {sensorPin2Min, sensorPin2Max},
    {sensorPin3Min, sensorPin3Max},
    {sensorPin4Min, sensorPin4Max},
    {sensorPin5Min, sensorPin5Max},
}
LDRLineSensor LDR(noOfSensors, LDR_Pins, LDR_Ranges);

void setup() {
  

}

void loop() {

}
