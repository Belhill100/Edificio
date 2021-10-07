#ifndef EDIFICIO_EDIFICIO_H
#define EDIFICIO_EDIFICIO_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Propietario.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::map;
using std::iterator;

class Edificio {
private:
    vector<Propietario*> propietarios;
    float valorBaseAdmin;
public:
    void recaudarAdministración();
};


#endif //EDIFICIO_EDIFICIO_H
