#ifndef _TRACE_H_
#define _TRACE_H_

#include "Radar.h"
#include "Leg.h"

// define the distance the dog considers "something's there"
#define THRESHOLD 100
// P control parameter
// L and LL must < 0, R and RR must > 0
#define LL        -0.2
#define L         -0.1
#define C         0
#define R         0.1
#define RR        0.2


class Trace {
    private:
        Trace();
        ~Trace();
        Radar radar;
        Leg leg;
        double baseVel;
        double deltaVel;
        void Move();
};

#endif
