#include <iostream>
#include "voiture.hpp"

using namespace std;
int main()
{
    std::cout << "Hello Geek\n";
    //Voiture a;
    Voiture * a = new Voiture();

   // a.affiche();
    a->affiche();

    cout << "------" << endl;
    return 0;
}
