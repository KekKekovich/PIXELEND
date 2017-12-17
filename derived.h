//
// Created by PACKARD BELL on 29.10.2017.
//

#ifndef DGW_MOOP_1_DERIVED_H
#define DGW_MOOP_1_DERIVED_H


#include "Pixel.h"

class derived: private Pixel {
public:
    derived(int X, int Y, int R, int G, int B);

    using Pixel::getR;
    using Pixel::getG;
    using Pixel::getB;
    using Pixel::setR;
    using Pixel::setG;
    using Pixel::setB;

}

;


#endif //DGW_MOOP_1_DERIVED_H
