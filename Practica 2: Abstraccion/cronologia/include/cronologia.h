#ifndef _CRONOLOGIA_
#define _CRONOLOGIA_

#include "fechahistorica.h"
#include "vectordinamico.h"

class Cronologia{

 private:

  VectorDinamico<FechaHistorica> fechas;
  
 public:

  Cronologia();

  Cronologia(const Cronologia &original);

  Cronologia& operator=(const Cronologia &original);

  int used() const;

  void add(const FechaHistorica &fecha);

  FechaHistorica& operator[](int i);
  
  const FechaHistorica& operator[](int i) const;
  
  Cronologia& operator+=(const Cronologia &crono);
};

  ostream& operator<<(ostream &flujo, const Cronologia &crono);

  istream& operator>>(istream &flujo, Cronologia &crono);


#endif