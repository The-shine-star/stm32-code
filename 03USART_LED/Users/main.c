<<<<<<< HEAD
#include "./SYSTEM/sys/sys.h"
#include "./SYSTEM/usart/usart.h"
#include "./SYSTEM/delay/delay.h"
#include "./BSP/LED/led.h"


int main(void)
{
    HAL_Init();                               /* 初始化HAL库 */
    SystemClock_Config();                     /* 设置时钟, 72Mhz */
    delay_init(72);                           /* 延时初始化 */
    usart_init(9600);                         /*波特率*/

    while(1)
    {

    }
}

=======
#include "./SYSTEM/sys/sys.h"
#include "./SYSTEM/usart/usart.h"
#include "./SYSTEM/delay/delay.h"
#include "./BSP/LED/led.h"


int main(void)
{
    HAL_Init();                               /* 初始化HAL库 */
    SystemClock_Config();                     /* 设置时钟, 72Mhz */
    delay_init(72);                           /* 延时初始化 */
    usart_init(9600);                         /*波特率*/

    while(1)
    {

    }
}

>>>>>>> 00ac74e (9.6)
