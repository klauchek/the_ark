//
// Created by Amisto on 4/2/2021.
//

#ifndef THE_ARK_SOCIALSERVICE_H
#define THE_ARK_SOCIALSERVICE_H

#include "Service.h"

class SocialService : public Service {
private:
public:
    SocialService();

    void process_accident(AccidentSeverity as) override;    // каждая служба должна уметь в своих терминах обработать переданную ей аварию
    void process_year() override {};                        // если у службы есть какая-то личная жизнь, она может заниматься ей тут
    double getState() override;                             // каждая служба должна уметь вернуть свое состояние в процентах, посчитав его в своих терминах
    void setState(double s) override;                       // функция для инициализации, каждая служба должна уметь получить состояние в процентах и пересчитать  его в своих терминах

    unsigned int borderChildrenToAdults();
};


#endif //THE_ARK_SOCIALSERVICE_H
