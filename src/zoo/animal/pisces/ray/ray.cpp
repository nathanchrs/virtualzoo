//Author : Alvin

#include "ray.h"

Ray::Ray(const Point &pos, int weight, bool wild) : Pisces("Ray"),
                                                    Carnivore(weight, 0.25) {
  description = "Ray is an animal lives on the sea floor. It is distinguished"
      " by their flattened bodies and enlarged pectoral fins that are fused"
      " to the head. This ovipar animal has water as its habitat.";
  air_animal = false;
  land_animal = false;
  water_animal = true;
  position = pos;
  this->wild = wild;
}

string Ray::Interact() const {
  return "The ray is swimming as floating through the water";
}
