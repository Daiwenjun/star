#include <Servo.h>

Servo ESC;      //创建servo来控制ESC

int potValue;   //来自模拟引脚的值

void setup() {
  // 把ESC连接到引脚9上
  ESC.attach(9,1000,2000);  //(引脚，最小脉冲宽度，最大脉冲宽度（单位：密耳))
}

void loop() {
  potValue = analogRead(A0);  //读取电位器的值
  potValue = map(potValue, 0, 1023, 0, 180);  //对其进行缩放以便与之配合使用
  ESC.write(potvalue);  //把信号传给ESC

}
