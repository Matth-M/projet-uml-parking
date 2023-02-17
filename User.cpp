#include "User.h"

User::User(std::string plate, int n_badge) {
  this->plate = plate;
  this->n_badge = n_badge;
  authorized = false;
}

int User::get_badge() const { return this->n_badge; }
bool User::is_authorized() const;
