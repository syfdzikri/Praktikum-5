void setup() { 
  Serial.begin(115200);
}

void loop() { 
  Serial.print(0x00); 
  Serial.print(0x01); 
  Serial.print(0XF0); 
  Serial.print(0x1F); 
  Serial.print(0x2F); 
  delay(2000);
}

