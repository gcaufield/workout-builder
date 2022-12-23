/******************************************************************************
 * File:             WorkoutStep.hpp
 *
 * Author:           caufield
 * Created:          12/22/22
 * Description:      A step in a workout
 *****************************************************************************/

#ifndef WORKOUTSTEP_HPP
#define WORKOUTSTEP_HPP

#include "fit_encode.hpp"

class WorkoutStep {
 public:
  virtual ~WorkoutStep() {}
  void Export(Encoder& encoder);
};

#endif /* WORKOUTSTEP_HPP */
