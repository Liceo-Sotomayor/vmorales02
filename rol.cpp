#include <iostream> 
#include <cmath>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
  srand (time(NULL));
  bool esMayor, esIgual;
  int a, b; 
  a = rand()%4;
  b = rand()%4;
  esMayor = a > b;
  esIgual = a == b;
  
  if (esIgual) {
    cout << a << " Es igual a " << b << endl;
  } else {
    if (esMayor) {
      cout << a << " Es mayor " << b << endl;
    } else {
      cout << a << " Es menor " << b << endl;
    }
  }
}