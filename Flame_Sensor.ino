#include <ESP8266WiFi.h>
   
int sensorPin = D0; // choose the input pin (for Fire sensor)  
int buzzer = D1; // choose the pin for the Buzzer
int G_led = 8; // choose the pin for the Green LED
int R_led = D2; // choose the pin for the Red Led

int read_value; // variable for reading the sensorpin status

void setup(){ 
pinMode(sensorPin, INPUT); // declare sensor as input

pinMode(buzzer,OUTPUT); // declare Buzzer as output 
pinMode(R_led,OUTPUT); // declare Red LED as output
pinMode(G_led,OUTPUT); // declare Green LED as output


}

void loop(){
read_value = digitalRead(sensorPin); // Digital input value

if(read_value==1){ // check if the Fire variable is High

digitalWrite(buzzer, LOW); // Turn LED off.  
digitalWrite(R_led, LOW);  // Turn LED off.
digitalWrite(G_led, HIGH); // Turn LED on.

}
else{ // check if the Fire variable is Low

    
digitalWrite(buzzer, HIGH); // Turn LED on.  
digitalWrite(R_led, HIGH);  // Turn LED on.
digitalWrite(G_led, LOW);   // Turn LED off.
delay(1000);
}
delay(100);
}
