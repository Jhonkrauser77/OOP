#include <iostream>
#include <string>
using namespace std;

class Persona {
public :
      string nombre; 
      int edad;
       
      void saludar(){
        cout <<"hola, soy " << nombre << " y tengo " << edad << "años.n";
    }
};

int main () {
   Persona p1;
   p1.nombre = "D cage ";
   p1.edad= 20;
   p1.saludar();
  
   Persona p2;
   p2.nombre = "raton perez";
   p2.edad= 20000000;
   p2.saludar();

Persona p3;
   p3.nombre = "jojo";
   p3.edad= 19;
   p3.saludar();

return 0;
}
