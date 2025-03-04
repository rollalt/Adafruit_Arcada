#include "Adafruit_Arcada.h"

Adafruit_Arcada arcada;


void setup() {
 // while (!Serial);
  
  Serial.println("Hello! Arcada Alerts test");
  if (!arcada.begin()) {
    Serial.print("Failed to begin");
    while (1) { delay(1); }
  }
  arcada.displayBegin();
  Serial.println("Arcada display begin");
  arcada.setBacklight(255);
  
  arcada.fillScreen(ARCADA_RED);
  arcada.infoBox("Arcada alerts test! This is an info box with many lines of text?");

  arcada.fillScreen(ARCADA_GREEN);
  arcada.warnBox("Arcada alerts test! This is an warning box ... watch out!", ARCADA_BUTTONMASK_B);

  arcada.fillScreen(ARCADA_BLUE);
  arcada.errorBox("Arcada alerts test! This is an error box, something went wrong!",  ARCADA_BUTTONMASK_START);

  arcada.fillScreen(ARCADA_BLACK);
  arcada.haltBox("Arcada alerts test! This is an halting alert box :(");
}


void loop() {
}

/*****************************************************************/
