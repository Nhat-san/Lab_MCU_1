
#include "main.h"

void SystemClock_Config(void);
static void MX_GPIO_Init(void);

void display7SEG(int num){
	if(num == 1){
		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, GPIO_PIN_SET);
	}
	else if(num == 2){
		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, GPIO_PIN_RESET);
	}
	else if(num == 3){
		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, GPIO_PIN_RESET);
	}
	else if(num == 4){
		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, GPIO_PIN_RESET);
	}
	else if(num == 5){
		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, GPIO_PIN_RESET);
	}
	else if(num == 6){
		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, GPIO_PIN_RESET);
	}
	else if(num == 7){
		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, GPIO_PIN_SET);
	}
	else if(num == 8){
		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, GPIO_PIN_RESET);
	}
	else if(num == 9){
		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, GPIO_PIN_RESET);
	}
	else if(num == 0){
		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, GPIO_PIN_SET);
	}
}

int main(void)
{

  HAL_Init();

  SystemClock_Config();

  MX_GPIO_Init();

  enum TrafficLightState {
        RED1_GREEN2,
     	RED1_YELLOW2,
     	GREEN1_RED2,
     	YELLOW1_RED2,
       };
  int counter_Light = 3;
  int counter_Seg = 5;
  enum TrafficLightState currentState = RED1_GREEN2;
  enum TrafficLightState nextState = currentState;
  while (1)
  {
	  if(counter_Seg < 0){
		  counter_Seg = 5;
	  }
	  display7SEG(counter_Seg--);
	  switch (currentState) {
	  	  case RED1_GREEN2:

	  		  HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, GPIO_PIN_SET);
	    	  HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, GPIO_PIN_RESET);

	    	  HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, GPIO_PIN_SET);
	    	  HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, GPIO_PIN_RESET);
	    	  counter_Light--;

	    	  if(counter_Light <= 0)
	    	  {
	    		  nextState = RED1_YELLOW2;
	    		  counter_Light = 2;
	    	  }
	    	  break;
	  	  case RED1_YELLOW2:

	    	  HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, GPIO_PIN_RESET);
	    	  HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, GPIO_PIN_SET);
	    	  counter_Light--;

	    	  if(counter_Light <= 0)
	    	  {
	    		  nextState = GREEN1_RED2;
	    		  counter_Light = 3;
	    	  }
	    	  break;
	  	  case GREEN1_RED2:

	  		  HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, GPIO_PIN_SET);
	  		  HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, GPIO_PIN_RESET);

	  		  HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, GPIO_PIN_SET);
	  		  HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, GPIO_PIN_RESET);
	  		  counter_Light--;

	    	  if(counter_Light <= 0)
	    	  {
	    		  nextState = YELLOW1_RED2;
	    		  counter_Light = 2;
	    	  }
	    	  break;
	      case YELLOW1_RED2:

	    	  HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, GPIO_PIN_SET);
	    	  HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, GPIO_PIN_RESET);

	    	  counter_Light--;

	    	  if(counter_Light <= 0)
	    	  {
	    		  nextState = RED1_GREEN2;
	    		  counter_Light = 3;
	    	  }
	    	  break;
	    }
	    currentState = nextState;
	    HAL_Delay(1000);
    /* USER CODE BEGIN 3 */
  }
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

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
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, RED1_Pin|YELLOW1_Pin|GREEN1_Pin|RED2_Pin
                          |YELLOW2_Pin|GREEN2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, SegA_Pin|SegB_Pin|SegC_Pin|SegD_Pin
                          |SegE_Pin|SegF_Pin|SegG_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : RED1_Pin YELLOW1_Pin GREEN1_Pin RED2_Pin
                           YELLOW2_Pin GREEN2_Pin */
  GPIO_InitStruct.Pin = RED1_Pin|YELLOW1_Pin|GREEN1_Pin|RED2_Pin
                          |YELLOW2_Pin|GREEN2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : SegA_Pin SegB_Pin SegC_Pin SegD_Pin
                           SegE_Pin SegF_Pin SegG_Pin */
  GPIO_InitStruct.Pin = SegA_Pin|SegB_Pin|SegC_Pin|SegD_Pin
                          |SegE_Pin|SegF_Pin|SegG_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

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

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
