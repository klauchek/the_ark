//
// Created by Amisto on 4/2/2021.
//

#include "Resources.h"
#include "TheArk.h"
#include "TechnicalService.h"

unsigned int Resources::getComponents() const {
    return components;
}

unsigned int Resources::getRefuse() const {
    return refuse;
}

unsigned int Resources::getConsumables() const {
    return consumables;
}

unsigned int Resources::getUsed() const {
    return used;
}

unsigned int Resources::getJunk() const {
    return junk;
}

Resources::Resources() : consumables(0), components(0), used(0), junk(0), refuse(0), componentsToUsed(0), usedToJunk(0)
{

}

void Resources::processYear() {

}

void Resources::setComponentsToUsed(unsigned int current_usage) {
    componentsToUsed = current_usage;
}

void Resources::setUsedToJunk(unsigned int current_broken) {
    usedToJunk = current_broken;
}

double Resources::efficiencyConsumablesToComponents() {
    return TheArk::get_instance()->getTechnicalService()->efficiencyConsumablesToComponents();
}

double Resources::efficiencyJunkToConsumables() {
    return TheArk::get_instance()->getTechnicalService()->efficiencyJunkToConsumables();
}

double Resources::efficiencyJunkToRefuse() {
    return TheArk::get_instance()->getTechnicalService()->efficiencyJunkToRefuse();
}

void Resources::init(unsigned int total) {
    consumables = 0.3 * total;
    components = 0.2 * total;
    used = total - consumables - components;
}
