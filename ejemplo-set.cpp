#include <iostream>
#include <set>
#include <string>

using namespace std;

int main () {
  
  
  //Declaramos el conjunto
  set <string> conjuntoPalabras;
  
  
  //Agregamos palabras al conjunto
  conjuntoPalabras.insert("Hola");
  conjuntoPalabras.insert("Chao");
  conjuntoPalabras.insert("Adios");
  conjuntoPalabras.insert("Buenos Dias");
  
  //Mostramos el total de palabras en el conjunto
  cout << "El tamano del conjunto es: " << conjuntoPalabras.size() << endl;
  
  //Agregamos mas palabras al conjunto
  conjuntoPalabras.insert("Buenas Tardes");
  conjuntoPalabras.insert("Buenas Noches");
  conjuntoPalabras.insert("Hola");
  conjuntoPalabras.insert("Chao");

  //Mostramos el total de palabras en el conjunto
  cout << "El tamano del conjunto es: " << conjuntoPalabras.size() << endl;
   
  
  cout << "____________________________" << endl;
  cout << "Mostrando todas las palabras" << endl;
  cout << "____________________________" << endl;
  
  //creamos un iterador para recorrer el conjunto
  set <string>::iterator it;

  //recorremos el conjunto mostrando cada una de las palabras
  for (it = conjuntoPalabras.begin(); it != conjuntoPalabras.end(); it++) {
      cout << (*it) << endl;
  }
  
  
  //borramos palabras del conjunto
  conjuntoPalabras.erase("Chao");
  conjuntoPalabras.erase("Hola");
  
  cout << "____________________________" << endl;
  cout << "Mostrando todas las palabras" << endl;
  cout << "____________________________" << endl;
  
  //recorremos el conjunto mostrando cada una de las palabras
  for (it = conjuntoPalabras.begin(); it != conjuntoPalabras.end(); it++) {
      cout << (*it) << endl;
  }
  
  cout << "____________________________" << endl;
  
  string p = "Adios";
  
  //Buscamos una palabra dentro del conjunto
  int total = conjuntoPalabras.count(p);
  
  if (total == 1) {
      cout << p << " esta en el conjunto" << endl; 
  }else {
      cout << p << " no esta en el conjunto" << endl; 
  }  

return 0;
}
