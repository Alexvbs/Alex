#include "country.h"
#include "iostream"
Country::Country()
{

}

Country::~Country() {

}

Country::Country(std::string l_Name, int l_Area, int l_People) {
    m_Name = l_Name;
    m_Area = l_Area;
    m_People = l_People;
}

void Country::PrintData() {
    std::cout << "Name: " << m_Name << " Area: " << m_Area << " People: " << m_People << std::endl;
}
