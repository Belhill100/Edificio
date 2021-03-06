#include "Edificio.h"

void Edificio::recaudarAdministraci√≥n() {
    int total = 0;
    for (vector<Propietario*>::iterator propietario = propietarios.begin(); propietario != propietarios.end(); propietario++) {
        total += (propietario*)->getPropiedad().calcularAdministracion();
    }
}
