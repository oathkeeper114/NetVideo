/*
  Rental.cpp

  Definition file for Rental class.
*/

#include "Rental.hpp"

// constructor
Rental::Rental(const Video& video, int days_rented)
    : video(video), days(days_rented)
{ }

// days rented
int Rental::getDaysRented() const {

    return days;
}

// video rented
const Video& Rental::getVideo() const {

    return video;
}
