//
// Created by Amisto on 4/2/2021.
//

#ifndef THE_ARK_THEARK_H
#define THE_ARK_THEARK_H

#include <array>
#include <istream>
#include <ostream>

class Service;
class TechnicalService;
class BiologicalService;
class MedicalService;
class NavigationService;
class EmergencyService;
class SocialService;
class Population;
class Resources;

class Service;
class TheArk {
private:
    unsigned int years_total;
public:
    unsigned int getYearsTotal() const;

    void setYearsTotal(unsigned int yearsTotal);

    unsigned int getCurrentYear() const;

    void setCurrentYear(unsigned int currentYear);

private:
    unsigned int current_year;
    std::array<Service*, 6> services;
    Population* population;
public:
    Population *getPopulation() const;

    Resources *getResources() const;

private:
    Resources* resources;
    std::istream *is;
    std::ostream *os;

    void processYear();

    TheArk();
    static TheArk* instance;
public:
    static TheArk* get_instance();

    void init(std::istream *is, std::ostream *os);     // интерфейс - ввод
    void snap();                     // интерфейс - вывод, использует os

    TechnicalService* getTechnicalService();
    BiologicalService* getBiologicalService();
    MedicalService* getMedicalService();
    NavigationService* getNavigationService();
    EmergencyService* getEmergencyService();
    SocialService* getSocialService();

    void flight();

    static void deleteArk();
    ~TheArk();
};


#endif //THE_ARK_THEARK_H
