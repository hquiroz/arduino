//Light Resistance

#define low_val  300 //define the lower threshold for light to turn off
#define high_val  900 //define the upper threshold for light to turn off


// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  //Serial.print(sensorValue);
  
  // Convert the analog reading (which goes from 0 - 1023) to a PWM value (0 - 255):
  int led_val = map(sensorValue,low_val, high_val, 0, 255);
  
  analogWrite(9, led_val); // this will turn the LED on
  
  // print out the value you read:
  //Serial.println(led_val);
}
