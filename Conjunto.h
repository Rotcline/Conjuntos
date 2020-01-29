#ifndef Conjunto.h
#define Conjunto.h

class Seth {
private:
unordered_map<int,int> set;

public:
  Conjunto operator + (Conjunto const &obj);   /* U Sumar 2 conjuntos*/
  Conjunto operator += (int num);              /* U Sumar 2 conjuntos*/
  Conjunto operator - (Conjunto const &obj);   /* - Restar 2 conjuntos*/
  Conjunto operator / (Conjunto const &obj);   /* ∩ Interseccion de 2 conjuntos*/
  Conjunto operator == (Conjunto const &obj);  /* Comparar de 2 conjuntos*/
  Conjunto operator % (Conjunto const &obj);   /*  Δ Diferencia simetrica de 2 conjuntos*/
  void addNumber2Seth(int number);         /*  Agregar dato al conjunto*/
  void substractNumber2Seth(int number);   /*  Descartar dato del conjunto*/

}
#endif
