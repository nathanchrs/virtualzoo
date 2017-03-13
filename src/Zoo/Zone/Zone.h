#ifndef VIRTUALZOO_ZONE_H
#define VIRTUALZOO_ZONE_H

#include <string>
#include "../../Array/Array.h"
#include "../Cell/Cell.h"
using namespace std;

class Zone {
public:

    Zone(const string &name) : name(name) {}

    virtual ~Zone() {};

    virtual void addCell(Cell *cell) { cells.pushBack(cell); };

    string getName() const {
        return name;
    }

    void setName(const string &name) {
        Zone::name = name;
    }

    int size() const { return cells.size(); }

    virtual Zone* clone() const {
        return new Zone(*this);
    };

private:
    string name;
    Array<Cell*> cells;
};


#endif //VIRTUALZOO_ZONE_H
