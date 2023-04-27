// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, HIGH);
}