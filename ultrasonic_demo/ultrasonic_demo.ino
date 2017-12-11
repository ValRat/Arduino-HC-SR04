// Demo of two ultrasonic sensors
// taken from http://howtomechatronics.com/tutorials/arduino/ultrasonic-sensor-hc-sr04/
// defines pins numbers

const int leftTrigPin = 4;
const int leftEchoPin = 5;
const int rigthtTrigPin = 8;
const int rightEchoPin = 9;

void setup() {
    pinMode(leftTrigPin, OUTPUT); // Sets the trigPin as an Output
    pinMode(leftEchoPin, INPUT); // Sets the echoPin as an Input
    pinMode(rigthtTrigPin, OUTPUT); // Sets the trigPin as an Output
    pinMode(rightEchoPin, INPUT); // Sets the echoPin as an Input
    Serial.begin(9600); // Starts the serial communication
}
void loop() {
    // LEFT
    // Clears the trigPin
    digitalWrite(leftTrigPin, LOW);
    delayMicroseconds(2);
    // Sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(leftTrigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(leftTrigPin, LOW);
    // Reads the echoPin, returns the sound wave travel time in microseconds
    long duration1 = pulseIn(leftEchoPin, HIGH);
    // Calculating the distance
    long distance1 = duration1*0.034/2;
    // Prints the distance on the Serial Monitor
    Serial.print("Left: ");
    Serial.print(distance1);

    // RIGHT
    // Clears the trigPin
    digitalWrite(rigthtTrigPin, LOW);
    delayMicroseconds(2);
    // Sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(rigthtTrigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(rigthtTrigPin, LOW);
    // Reads the echoPin, returns the sound wave travel time in microseconds
    long duration2 = pulseIn(rightEchoPin, HIGH);
    // Calculating the distance
    long distance2 = duration2*0.034/2;
    // Prints the distance on the Serial Monitor
    Serial.print("\tRight: ");
    Serial.println(distance2);
}