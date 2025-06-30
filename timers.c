
#include <xc.h>

void init_timer2(void)
{
        
    
    PR2 = 250;

    // enable timer2 interrupt
    TMR2IE = 1;
    
    
    TMR2ON = 0;
    
    
}
