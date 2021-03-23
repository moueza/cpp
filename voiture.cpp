#include <iostream>

using namespace std;

class Voiture
{
public:
  int i;
  Voiture()
  {
  }
  Voiture(int n = 0) : i(n)
  {
    std::cout << "constr Voit -adresse" << this << endl;
  }

  ~Voiture()
  {
    cout << "destr Voit -adresse" << this << endl;
  }

  void Affiche()
  {
    cout << "i=" << i << endl;
  }
};
