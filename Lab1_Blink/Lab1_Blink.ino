/* Programmer: Mr. Lange
   Date: 11.6.19
   Program: Blink

   This program will turn on an LED for specified amounts of time, turn it
   off, and back on in a While Loop

   Merged on 12.2.19

   Programmer: Mr. Lange
   Date: 11.14.19
   Program: digitalRead() & the Serial Port

   Reads a digital input on pin 2, prints the result to the serial monitor

*/

// initialize our led to Pin 13
int led = 13;

//digital pin2 has a push button attached to it
int pushButton = 2;

void setup() {
  // Using the Function pinMode to call the variable led and provide Output
  pinMode(led, OUTPUT);

  //initializes serial communication at 9600 bits per second
  Serial.begin(9600);
  //make the pushBotto pin an input
  pinMode(pushButton, INPUT);
}

void loop() {
  // read the input pin
  int buttonState = digitalRead(pushButton);
  // print out the state of the button
  Serial.println(buttonState);
  if (buttonState==HIGH){
    digitalWrite(led, HIGH);
    delay(1500);
    digitalWrite(led, LOW);
    delay(500);
  }
  delay(1); // delay in between readings for stability
}
