# LED ON/OFF

### LED 3개 껐다 켜기
```ino
#define PIN_LED  12//13
#define PIN_LED2 9
#define PIN_LED3 3

void setup() {
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_LED2, OUTPUT);
  pinMode(PIN_LED3, OUTPUT);
  Serial.begin(115200);
}

int count;

void loop() {
  digitalWrite(PIN_LED, 0);
  digitalWrite(PIN_LED2, 0);
  digitalWrite(PIN_LED3, 1);
  Serial.print("Hello ");
  Serial.println(count++);
  delay(1000);
  digitalWrite(PIN_LED, 1);
  digitalWrite(PIN_LED2, 1);
  digitalWrite(PIN_LED3, 0);
  delay(1000);
}
```

### analogWrite
```ino
void setup() {
  pinMode(3, OUTPUT);
}

int count;

void loop() {
  //digitalWrite(PinNumber, 0 or 1);
  //analogWrite(PinNumber, 0~255);
  for(int i=0; i<256; i++){
    analogWrite(3, i);
    delay(100);
  }
}
```

### toggle
```ino
#define PIN_LED 13
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
    ;
  }
  Serial.println("Hello World!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle);
}

void loop() {
  Serial.println(++count);
  toggle = toggle;
  digitalWrite(PIN_LED, toggle);
  delay(1000);
}
```
