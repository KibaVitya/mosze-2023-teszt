#include <iostream>

constexpr int N_ELEMENTS = 100;

int main() {
    int *arr = new int[N_ELEMENTS];

    for (int i = 0; i < N_ELEMENTS; i++) {
        arr[i] = i * 2;
    }

    std::cout << "Az 1-100 szamok duplazasa:" << std::endl;
    for (int i = 0; i < N_ELEMENTS; i++) {
        std::cout << "Ertek: " << arr[i] << std::endl;
    }

    int atlag = 0;
    for (int i = 0; i < N_ELEMENTS; i++) {
        atlag += arr[i];
    }
    atlag /= N_ELEMENTS;

    std::cout << "Atlag szamitasa: " << std::endl;
    std::cout << "Atlag: " << atlag << std::endl;

    delete[] arr;

    return 0;
}
