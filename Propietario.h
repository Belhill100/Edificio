#ifndef EDIFICIO_PROPIETARIO_H
#define EDIFICIO_PROPIETARIO_H

#include "Propiedad.h"

class Propietario {
private:
    string nombre;
    string id;
    Propiedad propiedad;
public:
    virtual void mostrarBeneficios() = 0;
};


#endif //EDIFICIO_PROPIETARIO_H
