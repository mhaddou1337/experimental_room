#include <unistd.h>
#include <stdio.h>
int main(void)
{
    enum light{_green,_yellow,_red};
    enum light now_light = _green;
    int timer =19;
    
    while (1)
    {
       switch (now_light)
       {
       case _green:
       while (timer >= 0)
       {
        printf("\033[0;32m""%d""%s",timer,"\n");
        timer--;
        sleep(2);
       }
       timer = 19;
       case _yellow:
       
       while (timer >= 0)
       {
        printf("\033[33m""%d""%s",timer,"\n");
        timer--;
        sleep(2);
       }
       timer = 19;
       case _red:
       
       while (timer >= 0)
       {
        printf("\033[0;31m""%d""%s",timer,"\n");
        timer--;
        sleep(2);
       }
       }

       timer = 19;
    }
        
}
