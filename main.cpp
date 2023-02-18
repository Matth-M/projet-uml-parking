#include "Parking.h"
const int TOTAL_PLACES = 100;

int main() {
  // Le timer est utilise pour compter le nombre de voitures presentes
  // toutes les 30mn ou alors 5mn apres l'entree/sortie d'un
  // vehicule.
  int timer = 0;
  Parking parking(TOTAL_PLACES);
  parking.print_n_places();

  return 0;
}
