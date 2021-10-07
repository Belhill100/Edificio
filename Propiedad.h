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
    float area;
    bool parqueadero;
public:
    float calcularAdministración(ValorBaseAdmin);
};


#endif //EDIFICIO_PROPIEDAD_H
