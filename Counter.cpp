#include "./Counter.h"
#include "Parking.h"
#include "sensor.h"
#include <iostream>

Counter::Counter(std::string n_counter) {
  this->n_counter = n_counter;
  this->theres_a_user = false;
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
    theres_a_user = false;
  } else {
    theres_a_user = true;
  }
  return theres_a_user;
}

void Counter::add_present_user(Parking p, User u) { p.add_present_user(u); }
void Counter::remove_present_user(Parking p, User u) {
  p.remove_present_user(u);
}
