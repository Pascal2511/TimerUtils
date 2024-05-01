#ifndef TIMERUTILS_H
#define TIMERUTILS_H

#include <Arduino.h>

class TimerUtils {
  private:
    unsigned long lastTime;
    
  public:
    TimerUtils();
    bool everyMs(unsigned long interval);
};

#endif
