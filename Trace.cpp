#include "Trace.h"

Trace::Trace() {
    radar.init(THRESHOLD);
}

Trace::~Trace() {

}

Trace::Move() {
    radar.radarRotation();
    baseVel = radar.getDis()/THRESHOLD;
    int dir = radar.getDir();
    deltaVel = ((dir&16) >> 4 )* LL + ((dir&8) >> 3) * L + ((dir&4) >> 2) * C + ((dir&2) >> 1) * R + (dir&1) * RR;
    leg.write(baseVel + deltaVel, baseVel - deltaVel);
}