#include <iostream>
#include <string>
#include <algorithm>

#include "HSLAPixel.h"

namespace cs221util {

 HSLAPixel::HSLAPixel() {
   h = 0;
   s = 0;
   l = 1.0;
   a = 1.0;
  }

  HSLAPixel::HSLAPixel(double h0,double s0,double l0) {
    h = h0;
    s = s0;
    l = l0;
  }
  HSLAPixel::HSLAPixel(double h1,double s1,double l1,double a1) {
    h = h1;
    s = s1;
    l = l1;
    a = a1;
  }



}
