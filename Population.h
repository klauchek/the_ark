//
// Created by Amisto on 4/2/2021.
//

#ifndef THE_ARK_POPULATION_H
#define THE_ARK_POPULATION_H


class Population {
private:
    unsigned int children, adults, oldmen;

    unsigned int borderChildrenToAdults();
    unsigned int borderAdultsToOldmen();
    double deathRateChildren();
    double deathRateAdults();
    double deathRateOldmen();
public:
    Population();

    unsigned int getChildren() const;
    unsigned int getAdults() const;
    unsigned int getOldmen() const;
    unsigned int getTotal() const;

    void init(unsigned int total);
    void processYear(); // итерация по всем категориям населения - кто перешел из категорию в категорию, обработка смертности
};


#endif //THE_ARK_POPULATION_H
