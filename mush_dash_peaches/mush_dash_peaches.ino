#include <CapacitiveSensor.h>
#include <Keyboard.h>

CapacitiveSensor   cs_f = CapacitiveSensor(7, 8);
CapacitiveSensor   cs_j = CapacitiveSensor(4, 5);

bool f_push = false;
bool j_push = false;

//按键按下电容阈值 （大于此值时）
long press_val = 600;
//按键释放电容阈值（小于此值时）
long release_val = 400;

void setup()
{
  Serial.begin(9600);
  Keyboard.begin();
  cs_f.set_CS_Timeout_Millis(30);
  cs_j.set_CS_Timeout_Millis(30);

}

void loop()
{
  long cp1 =  cs_f.capacitiveSensor(30);
  long cp2 =  cs_j.capacitiveSensor(30);

  if (cp1 == -2) {
    cp1 = 8000;
  }
  if (cp2 == -2) {
    cp2 = 8000;
  }

  /* debug
    Serial.print(cp1);
    Serial.print("\t");
    Serial.println(cp2);
  */

  if (cp1 > press_val && !f_push) {
    Keyboard.press('f');
    f_push = true;
  } else if (cp1 < release_val && f_push) {
    Keyboard.release('f');
    f_push = false;
  }

  if (cp2 > press_val && !j_push) {
    Keyboard.press('j');
    j_push = true;
  } else if (cp2 < release_val && j_push) {
    Keyboard.release('j');
    j_push = false;
  }

  //delay(10);
}
