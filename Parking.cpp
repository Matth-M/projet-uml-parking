#include "Parking.h"
#include "User.h"
#include <vector>
Parking::Parking(int total_places) {
  this->total_places = total_places;
  this->occupied_places = 0;
}

void Parking::print_n_places(int occupied_places, int total_places) { return; }
bool Parking::authorized_plate(std::string plate) const {
  for (int i = 0; i < list_users.size(); i++) {
    if (list_users[i].get_plate() == plate) {
      return true;
    }
  }
  return false;
}

bool Parking::authorized_badge(int badge) const {
  for (int i = 0; i < list_users.size(); i++) {
    if (list_users[i].get_badge() == badge) {
      return true;
    }
  }
  return false;
}
