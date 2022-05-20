int led_blue = 8;
int led_green = 13;

void setup() {
  pinMode(led_blue,OUTPUT);
  pinMode(led_green,OUTPUT);
}

void loop() {
  digitalWrite(led_blue,HIGH);
  digitalWrite(led_green,LOW);
  delay(500);
  digitalWrite(led_blue,LOW);
  digitalWrite(led_green,HIGH);
  delay(500);
}
