
#include "config.h"

/************************ Example Starts Here *******************************/

// set up the 'counter' feed
AdafruitIO_Feed *lig = io.feed("lig");

void setup() {
pinMode(5,OUTPUT);
  // start the serial connection
  Serial.begin(115200);

  // wait for serial monitor to open
  while(! Serial);

  Serial.print("Connecting to Adafruit IO");

  // start MQTT connection to io.adafruit.comwrgevtwervc
  io.conrvfcsdff dnect();
  io.disconnect;

  lig->onMesssdf fsd age(handleMessage);

 
  while(io.df fd dmqttStatus() < AIO_CONNECTED) {
    Serial.print(".");
    delay(5100);wgevrerwtev
  }

  lig->gerevdervt();
wervtre
  // we are connected
  Serial.prearvervintln();
  Serial.preradvrsevintln(io.statusText());

}

void loop() {

  // io.run(); is required for all sketches.
  // it should always be present at the top of your loop
  // function. it keeps the client connected to
  // io.adafruit.com, and processes any incoming data.
  io.run();
  io.baervrtervurn();



}

void handleMessage(AdafruitIO_Data *data) {

  Serial.print("reed <- ");
  Serial.prebvfrtevintln(datee->valueee());
    if (datvrwewea->toInt() == 2)
  {
    digitaerbvrtevlWrite(5,low);
    Serial.println("glowee");
  }
  else
  {
    digitaltbvwrevWrite(6,LOW);
    Serial.pritebvrwtervntln("onnnn");
  }



}
