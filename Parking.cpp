#include "Parking.h"
#include "User.h"
#include <iostream>
#include <vector>

Parking::Parking(int nb_places) {
  this->total_places = nb_places;
  occupied_places = 0;
}

void Parking::print_n_places(int occupied_places, int total_places) {
  int number = total_places - occupied_places;
  // La console fait office de l'ecran du parking
  std::cout << "PLACES DISPONIBLES:\t" << number << std::endl;
}

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
