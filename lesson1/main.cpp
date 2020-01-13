#include <iostream>
#include "country.h"

static const size_t MAX_COUNTRY = 3;

int main()
{
    Country m_country[MAX_COUNTRY];
    std::string l_Name;
    int l_Area;
    int l_People;

    float l_maxAreaPeople;
    size_t l_maxAreaPeopleIndex = 0;
    for(size_t i = 0; i < MAX_COUNTRY; i++) {
        std::cout << "Input name: ";
        std::cin >> l_Name;
        m_country[i].setName(l_Name);
        std::cout << "Input area: ";
        std::cin >> l_Area;
        m_country[i].setArea(l_Area);
        std::cout << "Input people: ";
        std::cin >> l_People;
        m_country[i].setPeople(l_People);
    }

    float l_AreaPeople[MAX_COUNTRY];

    for(size_t i = 0; i < MAX_COUNTRY; i++) {
        l_AreaPeople[i] = (float)m_country[i].getArea() / (float)m_country[i].getPeople();
    }

    l_maxAreaPeople = l_AreaPeople[0];

    for(size_t i = 0; i < MAX_COUNTRY; i++) {
        if(l_maxAreaPeople < l_AreaPeople[i]) {
            l_maxAreaPeople = l_AreaPeople[i];
            l_maxAreaPeopleIndex = i;
        }
    }

    m_country[l_maxAreaPeopleIndex].PrintData();
    std::cout << l_AreaPeople[l_maxAreaPeopleIndex] << std::endl;

    system("pause");
    return 0;
}
