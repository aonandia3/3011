int i = 1;

int bit0;
int bit1;
int bit2;
int bit3;
int bit4;

void setup() { 
  Serial.begin(115200);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(0, OUTPUT);
}

void loop() {
  // Extract the individual bits of i
  bit0 = (i >> 0) & 1;  // Extract bit 0
  bit1 = (i >> 1) & 1;  // Extract bit 1
  bit2 = (i >> 2) & 1;  // Extract bit 2
  bit3 = (i >> 3) & 1;  // Extract bit 3
  bit4 = (i >> 4) & 1;  // Extract bit 4

  // Print the individual bits (for debugging)
  // Serial.println("I: ");
  // Serial.print(bit4);
  // Serial.print(bit3);
  // Serial.print(bit2);
  // Serial.print(bit1);
  // Serial.println(bit0);
  // Serial.println("");

  Serial.println("I: ");
  Serial.print(i);
  Serial.println("");


  // Use bits to control pins
  digitalWrite(4, bit4 ? HIGH : LOW);  // Set pin 4 based on bit0
  digitalWrite(5, bit3 ? HIGH : LOW);  // Set pin 5 based on bit1
  digitalWrite(6, bit2 ? HIGH : LOW);  // Set pin 6 based on bit2
  digitalWrite(7, bit1 ? HIGH : LOW);  // Set pin 7 based on bit3
  digitalWrite(0, bit0 ? HIGH : LOW);  // Set pin 0 based on bit4

  delay(150);


///////// For Tony. Here Is where you set I. 1 and 30 are full moons 15 is new Moon. Still need to add eclipses (Will be 0 and 31) 
  if (i < 30) {
    i++; 
  } else {
    i = 1;
  }
}
