String data;   // for incoming serial data

void setup() {
        Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
        pinMode(13, OUTPUT);
}

void loop() {

        // send data only when you receive data:
        if (Serial.available() > 0) {
                  // read the incoming byte:
                  data = Serial.readString();
                  if (data == "on") {
                        digitalWrite(13, HIGH);
                  }
                  if (data == "off") {
                        digitalWrite(13, LOW);  
                  }
        }
}
