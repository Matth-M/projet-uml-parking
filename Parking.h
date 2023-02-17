#pragma once
#include "./Counter.h"
#include "./Place.h"
#include "./User.h"
#include <vector>

class Parking {
public:
  Parking(int total_places);
  void print_n_places(int occupied_places, int total_places);

  std::vector<std::string> authorized_plate(std::string plate,
                                            std::vector<User> list_user);
  std::vector<int> authorized_badge(std::vector<User> list_user, int badge);

private:
  int total_places;
  int occupied_places;
  std::vector<User> list_of_present_cars;
  std::vector<Place> list_places;
  std::vector<Counter> list_counters;
  std::vector<User> list_users;
  bool capt_entry;
};
