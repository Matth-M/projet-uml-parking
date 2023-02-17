#pragma once
#include "./Counter.h"
#include "./Place.h"
#include "./User.h"
#include <vector>

class Parking {
public:
  void print_n_places(int occupied_places, int total_places);

  vector<string> authorized_plate(string plate, vector<User> list_user);
  vector<int> authorized_badge(vector<User> list_user, int badge);

private:
  int total_places;
  int occupied_places;
  std::vector<User> list_of_present_cars;
  std::vector<Place> list_places;
  std::vector<Counter> list_counters;
  std::vector<User> list_users;
  bool capt_entry;
};
