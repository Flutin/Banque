#include <iostream>
#include <string>
#include "client.hpp"
#include "compte.hpp"

using namespace std;

int main(){

Client a0;
Compte c0;
Compte c1(1111111111111111,4321,2000);
float vir;
a0.authentification(c0);

//c0.debiter();

//c0.crediter();
cout << "Client 1 a : " << c0.getSolde() << endl;
cout << "Client 2 a : " << c1.getSolde() << endl;
vir = c0.virement(c1);
c1.setSolde(vir);
cout << "Client 1 apres le virement : " << c0.getSolde() << endl;
cout << "Client 2 apres le virement : " << c1.getSolde() << endl;

//c0.consulterRIB();




}
