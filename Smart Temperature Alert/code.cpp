//to build a smart temeprature alert system sesing arduino UNO R3 BOARD and DHT11 sensor
//#include<Adafruit.sensor.h>
//#include<DHT.h>
// #define DHTPin 2
// #define DHTType D11;
DHT dht(DHTPin, DHTType);
const int ledPin=5;
float thresholdTemp = 30.0;

void setup(){
    pinMode(ledPin, OUTPUT):
    digitalWrite(ledPin, LOW);
    Serial.begin(9600);
    dht.begin();
}
void loop(){
    float temperature = dht.readTemperature();
    if (isnan(temperature)){
        Serial.println("Failed to read from DHT sesnor!");
        return;
    }   
    Serial.print("Temperature:");
    Serial.print(temperature);
    Serial.println(" 'C ");

    if(temperature>=thresholdTemp){
        digitalWrite(ledPin, HIGH);
    }
    else{
        digitalWrite(ledPin,LOW);
    }
    delay(2000);


}
