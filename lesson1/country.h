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

    void setName(std::string l_Name) {m_Name = l_Name;}
    void setArea(int l_Area) {m_Area = l_Area; }
    void setPeople(int l_People) {m_People = l_People; }

    std::string getName() { return m_Name; }
    int getArea() { return m_Area; }
    int getPeople() { return m_People; }

    void PrintData();
};

#endif // COUNTRY_H
