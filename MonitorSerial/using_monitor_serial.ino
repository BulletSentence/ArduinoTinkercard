#define RED_LED 2

int const on = 1;
int const off = 0;


void setup()
{
  Serial.begin(9600);
  pinMode(RED_LED, OUTPUT);

}

void loop()
{
  Serial.println(RED_LED);
  digitalWrite(2, on);
  delay(1000);
  digitalWrite(2, off); 
  delay(1000);
}
