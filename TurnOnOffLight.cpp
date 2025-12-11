int led = 5;
void setup(){
 pinMode(led , OUTPUT);
 Serial.begin(9600);
}

void loop(){
  if(Serial.available()){
  	
  	char c = Serial.read();
  	
    if(c=='1'){
    	digitalWrite(led, HIGH);
    	Serial.println("Led on");
    }
    else{
    	digitalWrite(led, LOW);
    	Serial.println("LED off");
    }
  }
}