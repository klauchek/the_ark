//
// Created by Amisto on 4/2/2021.
//

#include "Service.h"

Service::Service() : n_engineers(0), n_scientists(0), resources(0)
{

}

unsigned int Service::getNStaff() const {
    return n_engineers + n_scientists;
}

unsigned int Service::getNEngineers() const {
    return n_engineers;
}

unsigned int Service::getNScientists() const {
    return n_scientists;
}

Service::~Service() {

}

unsigned int Service::getResourceDemand() {
    return resources * 0.01 + 10;
}

unsigned int Service::getResourcePriority() {
    return 0;
}

unsigned int Service::getStaffDemand() {
    return (n_engineers + n_scientists) * 0.01 + 5;
}

unsigned int Service::getStaffPriority() {
    return 0;
}

bool Service::changeStaff(int delta) {
    int ds = delta * (n_scientists / (double)n_engineers);
    if (n_scientists < ds)
        ds = n_scientists;
    int de = delta - ds;
    if (n_engineers < de)
        return false;
    n_scientists -= ds;
    n_engineers -= de;
    return true;
}

bool Service::changeResources(int delta) {
    if (resources > delta) {
        resources -= delta;
        return true;
    }
    else {
        return false;
    }
}
