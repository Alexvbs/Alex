#include "country.h"
#include "iostream"
Country::Country()
{

}

Country::~Country() {

}

void Country::setName(std::string l_Name)
{
    m_Name = l_Name;
}

void Country::setArea(int l_Area)
{
    m_Area = l_Area;
}

void Country::setPeople(int l_People)
{
    m_People = l_People;
}

std::string Country::getName()
{
    return m_Name;
}

int Country::getArea()
{
    return m_Area;
}

int Country::getPeople()
{
    return m_People;
}

Country::Country(std::string l_Name, int l_Area, int l_People) {
    m_Name = l_Name;
    m_Area = l_Area;
    m_People = l_People;
}

void Country::PrintData() {
    std::cout << "Name: " << m_Name << " Area: " << m_Area << " People: " << m_People << std::endl;
}
