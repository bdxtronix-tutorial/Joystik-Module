// nombor pin Arduino
const int SW_pin =2; // Digital pin ke switch output
const int X_PIN = 0; // Analog pin (A0) disambungkan ke output X 
const int Y_PIN = 1; // Analog pin (A1) disambungkan ke output Y 


void setup() {
  // put your setup code here, to run once:
pinMode(SW_pin,INPUT);
digitalWrite (SW_pin,HIGH);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print("Switch:  ");
Serial.print(digitalRead(SW_pin));
Serial.print("\n");
Serial.print("X-axis:  ");
Serial.print(analogRead(X_PIN));
Serial.print("\n");
Serial.print("Y-axis:  ");
Serial.println(analogRead(Y_PIN));
Serial.print("\n\n");
delay(1000);
}
