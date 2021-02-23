int button = 13;
int led1 =  12;
int StatusButton = 0;

void setup()
{
   pinMode(led1, OUTPUT);
   pinMode(button, INPUT);
}

void loop()
{
   StatusButton = digitalRead(button);

   if (StatusButton == HIGH)
   {
      digitalWrite(led1, HIGH);
   }
   else
   {
      digitalWrite(led1, LOW);
   }
}
