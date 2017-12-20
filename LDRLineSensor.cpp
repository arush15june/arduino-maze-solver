#include "Arduino.h"
#include "LDRLineSensor.h"

/*  
*   Constructor Parameters 
*   ( pins[rightMotorEnable, rightMotorDirF, rightMotorDirB,leftMotorEnable, leftMotorDirF, leftMotorDirB], rightDefaultSpeed, leftDefaultSpeed ) 
*   
*/    

LineSensor::LineSensor() {

}

LineSensor::LineSensor(int noOfSensors, int pins[], int ranges[][]) {
        n_sensors = noOfSensors;
        int middleSensor = pins[n_sensors/2]
        int middleSensorRange = { ranges[n_sensors/2][0], ranges[n_sensors/2][1] }

        // Add pins and ranges to right sensor array
        for(int i = 0;i < n_sensors1/2; i++) {
            leftSensors[i] = pins[i]
            leftSensorsRange[i] = { ranges[i][0], ranges[i][1] }
        }
        // Add pins and ranges to left sensor array
        for(int i = n_sensors/2+1, j = 0;i < n_sensors; i++, j++) {
            rightSensors[j] = pins[j];
            rightSensorsRange[j] = { ranges[i][0], ranges[i][1] }
        }

        // Enable all pins for Input
        for(int i = 0; i < n_sensors; i++) {
            pinMode(pins[i], INPUT);
        }

}

LineSensor::find() {
    // TODO

}
