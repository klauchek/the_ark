//
// Created by Amisto on 4/2/2021.
//

#include "TechnicalService.h"

TechnicalService::TechnicalService()
{

}

void TechnicalService::process_accident(AccidentSeverity as)
{

}

double TechnicalService::getState() {
    return 100;
}

double TechnicalService::efficiencyConsumablesToComponents() {
    return 50;
}

double TechnicalService::efficiencyJunkToConsumables() {
    return 40;
}

double TechnicalService::efficiencyJunkToRefuse() {
    return 10;
}

void TechnicalService::setState(double s) {

}
