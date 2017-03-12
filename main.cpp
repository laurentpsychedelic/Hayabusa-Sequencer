 #pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#include "mbed.h"
#pragma GCC diagnostic pop

// Switches
DigitalIn  s1(dp17);
DigitalIn  s2(dp18);
// Lamps
DigitalOut l1(dp15);
DigitalOut l2(dp16);
// Port A
DigitalOut a1(dp24);
DigitalOut a2(dp25);
DigitalOut a3(dp26);
DigitalOut a4(dp27);
DigitalOut a5(dp28);
// Port B
DigitalOut b1(dp9);
DigitalOut b2(dp10);
DigitalOut b3(dp11);
DigitalOut b4(dp13);
DigitalOut b5(dp14);

int main() {
    l2 = l2 = b1 = b2 = false;
    wait(3.0);
    for (int i = 0; i < 100; ++i) {
        l1 = a3 = true;
        l2 = a5 = false;
        wait(3.0);
        l1 = a3 = true;
        l2 = a5 = true;
        wait(0.025);
        l1 = l2 = a3 = a5 = false;
        wait(15.0f);
    }
    return 0;
}
