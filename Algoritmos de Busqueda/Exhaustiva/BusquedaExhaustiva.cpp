#include <iostream>

using namespace std;

int main()
{
  double paso= 0.01;
  for(double i = -1000; i<1000; i = i + paso)
  {
    if(34 > ((3 * i) - 7) && 34 < ((3 * (i+paso)) - 7))
    {
      //Resultado = i;
      cout<<"La solucion es: "<<i;
    }
  }
  return 0;
}


