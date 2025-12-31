//DHT - DIGITAL HUMUDITY TEMPERATURE
//INSTALL THIS LIBRARY #include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT 11

DHT dht (DHTPIN , DHTTYPE);

void setup(){
    Serial.begin(9600);
    dht.begin();
    Serial.println("DHT11 Temperature and Humidity Monitoring");

}

void loop(){
    float humidity = dht.readHumidity();
    float temperature = dht.readTemperature();

    if(isnan(humidity) || isnan(temperature)){
        Serial.println("fAILED TO READ FROM THE SENSOR");
        //isnan is is not a number
    }
    else{
        Serial.print("Humidity: ");
        Serial.print(humidity);
        Serial.print("%\t");
        Serial.print("Temperature");
        Serial.print(temperature);
        Serial.print(" *C");
    }
    delay(15000);
    //wait for 15 seconds
}
