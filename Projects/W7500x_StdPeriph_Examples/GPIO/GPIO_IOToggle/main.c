/**
 ******************************************************************************
 * @file    GPIO/GPIO_IOToggle/main.c
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

/** @addtogroup GPIO_IOToggle
 * @{
 */

/* Define the pins for the stepper motor control */
#define DIR_PIN  GPIO_Pin_14
#define STEP_PIN GPIO_Pin_13

/* Define the pins for the limit switches */
#define LIMIT1_PIN GPIO_Pin_8
#define LIMIT2_PIN GPIO_Pin_9

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
static void UART_Config(void);
static void GPIO_Config(void);
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
    GPIO_Config();

	printf("W7500x Standard Peripheral Library version : %d.%d.%d\r\n", __W7500X_STDPERIPH_VERSION_MAIN, __W7500X_STDPERIPH_VERSION_SUB1, __W7500X_STDPERIPH_VERSION_SUB2);
	
    printf("SourceClock : %d\r\n", (int) GetSourceClock());    
    printf("SystemClock : %d\r\n", (int) GetSystemClock());

    printf("System Loop Start\r\n");

    while (1) {
        // GPIO_ResetBits(GPIOC, GPIO_Pin_15);
        //  Delay(800000);
        // GPIO_SetBits(GPIOC, GPIO_Pin_15);
        //  Delay(800000);

    //    GPIO_SetBits(GPIOC, DIR_PIN);
    //     // Rotate stepper motor one revolution in one direction
    //     for(int i = 0; i < 1000; i++) {
    //         GPIO_SetBits(GPIOC, STEP_PIN);
    //         Delay(1000);  // Adjust the delay for stepper speed
    //         GPIO_ResetBits(GPIOC, STEP_PIN);
    //         Delay(1000);
    //     }


    //     Delay(800000);


    //     // Set direction to counterclockwise
    //     GPIO_ResetBits(GPIOC, DIR_PIN);


    //     // Rotate stepper motor one revolution in the other direction
    //     for(int i = 0; i < 1000; i++) {
    //         GPIO_SetBits(GPIOC, STEP_PIN);
    //         Delay(1000);  // Adjust the delay for stepper speed
    //         GPIO_ResetBits(GPIOC, STEP_PIN);
    //         Delay(1000);
    //     }


    //     Delay(800000);


    if (GPIO_ReadInputDataBit(GPIOC, LIMIT1_PIN) == Bit_RESET) {
            printf("LIMIT1 Pressed\r\n");
            GPIO_SetBits(GPIOC, DIR_PIN);  // Set direction to CW
        } else if (GPIO_ReadInputDataBit(GPIOC, LIMIT2_PIN) == Bit_RESET) {
            printf("LIMIT2 Pressed\r\n");
            GPIO_ResetBits(GPIOC, DIR_PIN);  // Set direction to CCW
        }

        // Step the motor
        GPIO_SetBits(GPIOC, STEP_PIN);
        Delay(1000);
        GPIO_ResetBits(GPIOC, STEP_PIN);
        Delay(1000);

    }
	
	return 0; 
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
}

/**
 * @brief  Configures the GPIO Peripheral.
 * @note
 * @param  None
 * @retval None
 */
static void GPIO_Config(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_15;
    GPIO_InitStructure.GPIO_Direction = GPIO_Direction_OUT;
    GPIO_InitStructure.GPIO_AF = PAD_AF1;
    GPIO_Init(GPIOC, &GPIO_InitStructure);

    // Configure the pins for the stepper motor control
    GPIO_InitStructure.GPIO_Pin = DIR_PIN | STEP_PIN;
    GPIO_Init(GPIOC, &GPIO_InitStructure);

    //Configure the pins for the limit switches as input
    GPIO_InitStructure.GPIO_Pin = LIMIT1_PIN | LIMIT2_PIN;
    GPIO_InitStructure.GPIO_Direction = GPIO_Direction_IN;
    GPIO_Init(GPIOC, &GPIO_InitStructure);
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