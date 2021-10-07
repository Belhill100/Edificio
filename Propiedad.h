#ifndef EDIFICIO_PROPIEDAD_H
#define EDIFICIO_PROPIEDAD_H

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Propiedad {
private:
    int piso, numero;
    float area, valorBaseAdmin = 10;
    bool parqueadero;
public:
    float calcularAdministración(int valorBaseAdmin);
};


#endif //EDIFICIO_PROPIEDAD_H
