#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while(!Serial){
    ;
  }
  Serial.println("Hello World!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle);

}

void loop() {
  delay(1000);
  while(1){
    while(count<=10){
      count +=1;
      Serial.println(count);
      toggle = toggle_state(toggle);
      digitalWrite(PIN_LED, toggle);
      delay(100);
    }
    digitalWrite(PIN_LED, 1);
    count=0;
    delay(1000);
    while(1){}
  }
}

int toggle_state(int toggle) {
  return !toggle;
}
