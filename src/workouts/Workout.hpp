/******************************************************************************
 * File:             Workout.hpp
 *
 * Author:           caufield
 * Created:          12/22/22
 * Description:      A workout object
 *****************************************************************************/

#ifndef WORKOUT_HPP
#define WORKOUT_HPP

#include "WorkoutStep.hpp"

class Workout {
 private:
 public:
  Workout();
  Workout& AddStep(WorkoutStep&& step);
  virtual ~Workout(){};
};

#endif /* WORKOUT_HPP */
