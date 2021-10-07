#include "Edificio.h"

void Edificio::recaudarAdministración() {
    int total = 0;
    for (vector<Propietario*>::iterator propietario = propietarios.begin(); propietario != propietarios.end(); propietario++) {
        total += propietario.propiedad.calcularAdministracion();
    }
}
