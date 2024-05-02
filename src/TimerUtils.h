#ifndef TIMERUTILS_H
#define TIMERUTILS_H

#include <Arduino.h>

class TimerUtils {
  private:
    int NUM_INTERVALS; // Number of intervals
    unsigned long *lastTimes; // Array to store last times for each interval
    
  public:
    TimerUtils(int numIntervals); // Constructor to initialize NUM_INTERVALS
    ~TimerUtils(); // Destructor to deallocate memory
    bool everyMs(unsigned long interval, int index); // Specify index for the interval
};

#endif
