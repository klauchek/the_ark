//
// Created by Amisto on 4/2/2021.
//

#ifndef THE_ARK_RESOURCES_H
#define THE_ARK_RESOURCES_H


class Resources {
private:
    unsigned int consumables, components, used, junk, refuse;
    unsigned int componentsToUsed, usedToJunk;      // выставляются TheArk, могут мменяться каждый год
    double efficiencyConsumablesToComponents();     // как быстро расходники перерабатываются в компоненты
    double efficiencyJunkToConsumables();           // как быстро хлам перерабатываются в расходники
    double efficiencyJunkToRefuse();                // как быстро хлам перерабатываются в отходы
public:
    Resources();

    unsigned int getConsumables() const;
    unsigned int getUsed() const;
    unsigned int getJunk() const;
    unsigned int getRefuse() const;
    unsigned int getComponents() const;

    void setComponentsToUsed(unsigned int current_usage);
    void setUsedToJunk(unsigned int current_broken);

    void init(unsigned int total);
    void processYear(); // итерация по всем категориям ресурсов - что перешло из категорию в категорию
public:
};


#endif //THE_ARK_RESOURCES_H
