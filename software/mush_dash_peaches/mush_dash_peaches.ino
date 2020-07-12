#include <CapacitiveSensor.h>
#include <Keyboard.h>

CapacitiveSensor   cs_d = CapacitiveSensor(8, 9);
CapacitiveSensor   cs_f = CapacitiveSensor(6, 7);

CapacitiveSensor   cs_j = CapacitiveSensor(4, 5);
CapacitiveSensor   cs_k = CapacitiveSensor(2, 3);

bool f_push = false;
bool j_push = false;
bool d_push = false;
bool k_push = false;

//按键按下电容阈值 （大于此值时）
long press_val = 700;
//按键释放电容阈值（小于此值时）
long release_val = 600;
//电容值判断超时时间（单位：毫秒）
long time_out = 5;
//电容值采样率（越大电容值越准确）
byte cp_resolution = 50;

void setup()
{
  Serial.begin(9600);
  cs_d.set_CS_Timeout_Millis(time_out);
  cs_f.set_CS_Timeout_Millis(time_out);
  cs_j.set_CS_Timeout_Millis(time_out);
  cs_k.set_CS_Timeout_Millis(time_out);
  Keyboard.begin();
}

void loop()
{
  //long start = millis();

  long cp1 =  cs_f.capacitiveSensor(cp_resolution);
  if (cp1 == -2) {
    cp1 = 1200;
  }
  if (cp1 > press_val && !f_push) {
    Keyboard.press('f');
    f_push = true;
  } else if (cp1 < release_val && f_push) {
    Keyboard.release('f');
    f_push = false;
  }

  long cp2 =  cs_j.capacitiveSensor(cp_resolution);
  if (cp2 == -2) {
    cp2 = 1200;
  }
  if (cp2 > press_val && !j_push) {
    Keyboard.press('j');
    j_push = true;
  } else if (cp2 < release_val && j_push) {
    Keyboard.release('j');
    j_push = false;
  }

  long cp3 =  cs_d.capacitiveSensor(cp_resolution);
  if (cp3 == -2) {
    cp3 = 1200;
  }
  if (cp3 > press_val && !d_push) {
    Keyboard.press('d');
    d_push = true;
  } else if (cp3 < release_val && d_push) {
    Keyboard.release('d');
    d_push = false;
  }

  long cp4 =  cs_k.capacitiveSensor(cp_resolution);
  if (cp4 == -2) {
    cp4 = 1200;
  }
  if (cp4 > press_val && !k_push) {
    Keyboard.press('k');
    k_push = true;
  } else if (cp4 < release_val && k_push) {
    Keyboard.release('k');
    k_push = false;
  }

  /*
      Serial.print(millis() - start);
      Serial.print("ms");
      Serial.print("\t");
      Serial.print(cp1);
      Serial.print("\t");
      Serial.print(cp2);
      Serial.print("\t");
      Serial.print(cp3);
      Serial.print("\t");
      Serial.println(cp4);
      delay(10);
  */

}
