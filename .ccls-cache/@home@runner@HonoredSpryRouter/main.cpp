#include <iostream>
#include <math.h>
float answer = 0;

double FoundCos(float num)
{
  return std::cos(num);
}

//useless text

int main() 
{
  float number = 0;
  int action = 0;
  std::cout << "Привет, это калькулятор!\n";
  std::cout << "Введите число: ";
  std::cin >> number;
  while ((action != 1) || (action != 2) || (action != 3))
    {
      std::cout << "Что вы хотите сделать с числом? (1-найти косинус 2-найти синус 3-найти тангенс): ";
      std::cin >> action;
      if (action == 1)
      {
        //answer = cos(number);
        std::cout<<"Ответ: "<<FoundCos(number)<<std::endl;
        return 0;
      }

      if (action == 2)
      {
        answer = sin(number);
        std::cout<<"Ответ: "<<answer<<std::endl;
        return 0;
      }
      if (action == 3)
      {
        answer = tan(number);
        std::cout<<"Ответ: "<<answer<<std::endl;
        return 0;
      }
      else
      {
        std::cout<<"Артём, ты еблан? Число от 1 до 3 введи\n";
      }
    }
  return 0;
}