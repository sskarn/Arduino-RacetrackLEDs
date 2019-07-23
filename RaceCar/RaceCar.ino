int red1 = 6;
int red2 = 3;
int red3 = 4;
int yellow1 = 5;
int yellow2 = 7;
int yellow3 = 9;
int green1 = 11; 
int green2 = 12;
int green3 = 13;
// initializing and setting LED pins to appropriate variables

void setup() {
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(red3, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(yellow3, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(green3, OUTPUT);
}
// setting all variables as power outputs

void redOff() {
  digitalWrite(red1, LOW);
  digitalWrite(red2, LOW);
  digitalWrite(red3, LOW);
}
// turns all red LEDs off

void yellowOff() {
  digitalWrite(yellow1, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(yellow3, LOW);
}
// turns all yellow LEDs off

void greenOff() {
  digitalWrite(green1, LOW);
  digitalWrite(green2, LOW);
  digitalWrite(green3, LOW);
}
// turns all green LEDs off

void redOn(){
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, HIGH);
}
// turns all red LEDs on

void yellowOn(){
  digitalWrite(yellow1, HIGH);
  digitalWrite(yellow2, HIGH);
  digitalWrite(yellow3, HIGH);
}
// turns all yellow LEDs on

void greenOn() {
  digitalWrite(green1, HIGH);
  digitalWrite(green2, HIGH);
  digitalWrite(green3, HIGH);
}
// turns all green LEDs on

void loop() {
  redOn();
  yellowOff();
  greenOff();
  delay(1000);
  redOff();
  yellowOn();
  greenOff();
  delay(1000);
  redOff();
  yellowOff();
  greenOn();
  delay(50);
  redOff();
  yellowOff();
  greenOff();
  delay(50);
  redOff();
  yellowOff();
  greenOn();
  delay(50);
  redOff();
  yellowOff();
  greenOff();
  delay(50);
  redOff();
  yellowOff();
  greenOn();
  delay(50);
  redOff();
  yellowOff();
  greenOff();
  delay(50);
  redOff();
  yellowOff();
  greenOn();
  delay(50);
  redOff();
  yellowOff();
  greenOff();
  delay(50);
  redOff();
  yellowOff();
  greenOn();
}
/* Racetrack Countdown Sequence Loop Code:
 * 1. Red Lights on for 1 second
 * 2. Yellow Lights on for 1 second
 * 3. Green Lights blink every 50 milliseconds to indicate car to start moving
 */
