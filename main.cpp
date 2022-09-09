#include <iostream>

int main() {

char unit;
double temp;

  std::cout << "************ TEMPERATURE CONVERTER **********" << std::endl;
  std::cout << "F - Ferenite" << std::endl;
  std::cout << "C - Celsius" << std::endl;
  std::cout << "Enter your conversion unit : " ;
 std::cin >> unit;

  if(unit == 'F' || unit == 'f'){
    std::cout << "Enter the temperature to convert : " << std::endl;
    std::cin >> temp;

      temp = (1.8 * temp) + 32.0;
      std::cout << "The temperature is : " << temp << "C ";
  }
  else if(unit == 'C' || unit == 'c'){
    std::cout << "Enter the temperature to convert : ";
    std::cin >> temp;

      temp = (temp - 32) / 1.8;
    std::cout << "The temprature is : " << temp << "F " << std::endl;
  }
  else{
    std::cout << "Wrong unit";
  }

  std::cout << "************************";
  
}