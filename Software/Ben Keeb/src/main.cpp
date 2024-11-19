#include <Arduino.h>
#include "keyboard.h"
#include "Keypad.h"

const byte ROWS = 3;
const byte COLUMNS = 3;

char keys[ROWS][COLUMNS] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}};

byte rowPins[ROWS] = {18, 19, 20};
byte columnPins[COLUMNS] = {15, 14, 16};
Keypad keypad = Keypad(makeKeymap(keys), rowPins, columnPins, ROWS, COLUMNS);

void setup()
{
  Serial.begin(9600);
  Keyboard.begin();
}

void loop()
{
  char key = keypad.getKey();

  switch (key)
  {
  case '1':
    Keyboard.print("aaaaaaaaaaaaaaa");

    break;
  case '2':
    Keyboard.print("2");

    break;

  case '3':
    Keyboard.print("3");

    break;

  case '4':
    Keyboard.print("4");

    break;

  case '5':
    Keyboard.print("5");

    break;

  case '6':
    Keyboard.print("6");

    break;

  case '7':
    Keyboard.print("7");

    break;

  case '8':
    Keyboard.print("8");

    break;

  case '9':
    Keyboard.print("9");
    break;
  }
  Keyboard.releaseAll();
}