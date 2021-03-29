#include <iostream>
#include <iomanip>

int main(){

double raio, area;
std::cin>> raio;

area = 3.14159 * (raio * raio);

std::cout << "A=" << std::fixed << std::setprecision(4) << area << std::endl;

return 0;

}