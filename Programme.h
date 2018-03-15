#ifndef Programme_h
#define Programme_h

#include <stdio.h>
#include <string>
#include "Declaration.h"
#include <list>

using namespace std;


class Programme {
public:
    Programme();
    Programme(list <Declaration> d, list <Fonction> f);
private:
  list <Declaration> declarations;
  list <Fonction> fonctions;
};

#endif
