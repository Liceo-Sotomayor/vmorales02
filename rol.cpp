#include <iostream> 
#include <string>
using namespace std;
int main() {
  bool esMayor;  
  int a, b; 
  cout << "Ingresa un numero" << endl;
  cin >> a;
  cout << "Ingresa otro numero" << endl;
  cin >> b;
  esMayor = a > b;
  if (esMayor) {
    cout << "Es mayor" << endl;
  }
}