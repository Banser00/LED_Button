
// constants won't change. They're used here to set pin numbers:
const int buttonPin1 = 2;     // the number of the pushbutton pin
const int buttonPin2 = 3;
const int buttonPin3 = 4;
const int buttonPin4 = 5;
const int buttonPin5 = 6;
const int buttonPin6 = 7;
const int ledPin1 = 13;      // the number of the LED pin
const int ledPin2 = 12;
const int ledPin3 = 11;
const int ledPin4 = 10;
const int ledPin5 = 9;
const int ledPin6 = 8;

// variables will change:
int buttonState1 = 0;         // variable for reading the pushbutton status
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;
int buttonState6 = 0;
int lastState1 = 0;
int lastState2 = 0;
int lastState3 = 0;
int lastState4 = 0;
int lastState5 = 0;
int lastState6 = 0;
int ledState1 = 1;
int ledState2 = 1;
int ledState3 = 1;
int ledState4 = 1;
int ledState5 = 1;
int ledState6 = 1;
int detect1 = 0;
int detect2 = 0;
int detect3 = 0;
int detect4 = 0;
int detect5 = 0;
int detect6 = 0;
double start, finish;
double duration;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(buttonPin5, INPUT);
  pinMode(buttonPin6, INPUT);
  start = millis();
  Serial.begin(9600);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  buttonState4 = digitalRead(buttonPin4);
  buttonState5 = digitalRead(buttonPin5);
  buttonState6 = digitalRead(buttonPin6);
  // check if the pushbutton is pressed. If it is, the buttonState1 is HIGH:

  //LED1
  if (!detect1) {
    // turn LED on:
    digitalWrite(ledPin1, ledState1);
   
  } else {
    // turn LED off:
    digitalWrite(ledPin1, LOW);
  }
  //LED2
  if (!detect2) {
    // turn LED on:
    digitalWrite(ledPin2, ledState2);
   
  } else {
    // turn LED off:
    digitalWrite(ledPin2, LOW);
  }
  //LED3
  if (!detect3) {
    // turn LED on:
    digitalWrite(ledPin3, ledState3);
   
  } else {
    // turn LED off:
    digitalWrite(ledPin3, LOW);
  }
  //LED4
  if (!detect4) {
    // turn LED on:
    digitalWrite(ledPin4, ledState4);
   
  } else {
    // turn LED off:
    digitalWrite(ledPin4, LOW);
  }
  //LED5
  if (!detect5) {
    // turn LED on:
    digitalWrite(ledPin5, ledState5);
   
  } else {
    // turn LED off:
    digitalWrite(ledPin5, LOW);
  }
  //LED6
  if (!detect6) {
    // turn LED on:
    digitalWrite(ledPin6, ledState6);
   
  } else {
    // turn LED off:
    digitalWrite(ledPin6, LOW);
  }

  if(lastState1 == 0 && buttonState1 == 1)
    detect1 = 1;
  if(lastState2 == 0 && buttonState2 == 1)
    detect2 = 1;
  if(lastState3 == 0 && buttonState3 == 1)
    detect3 = 1;
  if(lastState4 == 0 && buttonState4 == 1)
    detect4 = 1;
  if(lastState5 == 0 && buttonState5 == 1)
    detect5 = 1;
  if(lastState6 == 0 && buttonState6 == 1)
    detect6 = 1;
  lastState1 = buttonState1;
  lastState2 = buttonState2;
  lastState3 = buttonState3;
  lastState4 = buttonState4;
  lastState5 = buttonState5;
  lastState6 = buttonState6;
  finish = millis();
  duration = (double)(finish - start) / 1000;
  if(duration > 0.5){
    ledState1 = !ledState1;
    ledState2 = !ledState2;
    ledState3 = !ledState3;
    ledState4 = !ledState4;
    ledState5 = !ledState5;
    ledState6 = !ledState6;
    start = millis();
  }
}
