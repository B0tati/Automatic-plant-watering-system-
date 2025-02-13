#include "DHT.h"
// Define the pin connections
#define SOIL_MOISTURE_PIN A15
#define DHT11_PIN 52
#define RELAY_PIN 2
#define PUMP_ON LOW // Relay state pump on
#define PUMP_OFF HIGH // Relay state pump off
// Initialize objects for LCD and sensors
DHT dht11(DHT11_PIN, DHT11);
char Incoming_value = 0;
// Variables to store sensor readings
int soilMoistureValue = 0;
float humi;
float tempC;

void setup() {
  pinMode(2, OUTPUT); 
  // Initialize Serial communication for debugging
  Serial.begin(9600);
  // Initialize DHT
  dht11.begin();
  // Initialize relay pin
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, PUMP_OFF); // Ensure pump is initially off
}

void loop() {
if(Serial.available() > 0)  
  {
    Incoming_value = Serial.read();      
    Serial.print(Incoming_value);        
    Serial.print("\n");        
    if(Incoming_value == '1')             
      digitalWrite(2, HIGH);  
    else if(Incoming_value == '0')       
      digitalWrite(2, LOW);   
  }           
byte Temperature = 0;
byte Humidity = 0;
  // Read soil moisture sensor value
  soilMoistureValue = analogRead(SOIL_MOISTURE_PIN);

  // Read humidity and temperature from DHT sensor
  humi = dht11.readHumidity();
  tempC = dht11.readTemperature();

  // Display readings on Serial Monitor
  Serial.print("Soil Moisture: ");
  Serial.print(soilMoistureValue);
  Serial.print("|");
  Serial.print("Humidity: ");
  Serial.print(humi);
  Serial.println("%");  
  Serial.print("|");
  Serial.print("Temperature: ");
  Serial.print(tempC);
  Serial.println("°C");

  // Soil moisture level control water pump
  if (soilMoistureValue < 500) {
    digitalWrite(RELAY_PIN, PUMP_ON);
    delay(5000); // Pump delay
    digitalWrite(RELAY_PIN, PUMP_OFF);
  }

  delay(1000); // Loop iteration
}

