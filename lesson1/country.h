#ifndef COUNTRY_H
#define COUNTRY_H

#include <string>

class Country
{
private:
    std::string m_Name;
    int m_Area;
    int m_People;

public:
    Country();
    Country(std::string l_Name, int l_Area, int l_People);
    ~Country();

    void setName(std::string l_Name);
    void setArea(int l_Area);
    void setPeople(int l_People);

    std::string getName();
    int getArea();
    int getPeople();

    void PrintData();
};

#endif // COUNTRY_H
