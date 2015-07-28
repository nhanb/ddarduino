#include <HID.h>
#include <Keyboard.h>

int UP = 3;
int DOWN = 4;
int LEFT = 5;
int RIGHT = 6;

void setup() {
  pinMode(UP, INPUT);
  pinMode(DOWN, INPUT);
  pinMode(LEFT, INPUT);
  pinMode(RIGHT, INPUT);

  Keyboard.begin();
}

void loop() {
  if (digitalRead(UP) == LOW) {
    Keyboard.press(KEY_UP_ARROW);
  } else {
    Keyboard.release(KEY_UP_ARROW);
  }

  if (digitalRead(DOWN) == LOW) {
    Keyboard.press(KEY_DOWN_ARROW);
  } else {
    Keyboard.release(KEY_DOWN_ARROW);
  }

  if (digitalRead(LEFT) == LOW) {
    Keyboard.press(KEY_LEFT_ARROW);
  } else {
    Keyboard.release(KEY_LEFT_ARROW);
  }

  if (digitalRead(RIGHT) == LOW) {
    Keyboard.press(KEY_RIGHT_ARROW);
  } else {
    Keyboard.release(KEY_RIGHT_ARROW);
  }
}
