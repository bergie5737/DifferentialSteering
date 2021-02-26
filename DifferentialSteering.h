#ifndef DifferentialSteering_h
#define DifferentialSteering_h

//#define COMPUTERANGE 127
#define COMPUTERANGE 500        //the full range for servo's and ESC's are from 1000 to 2000. Thus half of the range of 1000 is 500

#include "Arduino.h"

class DifferentialSteering
{
    private:
        int m_fPivYLimit;
        int m_leftMotor;
        int m_rightMotor;

    public:
        DifferentialSteering();
        void begin(int fPivYLimit);
        void computeMotors(int XValue, int YValue);
        int computedLeftMotor();
        int computedRightMotor();
        int getComputeRange();
        String toString();
};
#endif
