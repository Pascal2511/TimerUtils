#include "TimerUtils.h"

TimerUtils::TimerUtils() {
  lastTime = 0;
}

bool TimerUtils::everyMs(unsigned long interval) {
  if (millis() - lastTime > interval) {
    lastTime = millis();
    return true;
  }
  return false;
}
