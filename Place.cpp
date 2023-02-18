#include "Place.h"
#include "./sensor.h"

Place::Place(std::string n_place) {
  this->n_place = n_place;
  free = true;
}

bool Place::detect() {
  if (sensorDetectsACar()) {
    free = false;
  } else {
    free = true;
  }
  return free;
}
