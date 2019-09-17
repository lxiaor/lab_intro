#ifndef CS221UTIL_HSLAPIXEL_H
#define CS221UTIL_HSLAPIXEL_H

#include <string>
#include <vector>
#include "HSLAPixel.h"

using namespace std;

namespace cs221util {
  class HSLAPixel {
  public:

    HSLAPixel();

    HSLAPixel(double h0,double s0,double l0);

    HSLAPixel(double h1,double s1,double l1,double a1);

    double h;
    double s;
    double l;
    double a;
  };
}
#endif
