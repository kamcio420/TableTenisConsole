#include <iostream>
#include "map.h"

map::map()
{
}
void map::createMap()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            mapTab[j][i] = 219;
            if (!j % 3 == 0)
            {
                std::cout << mapTab[j][i];
            }
            else
            {
                std::cout << std::endl;
            }
        }
    }
    std::cout << std::endl;
}
