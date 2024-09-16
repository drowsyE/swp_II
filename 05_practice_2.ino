#define LED 7
unsigned int toggle, count;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(115200);
  count = toggle = 0;
}

void loop() {
  digitalWrite(LED, toggle);
  delay(1000);
 
  while (count < 11) {
    toggle = !toggle;
    digitalWrite(LED, toggle);
    delay(100);
    count += 1;
  }

  while (1) {
    ;
  }
  
}

