#define builder_mstartup mediaStartup(); I2CStartup(); NKROStartup(); 
#define builder_mloop mediaLoop(); I2CLoop(); NKROLoop(); 
#define builder_mkeydown mediaKeyDown(val, type); I2CKeyDown(val, type); NKROKeyDown(val, type); 
#define builder_mkeyup mediaKeyUp(val, type); I2CKeyUp(val, type); NKROKeyUp(val, type); 
#define builder_mserial mediaSerial(input); I2CSerial(input); NKROSerial(input); 

void modStartup()
{
  builder_mstartup
}

void modLoop()
{
  if (checkMillis())
  {
  }
  builder_mloop
}


void modKeyDown(char val, byte type)
{
  builder_mkeydown
}

void modKeyUp(char val, byte type)
{
  builder_mkeyup
}

void modSerial(String input)
{
  if (input == "uniquekgetmods")
  {
    Serial.print("get mods(");
  }
  builder_mserial
  if (input == "uniquekgetmods")
  {
    Serial.print("\r\n");
  }
}
