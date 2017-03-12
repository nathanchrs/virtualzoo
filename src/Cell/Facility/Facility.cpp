#include "Facility.h"

Facility::Facility(bool _accessible, char _facilityType):Cell(_accessible) {
    facilityType = _facilityType;
}

Facility::~Facility() {

}