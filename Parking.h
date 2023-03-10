#pragma once
#include "./Counter.h"
#include "./Place.h"
#include "./User.h"
#include <vector>

class Counter;

class Parking {
public:
  Parking(int total_places);
  void print_n_places();

  void remove_present_user(User u);
  void add_present_user(User u);
  bool authorized_plate(std::string plate) const;
  bool authorized_badge(int badge) const;

private:
  int total_places;
  int occupied_places;
  std::vector<User> list_of_present_users;
  std::vector<Place> list_places;
  std::vector<Counter> list_counters;
  std::vector<User> list_users;
};
