#include <iostream>

float Convert(float);

int main(){
    float TempFer;
    float TempCel;

    std::cout << "Please enter the temperature in Fahrenheit: ";
    std::cin >> TempFer;
    TempCel = Convert(TempFer);
    std::cout << "Here's the temperature in Celsius: " << TempCel << std::endl;

    return 0;
}

float Convert(float TempFer){
    float TempCel;
    TempCel = ((TempFer - 32) * 5) / 9;
    return TempCel;
}