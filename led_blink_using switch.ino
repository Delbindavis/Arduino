const int ledPin =12;
const int buttonPin =2;
int buttonState =0;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  buttonState = digitalRead(buttonPin);
  if(buttonState == HIGH){
   digitalWrite(ledPin, HIGH);  // turn the LED on (HIGH is the voltage level)
  }else {
   digitalWrite(ledPin, LOW);   // turn the LED off by making the voltage LOW              // wait for a second
}
}
