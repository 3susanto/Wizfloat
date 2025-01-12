/**
 ******************************************************************************
 * @file    UART/UART_HardwareFlowControl/main.c
 * @author  WIZnet
 * @brief   Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; COPYRIGHT 2018 WIZnet</center></h2>
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************
 */

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/** @addtogroup W7500x_StdPeriph_Examples
 * @{
 */

/** @addtogroup UART_HardwareFlowControl
 * @{
 */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
static void UART_Config(void);
void Delay(__IO uint32_t nTime);

/* Private functions ---------------------------------------------------------*/

/**
 * @brief  Main program.
 * @param  None
 * @retval None
 */
int main(void)
{
    SystemInit();

    UART_Config();

    printf("W7500x Standard Peripheral Library version : %d.%d.%d\r\n", __W7500X_STDPERIPH_VERSION_MAIN, __W7500X_STDPERIPH_VERSION_SUB1, __W7500X_STDPERIPH_VERSION_SUB2);

    printf("SourceClock : %d\r\n", (int) GetSourceClock());
    printf("SystemClock : %d\r\n", (int) GetSystemClock());

    printf("System Loop Start\r\n");
    uint8_t count = 0;  // Initialize a counter variable

    while (1) {
        char result[256] ="[(0,1),(1,2)]";
        //printf("Sent: %s\r\n", result);
       //UART0_SendString(result);
        Delay(800000);
        // if (UART_GetFlagStatus(UART0, UART_FLAG_CTS) == SET) {
        //     //UART_SendData(UART0, 0x31);
            //UART_SendData(UART0, count);  // Send the current value of count
             UART_SendData(UART0, 2);
            // UART0_SendString(result);
        //     printf("Sent: %d\r\n", count);  // Print the sent value
            count++;  // Increment the counter
        //     while (UART_GetFlagStatus(UART0, UART_FLAG_BUSY) == SET)
        //         ;
        //     Delay(800000);
            if(count>16) count=0;
        // }
        // if (UART_GetFlagStatus(UART0, UART_FLAG_RXFE) == RESET) {
        //     printf("Received : %c\r\n", UART_ReceiveData(UART0));
        // }
    }
	
	return 0;
}

void UART0_SendString(char *str) {
    while (*str) {
        UART_SendData(UART0, *str++);
        while (UART_GetFlagStatus(UART0, UART_FLAG_TXFE) == RESET);
    }
}

/**
 * @brief  Configures the UART Peripheral.
 * @note
 * @param  None
 * @retval None
 */
static void UART_Config(void)
{
    UART_InitTypeDef UART_InitStructure;

    UART_StructInit(&UART_InitStructure);

#if defined (USE_WIZWIKI_W7500_EVAL)
    UART_Init(UART1, &UART_InitStructure);
    UART_Cmd(UART1, ENABLE);
#else
    S_UART_Init(115200);
    S_UART_Cmd(ENABLE);
#endif

    UART_StructInit(&UART_InitStructure);

    UART_InitStructure.UART_HardwareFlowControl = UART_HardwareFlowControl_RTS_CTS;

    UART_Init(UART0, &UART_InitStructure);
    UART_Cmd(UART0, ENABLE);
}

/**
 * @brief  Inserts a delay time.
 * @param  nTime: specifies the delay time length.
 * @retval None
 */
void Delay(__IO uint32_t nTime)
{
    while (nTime != 0) {
        nTime--;
    }
}

#ifdef  USE_FULL_ASSERT

/**
 * @brief  Reports the name of the source file and the source line number
 *         where the assert_param error has occurred.
 * @param  file: pointer to the source file name
 * @param  line: assert_param error line source number
 * @retval None
 */
void assert_failed(uint8_t* file, uint32_t line)
{
    /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

    /* Infinite loop */
    while (1)
    {
    }
}
#endif

/**
 * @}
 */

/**
 * @}
 */

/******************** (C) COPYRIGHT WIZnet *****END OF FILE********************/
