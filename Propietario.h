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
    Propiedad getPropiedad();
    void setPropiedad(propiedad);
};


#endif //EDIFICIO_PROPIETARIO_H
