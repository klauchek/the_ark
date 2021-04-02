//
// Created by Amisto on 4/2/2021.
//

#include "MedicalService.h"
#include "TheArk.h"
#include "Population.h"
#include "BiologicalService.h"
#include "SocialService.h"
#include <cmath>

MedicalService::MedicalService() {
    for (int i = 0; i < TheArk::get_instance()->getPopulation()->getOldmen(); i++)
        Old.push_back(10 + rand() % 70);
    for (int i = 0; i < TheArk::get_instance()->getPopulation()->getAdults(); i++)
        Adult.push_back(20 + rand() % 80);
    for (int i = 0; i < TheArk::get_instance()->getPopulation()->getChildren(); i++)
        Children.push_back(40 + rand() % 60);
}

void MedicalService::process_accident(AccidentSeverity as) {

}

void MedicalService::process_year() {
    Old.sort();
    Adult.sort();
    Children.sort();
    unsigned int NumbOld = TheArk::get_instance()->getPopulation()->getOldmen();
    unsigned int NumbAd = TheArk::get_instance()->getPopulation()->getAdults();
    unsigned int NumbCh = TheArk::get_instance()->getPopulation()->getChildren();

    for (; NumbOld != Old.size();) {
        if (NumbOld > Old.size()) Old.push_back(10 + rand() % 70);
        if (NumbOld < Old.size()) Old.pop_back();
    }
    for (; NumbAd != Adult.size();) {
        if (NumbAd > Adult.size()) Adult.push_back(30 + rand() % 70);
        if (NumbAd < Adult.size()) Adult.pop_back();
    }
    for (; NumbCh != Children.size();) {
        if (NumbCh > Children.size()) Children.push_back(40 + rand() % 60);
        if (NumbCh < Children.size()) Children.pop_back();
    }
    State =
}

unsigned int MedicalService::borderAdultsToOldmen() {
    return retirementAge;
}

double MedicalService::deathRateChildren() {
    return 0.0001;
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
