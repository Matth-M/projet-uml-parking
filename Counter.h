#pragma once
#include "./Parking.h"
#include "User.h"
#include <string>
#include <vector>

class Parking;

class Counter {
private:
  std::string n_counter;
  bool theres_a_car;

public:
  Counter(std::string n_counter);
  void lower_barrier();
  void raise_barrier();
  void read_plate();
  void read_badge();
  void print_accepted();
  void print_rejected();
  bool detect();
  void add_present_user(Parking p, User u);
  void remove_present_car(Parking p, User u);
};
