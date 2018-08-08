#include <map>
#include <iostream>

using namespace std;


int main () {
    
    
    //declaramos nuestro map
    map <string, string> registro;
    
    
    //agregamos elementos a nuestro map
    
    registro["1111111-1"] = "Manuel Prato Soto";
    registro["4444444-4"] = "Mauricio Palma Santander";
    registro["5555555-5"] = "Marco Perez Silva";
    registro["2222222-2"] = "Matias Pizarro Sepulveda";
    registro["3333333-3"] = "Miguel Pereira Santalices";
    
    
    //imprimimos el nombre de la persona con rut 3333333-3
    cout << registro["3333333-3"] << endl;
    
    //mostramos el total de elementos en el map
    cout << "Total de elementos: " << registro.size() << endl;
    
    //borramos del map a la persona con rut 2222222-2    
    registro.erase("2222222-2");
    
    //mostramos el total de elementos en el map
    cout << "Total de elementos: " << registro.size() << endl;
    
    
    //mostramos todos los ruts registrados en el map
    cout << "____________________________" << endl;
    cout << "Mostrando todas los ruts" << endl;
    cout << "____________________________" << endl;
    
    //creamos el iterador
    map<string,string>::iterator it;
    
    for (it = registro.begin(); it != registro.end(); it++) {
        cout << "Mostrando el rut: " << (*it).first << endl;
    }
    
    
    //mostramos todos los nombres registrados en el map
    cout << "____________________________" << endl;
    cout << "Mostrando todas los nombres" << endl;
    cout << "____________________________" << endl;
    
    for (it = registro.begin(); it != registro.end(); it++) {
        cout << "Mostrando persona con nombre: " << (*it).second << endl;
    }
    
    
    //mostramos todos los nombres registrados en el map
    cout << "____________________________" << endl;
    cout << "Mostrando todas los nombres y su rut" << endl;
    cout << "____________________________" << endl;
 
    
    for (it = registro.begin(); it != registro.end(); it++) {
        cout << (*it).second << " tiene el rut: " << (*it).first << endl;
    }
    
    
    
    return 0;
}
