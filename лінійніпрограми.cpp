// Lab_02.cpp
// < Алієв Святослав >
// Лабораторна робота № 2
// Лінійні програми.
// Варіант 0.3
#include <iostream>
#include <cmath>


using namespace std;
int main()
{
    double x; 
    double z1;
    double z2;
std::cout << "x = ";
std::cin >> x;
z1 = ((cos(x)) + sin(x)) / (cos(x) - sin(x));
z2 = (tg(2 * x) + sec(2 * x));
cout << endl;
cout << "z1 = " << z1 << endl;
cout << "z2 = " << z2 << endl;
cin.get();
return 0;

}
