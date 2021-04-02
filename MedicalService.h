//
// Created by Amisto on 4/2/2021.
//

#ifndef THE_ARK_MEDICALSERVICE_H
#define THE_ARK_MEDICALSERVICE_H

#include "Service.h"
#include <list>
using std::list;

class MedicalService : public Service {
private:
    list<unsigned int> Children;
    list<unsigned int> Adult;
    list<unsigned int> Old;
    double State;
    unsigned int retirementAge;
    double ChildrenDeath;
    double AdultDeath;
    double OldDeath;
public:
    MedicalService();

    void process_accident(AccidentSeverity as) override;    // каждая служба должна уметь в своих терминах обработать переданную ей аварию
    void process_year() override;                        // если у службы есть какая-то личная жизнь, она может заниматься ей тут
    double getState() override;                             // каждая служба должна уметь вернуть свое состояние в процентах, посчитав его в своих терминах
    void setState(double s) override;                       // функция для инициализации, каждая служба должна уметь получить состояние в процентах и пересчитать  его в своих терминах

    unsigned int borderAdultsToOldmen();    // возраст старения
    double deathRateChildren();             // средняя вероятность, что один ребенок подгибнет в течение года
    double deathRateAdult();                // средняя вероятность, что один взрослый подгибнет в течение года
    double deathRateOldmen();               // средняя вероятность, что один старик подгибнет в течение года

};


#endif //THE_ARK_MEDICALSERVICE_H
