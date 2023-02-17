#include "Place.h"

Place::Place(std::string n_place) {
  this->n_place = n_place;
  free = true;
}

bool Place::detect() { return free; }
