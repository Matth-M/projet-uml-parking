#pragma once
#include <string>

class Place {
private:
  bool free;
  std::string n_place;
  bool theres_a_car;

  bool detect();
};
