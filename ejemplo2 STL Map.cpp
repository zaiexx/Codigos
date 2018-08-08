#include <map>
#include <iostream>

using namespace std;


int main () {
    
    
    //declaramos nuestro map
    map <char, int> frecuencia;
    string texto = "Este es un texto random que tendra muchas letras distintas, la idea es contar cuantas veces aparece cada letra";
    
    //recorremos el string para contar la frecuencia de cada palabra
    for (int i = 0; i < texto.length(); i++) {
        
        char letra = texto[i];
        
        //no agregamos al map la coma y el espacio
        if (letra != ',' && letra != ' ') {
            frecuencia[texto[i]]++;
        }    
    }
    
    
    //mostramos cada letra y su aparicion en el texto
    map <char, int>::iterator it;
    
    for (it = frecuencia.begin(); it != frecuencia.end(); it++) {
        cout << "La letra " << (*it).first << " aparece en el texto " << (*it).second << " veces!" << endl;        
    }
    
    
    
    return 0;
}
