#pragma once
#include <string>

class Place {
private:
  bool free;
  std::string n_place;

public:
  bool detect();
  Place(std::string n_place);
};
