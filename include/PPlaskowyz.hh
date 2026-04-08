#pragma once

// #include "BrylaGeometryczna.hh"
#include "Przeszkody.hh"
#include "Dron.hh"
// #include "matrix3x3.hh"
// #include "../include/lacze_do_gnuplota.hh"
#include <stdlib.h>

using namespace std;
class PPlaskowyz : public BrylaGeometryczna
{
  
double ppromien;
double baza_promien;  // promień bazy w XY
public:
    PPlaskowyz(){};

    PPlaskowyz(Vector<3> pkt, double h, double w, double d, string nazwa_pliku, string nazwa_pliku_do_zapisu);
    
      Vector<3> wez_srodek();
      double wez_promien(){return ppromien;}
      double promien(){return baza_promien;}
};


std::ostream &operator<<(std::ostream &Strm, const PPlaskowyz &Pr);


