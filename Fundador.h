#ifndef EDIFICIO_FUNDADOR_H
#define EDIFICIO_FUNDADOR_H


#include "Propietario.h"

class Fundador : public Propietario{
private:
    float descuentoTienda;
    bool gratisSalonSocial;
public:
    virtual void mostrarBeneficios();
};


#endif //EDIFICIO_FUNDADOR_H
