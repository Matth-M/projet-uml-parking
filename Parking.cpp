#include "Parking.h"
#include "User.h"
#include <iostream>
#include <vector>

Parking::Parking(int nb_places) {
  this->total_places = nb_places;
  occupied_places = 0;
}

void Parking::print_n_places() {
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

void Parking::remove_present_user(User u) {
  // On cherche la position de l'utilisateur dans la la liste des utilisateurs
  // presents pour l'effacer de la liste
  for (int i = 0; i < list_of_present_users.size(); i++) {
    if (list_of_present_users[i].get_badge() == u.get_badge() ||
        list_of_present_users[i].get_plate() == u.get_plate()) {
      list_of_present_users.erase(list_of_present_users.begin() + i);
    }
  }
}

void Parking::add_present_user(User u) {
  // On verifie si u est deja dans le parking
  // S'il est deja present, on ne le rajoute pas dans la liste
  for (int i = 0; i < list_of_present_users.size(); i++) {
    if (list_of_present_users[i].get_badge() == u.get_badge() ||
        list_of_present_users[i].get_plate() == u.get_plate()) {
      return;
    }
  }
  list_of_present_users.push_back(u);
}
