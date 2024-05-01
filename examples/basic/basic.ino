#include <TimerUtils.h>

const int NUM_INTERVALS = 4; // Define the number of intervals

TimerUtils timer(NUM_INTERVALS); // Pass the number of intervals to the constructor

void setup() {
  Serial.begin(115200);
}

void loop() {
  if (timer.everyMs(250, 0)) { // Specify index for the interval
    Serial.println("250ms interval reached!");
  }

  if (timer.everyMs(500, 1)) { // Specify index for the interval
    Serial.println("500ms interval reached!");
  }

  if (timer.everyMs(1000, 2)) { // Specify index for the interval
    Serial.println("1000ms interval reached!");
  }

  if (timer.everyMs(2500, 3)) { // Specify index for the interval
    Serial.println("2500ms interval reached!");
  }
}
