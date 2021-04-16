//
// Created by Amisto on 4/2/2021.


//������ ������ ������ ����� � ����� �������� ������������ ��������� �������� �� ������� �� ��.
//��������, �� �������, ��� ������ ������� ������� ��������� � ��.�� ������ ����� � ����� �������� �������� ��������������� ����


//����� �� �� ����� �� ��������� ������? ��� ������ �� ��������� ��? � ��� ������ �� ��������� ������ �����, ����� ������?
//��� ����������� ��, ��� ������ ������ ����� �������� ������ ���� � �����?

// ����� ����� �������, ���� �����?  ������! �����������!

//��� ������ ���������� ������? ��� ����������? - �� ����������, ��� ���� 

//������ ����� ���� ���� - �� �� ������ �������� ������
//
//��, �� �� ����� ��������� ������ 
//
//������� 100, �������, ��������� �� ������ - ��� ���������� ��������� - �������� �������, ���������������� ���� ��� ��������� (������� ��) --- // �� ��� ��� ��������?
//
//
//���������� - ������ ������ - �����

//
//��� ����� 60 - ���� ������, ��� ��� �����

#include "EmergencyService.h"

EmergencyService::EmergencyService() : State(100)
{}


//��������� � ����������� ������? ��� ���� ��������� ������ - ��� ���� ����������� ������ (������������ ��� �����������)
//��� ���� ��������� �� - ��� ���� ������� ������

//�� 0 �� 1
double EmergencyService::accident_propability()
{
    double s = TheArk::get_instance()->getMedicalService()->getState() / 100;
    return 1 / pow(3, 3 * s);
    //����������������������� ��������� ����� ������
}

//�� 1 �� 100
unsigned int EmergencyService::damage_factor()
{
    if (this->getState() != 0)
        return 100 / (this->getState());
    else return 100;
    //��� ����� ��������� ��, ��� ������ ���� -> ������ �����
}


//��� �������� �����

void EmergencyService::create_accident()
{
    srand(time(0));
    int temp = (20 + rand() % 100);
    double k = temp * (1 - this->accident_propability());
    if (k > 20 && k < 100)
        this->determine_severity();
    else return;
}

//������� ����� ������ ����������/������ �� ������ � ���������� � �������; � ����� �������� ��� ������ �� 6
void EmergencyService::determine_severity()
{
    if (this->damage_factor() > 0 && this->damage_factor() < 11)
        TheArk::get_instance()->getMedicalService()->process_accident(NEGLIGIBLE);

    else if (this->damage_factor() > 10 && this->damage_factor() < 31)
        TheArk::get_instance()->getMedicalService()->process_accident(LIGHT);

    else if (this->damage_factor() > 30 && this->damage_factor() < 51)
        TheArk::get_instance()->getMedicalService()->process_accident(MEDIUM);

    else if (this->damage_factor() > 50 && this->damage_factor() < 71)
        TheArk::get_instance()->getMedicalService()->process_accident(SEVERE);

    else if (this->damage_factor() > 70 && this->damage_factor() < 91)
        TheArk::get_instance()->getMedicalService()->process_accident(DISASTROUS);

    else if (this->damage_factor() > 90 && this->damage_factor() < 101)
        TheArk::get_instance()->getMedicalService()->process_accident(CATASTROPHIC);
}


void EmergencyService:: process_year()
{

}

//��� ��������� ����������
void EmergencyService::process_accident(AccidentSeverity as)
{
    if (NEGLIGIBLE)
    {

    }

}

double EmergencyService::getState()
{
    return State;
}

void EmergencyService::setState(double s)
{
    State = s;
}

//unsigned int EmergencyService::getResourceDemand()
//{}
//unsigned int EmergencyService::getStaffDemand()
//{}

