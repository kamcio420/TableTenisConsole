#include <iostream>
#include <windows.h>
#include "map.h"
#include "player1.h"

using namespace std;

enum Kierunek
{
    lewo = -1,
    prawo = 1
};

class Paletka
{
public:

    void ZmienKierunek(int kierunek_lew, int kierunek_prawo)
    {
        if (GetAsyncKeyState(kierunek_lew))
        {
            kierunek = lewo;
        }
        else if (GetAsyncKeyState(kierunek_prawo))
        {
            kierunek = prawo;
        }
    }

    void Ruch()
    {
        if (Pozycja < 11 && Pozycja > -1)
        {
            Pozycja += (int)kierunek;
        }
    }

    void Wyswietl()
    {
        for (int i = 0; i < Pozycja; i++)
        {
            std::cout << " ";
        }

        std::cout << "-";
    }

    Kierunek kierunek = prawo;
    int Pozycja = 3;
};

class Paletka2
{
public:

    void ZmienKierunek2(int kierunek_lew, int kierunek_prawo)
    {
        if (GetAsyncKeyState(kierunek_lew))
        {
            kierunek = lewo;
        }
        else if (GetAsyncKeyState(kierunek_prawo))
        {
            kierunek = prawo;
        }
    }

    void Ruch2()
    {
        if (Pozycja < 11 && Pozycja > -1)
        {
            Pozycja += (int)kierunek;
        }
    }

    void Wyswietl2()
    {
        for (int i = 0; i < Pozycja; i++)
        {
            std::cout << " ";
        }

        std::cout << "-";
    }

    Kierunek kierunek = prawo;
    int Pozycja = 3;
};


int main()
{
    Paletka p1 = {};
    Paletka2 p2 = {};
    map m;

    while (true)
    {
        // czekaj 250 milisekund
        Sleep(250);
        system("cls");

        p1.ZmienKierunek('A', 'D');
        p1.Ruch();
        p1.Wyswietl();
        m.createMap();
        p2.ZmienKierunek2('VK_L', 'VK_R');
        p2.Ruch2();
        p2.Wyswietl2();
       

    }
}




