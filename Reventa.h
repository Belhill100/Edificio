#ifndef EDIFICIO_REVENTA_H
#define EDIFICIO_REVENTA_H

#include "Propietario.h"

class Reventa : public Propietario{
private:
    float descuentoGimnasio;
public:
    virtual void mostrarBeneficios();
};


#endif //EDIFICIO_REVENTA_H
