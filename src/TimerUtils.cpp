#include "TimerUtils.h"

TimerUtils::TimerUtils(int numIntervals) {
  NUM_INTERVALS = numIntervals; // Initialize NUM_INTERVALS based on the parameter
  lastTimes = new unsigned long[NUM_INTERVALS]; // Dynamically allocate memory for lastTimes array
  for (int i = 0; i < NUM_INTERVALS; ++i) {
    lastTimes[i] = 0;
  }
}

TimerUtils::~TimerUtils() {
  delete[] lastTimes; // Deallocate memory for lastTimes array
}

bool TimerUtils::everyMs(unsigned long interval, int index) {
  unsigned long currentTime = millis();
  if (currentTime - lastTimes[index] >= interval) {
    lastTimes[index] = currentTime; // Update last time for the specified interval
    return true;
  }
  return false;
}

