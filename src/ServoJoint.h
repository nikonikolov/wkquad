#ifndef SERVOJOINT_H
#define SERVOJOINT_H

#include "DNXServo.h"

class ServoJoint{

public:

	ServoJoint();
	ServoJoint(int ID_in, DNXServo* SerialObjPtrIn);

	int GetID() const;

    int SetID(int newID);
	int GetValue(int address);
    int SetBaud(int rate);
    int SetReturnLevel(int lvl);
    int SetLED(int colour); 
	int SetGoalPosition(int angle);
	int SetGoalPosition(double angle);
	int SetGoalVelocity(int velocity);
	int SetGoalTorque(int torque);
	int SetPunch(int punch);

	void operator=(const ServoJoint& obj_in);

private:

	int ID;
	DNXServo* SerialObjPtr;		// Pointer to the object (Knees/Hips/Arms/Wings) associated with the right serial port
};


#endif// SERVOJOINT_H