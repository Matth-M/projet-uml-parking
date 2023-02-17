#pragma once
#include <string>

class User {
private:
  std::string plate;
  int n_badge;
  bool authorized;

public:
  User(std::string plate, int n_badge);
  int get_badge() const;
  std::string get_plate() const;
  bool is_authorized() const;
};
