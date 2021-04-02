//
// Created by Amisto on 4/2/2021.
//

#include "MedicalService.h"

MedicalService::MedicalService()
{

}

void MedicalService::process_accident(AccidentSeverity as)
{

}

unsigned int MedicalService::borderAdultsToOldmen() {
    return 65;
}

double MedicalService::deathRateChildren() {
    return 0.00001;
}

double MedicalService::deathRateAdult() {
    return 0.001;
}

double MedicalService::deathRateOldmen() {
    return 0.01;
}

double MedicalService::getState() {
    return 100;
}

void MedicalService::setState(double s) {

}
