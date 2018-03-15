#include "Programme.h"

Programme::Programme() {
}

Programme::Programme(list <Declaration> d, list <Fonction> f) {
  declarations = d;
  fonctions = f;
}
