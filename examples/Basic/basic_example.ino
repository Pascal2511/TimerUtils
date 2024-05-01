#include <TimerUtils.h>

TimerUtils timer;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (timer.everyMs(250)) {
    Serial.println("250ms interval reached!");
  }

  if (timer.everyMs(500)) {
    Serial.println("500ms interval reached!");
  }

  if (timer.everyMs(1000)) {
    Serial.println("1000ms interval reached!");
  }

  if (timer.everyMs(2500)) {
    Serial.println("2500ms interval reached!");
  }
}


