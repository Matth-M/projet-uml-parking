#include "./Counter.h"
#include "Parking.h"
#include "sensor.h"
#include <iostream>

Counter::Counter(std::string n_counter) {
  this->n_counter = n_counter;
  this->theres_a_car = false;
}
void Counter::lower_barrier() {}

void Counter::raise_barrier() {}

void Counter::read_plate() {}

void Counter::read_badge() {}

void Counter::print_accepted() { std::cout << "BIENVENUE!" << std::endl; }

void Counter::print_rejected() {
  std::cout << "VOUS N'ETES PAS AUTORISE(E) A RENTRER :(" << std::endl;
}
bool Counter::detect() {
  if (sensorDetectsACar()) {
    theres_a_car = false;
  } else {
    theres_a_car = true;
  }
  return theres_a_car;
}
void Counter::add_present_user(Parking p, User u) {}
void Counter::remove_present_car(Parking p, User u) {}
