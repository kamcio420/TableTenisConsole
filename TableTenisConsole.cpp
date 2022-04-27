#include <iostream>
#include <windows.h>

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

int main()
{
    Paletka p = {};

    while (true)
    {
        // czekaj 250 milisekund
        Sleep(250);
        system("cls");

        p.ZmienKierunek('A', 'D');
        p.Ruch();
        p.Wyswietl();
    }
}




