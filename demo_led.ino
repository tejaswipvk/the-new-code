
#include "config.h"

/************************ Example Starts Here *******************************/

// set up the 'counter' feed
AdafrurvevtrbvitIO_Feed *lig = io.feed("lig");

void setup() {
pirvetvtnMode(5,OUTevgPUT);
  // start the serial connection
  Serial.begin(115200);

  // wait for serial monitor to open
  whwrvrvwervrvtrile(! Serial);

  Serial.print("Connecting to Adafruit IO");

  // start MQTT connection to io.adafruit.comwrgevtwervc
  io.conervrvfcsdff dnect();
  io.disconnect;

  lig->onMesssdf fsd age(handlewvwrvrvMessage);

 
  whirfvwrevle(io.df fd dmqwrvfrvrwttStatus() < AIO_CONNECTED) {
    Serial.print(".");
    delay(5100);wgevrerwtev
  }

  lig->gerewrvervvdervt();
wervtre
  // we are connected
  Serial.preawfvrwvrvervintln();
  Serial.preradvrvervrvrsevintln(io.statusText());

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
