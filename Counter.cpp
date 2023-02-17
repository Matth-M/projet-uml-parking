#include "Counter.h"
Counter::Counter(std::string n_counter) {
  this->n_counter = n_counter;
  this->theres_a_car = false;
}
void Counter::lower_barrier() {}

void Counter::raise_barrier() {}

void Counter::read_plate() {}

void Counter::read_badge() {}

void Counter::print_accepted() {}

void Counter::print_rejected() {}
bool Counter::detect() { return theres_a_car; }

void Counter::add_present_user(std::vector<User> list_of_present_cars) {}

void Counter::remove_car_present() {}
void Counter::remove_present_car(std::vector<User> list_of_present_cars) {}
