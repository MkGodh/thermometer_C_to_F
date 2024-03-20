

#include <iostream>

int main()
{
using namespace std;
setlocale(LC_ALL, "RUS");

int lowerBorder;
int upperBorder;
int step;

cout << "Ввод: \n" << "Нижняя граница: "; cin >> lowerBorder;
cout << "Верхняя граница: "; cin >> upperBorder;
cout << "Шаг: "; cin >> step;

cout << "Вывод: \n" << "C " << "   " << "F" << "\n";
while (lowerBorder <= upperBorder) {
    float zeroHero = 32; // 32 68
    if (lowerBorder == 0) {
        
        cout << lowerBorder << "   " << 32 << "\n";
    }
    lowerBorder += step; // 20 // 40
    zeroHero = ((float)lowerBorder * 1.8) + zeroHero;
    cout << lowerBorder << "   " << zeroHero << "\n";



}
}

