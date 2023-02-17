#pragma once
#include <vector>

class Place {
public:
  bool free;
  std::vector<char> n_place;
  bool theres_a_car;

  bool detect();
};
