
#include "DHT.h"
#include <Servo.h>
#define DHTTYPE DHT11 

Servo myservo;

#define DHTPIN 3 
int moistPin = 0;
int moistVal = 0;
int flag=0;
int pos=0;

DHT dht(DHTPIN, DHTTYPE);


void setup() {
  
  Serial.begin(9600);
  pinMode(moistPin,INPUT);
  dht.begin();
  myservo.attach(9); 
}

void servoON() // Switch ON water supply
{
  for (pos = 0; pos <= 185; pos += 1) { 
    // in steps of 1 degree
    myservo.write(pos);             
    delay(30);
  }
 delay(500);
  //flag=0;
}

void servoOFF() // Switch OFF water supply
{
  for (pos = 185; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(30);                       
  }
  delay(500);
 
}




void loop() {
  
  delay(2000);
  moistVal = analogRead(moistPin); // Read value from moisture sensor
  int moisture = 2.718282 * 2.718282 * (.008985 * moistVal + 0.207762); //calculate percent for probes about 1 - 1.5 inches apart
  
  Serial.print(" Soil Moisture = ");
  Serial.print(moisture);
  float h = dht.readHumidity(); // Read humidity from DHT11 
  float t = dht.readTemperature(); // Read temperature from DHT11 in celcius
   if (isnan(h) || isnan(t)) // if sensor not able to read
   {      
    Serial.println("Failed to read from DHT sensor!"); 
    return;
   }
  Serial.print(" %\t");
  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" *C ");

 // To operate the servo to switch water supply ON /OFF 
  if( moisture < 30 && flag ==0) 
  {
    if(t>10)
    {
     flag=1;
     servoON();
    }
    else 
    {
     flag=0;
     servoOFF();  
    }
  }
  else if( moisture>=30 && flag ==1)
  {
    if(t<40)
    {
      flag=0;
     servoOFF();
    }
    else
    {
     flag=1;
     servoON(); 
    }
  }
}
