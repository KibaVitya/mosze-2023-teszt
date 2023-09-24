#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // NELEMENTS helyett N_ELEMENTS-szet kell használni
    std::cout << '1-100 ertekek duplazasa' // Pontosvessző, nem jó idézőjelek.
    for (int i = 0;) // Ez nem for ciklus, nem növel semmit, nem történik semmi.
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // A ciklus feltétel, ciklusváltozó növelése hibás
    {
        std::cout << "Ertek:" //Pontosvessző, nem ír ki semmit csak, hogy "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) // Pontosvessző kell vessző helyett
    {
        atlag += b[i] //Végére pontosvessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}