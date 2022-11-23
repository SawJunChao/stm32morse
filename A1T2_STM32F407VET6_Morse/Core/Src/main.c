/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */
void space (void);
void dot (void);
void dash (void);
void space (void);
void letterA (void);
void letterB (void);
void letterC (void);
void letterD (void);
void letterE (void);
void letterF (void);
void letterG (void);
void letterH (void);
void letterI (void);
void letterJ (void);
void letterK (void);
void letterL (void);
void letterM (void);
void letterN (void);
void letterO (void);
void letterP (void);
void letterQ (void);
void letterR (void);
void letterS (void);
void letterT (void);
void letterU (void);
void letterV (void);
void letterW (void);
void letterX (void);
void letterY (void);
void letterZ (void);
void number1 (void);
void number2 (void);
void number3 (void);
void number4 (void);
void number5 (void);
void number6 (void);
void number7 (void);
void number8 (void);
void number9 (void);
void number0 (void);
/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

	  // Generating Morse code for letter V, S and J
	  letterV();
	  letterS();
	  letterJ();

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_RESET);

  /*Configure GPIO pin : PA6 */
  GPIO_InitStruct.Pin = GPIO_PIN_6;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

// Space between letters (3 units delay)
void space (void){
	HAL_Delay(1200);
}

// Space between parts of same letter (1 unit delay)
void shortSpace (void){
	HAL_Delay(400);
}

// Creates dot for Morse (1 unit delay)
void dot (void){
	//Turn on LED connected to PA6
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_RESET);
	shortSpace();
	//Turn off LED connected to PA6
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
	shortSpace();
}

// Creates dash for Morse (3 units delay)
void dash (void){
	//Turn on LED connected to PA6
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_RESET);
	space();
	//Turn off LED connected to PA6
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
	shortSpace();
}

// Morse functions for each letters and the numbers
void letterA (void) {dot();dash();space();}
void letterB (void) {dash();dot();dot();dot();space();}
void letterC (void) {dash();dot();dash();dot();space();}
void letterD (void) {dash();dot();dot();space();}
void letterE (void) {dot();space();}
void letterF (void) {dot();dot();dash();dot();space();}
void letterG (void) {dash();dash();dot();space();}
void letterH (void) {dot();dot();dot();dot();space();}
void letterI (void) {dot();dot();space();}
void letterJ (void) {dot();dash();dash();dash();space();}
void letterK (void) {dash();dot();dash();space();}
void letterL (void) {dot();dash();dot();dot();space();}
void letterM (void) {dash();dash();space();}
void letterN (void) {dash();dot();space();}
void letterO (void) {dash();dash();dash();space();}
void letterP (void) {dot();dash();dash();dot();space();}
void letterQ (void) {dash();dash();dot();dash();space();}
void letterR (void) {dot();dash();dot();space();}
void letterS (void) {dot();dot();dot();space();}
void letterT (void) {dash();space();}
void letterU (void) {dot();dot();dash();space();}
void letterV (void) {dot();dot();dot();dash();space();}
void letterW (void) {dot();dash();dash();space();}
void letterX (void) {dash();dot();dot();dash();space();}
void letterY (void) {dash();dot();dash();dash();space();}
void letterZ (void) {dash();dash();dot();dot();space();}
void number1 (void) {dot();dash();dash();dash();dash();space();}
void number2 (void) {dot();dot();dash();dash();dash();space();}
void number3 (void) {dot();dot();dot();dash();dash();space();}
void number4 (void) {dot();dot();dot();dot();dash();space();}
void number5 (void) {dot();dot();dot();dot();dot();space();}
void number6 (void) {dash();dot();dot();dot();dot();space();}
void number7 (void) {dash();dash();dot();dot();dot();space();}
void number8 (void) {dash();dash();dash();dot();dot();space();}
void number9 (void) {dash();dash();dash();dash();dot();space();}
void number0 (void) {dash();dash();dash();dash();dash();space();}

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
