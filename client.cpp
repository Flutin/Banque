#include <iostream>
#include <string>
#include "compte.hpp"

using namespace std;

#include "client.hpp"
//Constructeurs
Client::Client(){

    prenom = "test";
    nom = "test";
    numTEL = 0600000000;
    Cin = 111111111111;

}
Client::Client(string iprenom, string inom, int inulTEL, long icin){

    prenom = iprenom;
    nom = inom;
    numTEL = inulTEL;
    Cin = icin;
}

//Methodes

int Client::authentification(Compte lol){

  int i=0;
  int q;
  int c = lol.getCode();
  int verif=0;
  cout << "Ecrivez le code : ";

  while(i < 4){
  cin >> q;
  if (q == c) {
    verif = 1;
    return(0);
  }
  else {
    cout << "Erreur réessayez le code : " << endl;
    i++;
    }
  }
//Si on rate 3 fois on termine le programme
  if (verif == 0){
    exit(1);
  }

}
