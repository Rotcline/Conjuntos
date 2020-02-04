#ifndef CONJUNTO_H
#define CONJUNTO_H
#include <unordered_map>
class Seth {
private:
unordered_map set;

public:
  Seth operator + (Seth const &obj);   /* U Sumar 2 conjuntos*/
  Seth operator += (int num);              /* U Sumar 2 conjuntos*/
  Seth operator - (Seth const &obj);   /* - Restar 2 conjuntos*/
  Seth operator / (Seth const &obj);   /* ∩ Interseccion de 2 conjuntos*/
  Seth operator == (Seth const &obj);  /* Comparar de 2 conjuntos*/
  Seth operator % (Seth const &obj);   /*  Δ Diferencia simetrica de 2 conjuntos*/
  void addNumber2Seth(int number);         /*  Agregar dato al conjunto*/
  void substractNumber2Seth(int number);   /*  Descartar dato del conjunto*/

};
#endif
