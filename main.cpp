#include "mbed.h"
#include "DebounceIn.h"
// must import Cookbook Debounce library into project
// URL: http://mbed.org/users/AjK/libraries/DebounceIn/lky9pc

DigitalOut myled(p21);
DebounceIn pb(p8);
// SPST Pushbutton count demo using internal PullUp function
// no external PullUp resistor needed
// Pushbutton from P8 to GND.
// Demonstrates need for debounce - will not count more than once per button hit
// This occurs on all switches due to mechanical contact bounce
int main()
{ 
    // Use internal pullup for pushbutton
    pb.mode(PullUp);
    // Delay for initial pullup to take effect
    wait(.001);
    while(1) {
        myled = !pb;
    }
}
