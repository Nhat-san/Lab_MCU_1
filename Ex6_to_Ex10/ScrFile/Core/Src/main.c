
#include "main.h"

void SystemClock_Config(void);
static void MX_GPIO_Init(void);

void clearAllClock(){
	HAL_GPIO_WritePin(Hour1_GPIO_Port, Hour1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Hour2_GPIO_Port, Hour2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Hour3_GPIO_Port, Hour3_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Hour4_GPIO_Port, Hour4_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Hour5_GPIO_Port, Hour5_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Hour6_GPIO_Port, Hour6_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Hour7_GPIO_Port, Hour7_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Hour8_GPIO_Port, Hour8_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Hour9_GPIO_Port, Hour9_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Hour10_GPIO_Port, Hour10_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Hour11_GPIO_Port, Hour11_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Hour12_GPIO_Port, Hour12_Pin, GPIO_PIN_RESET);
}
//Ex6
void setNumberOnClock(int num){
	if(num == 1){
		HAL_GPIO_WritePin(Hour1_GPIO_Port, Hour1_Pin, GPIO_PIN_SET);
	}
	else if(num == 2){
		HAL_GPIO_WritePin(Hour2_GPIO_Port, Hour2_Pin, GPIO_PIN_SET);
	}
	else if(num == 3){
		HAL_GPIO_WritePin(Hour3_GPIO_Port, Hour3_Pin, GPIO_PIN_SET);
	}
	else if(num == 4){
		HAL_GPIO_WritePin(Hour4_GPIO_Port, Hour4_Pin, GPIO_PIN_SET);
	}
	else if(num == 5){
		HAL_GPIO_WritePin(Hour5_GPIO_Port, Hour5_Pin, GPIO_PIN_SET);
	}
	else if(num == 6){
		HAL_GPIO_WritePin(Hour6_GPIO_Port, Hour6_Pin, GPIO_PIN_SET);
	}
	else if(num == 7){
		HAL_GPIO_WritePin(Hour7_GPIO_Port, Hour7_Pin, GPIO_PIN_SET);
	}
	else if(num == 8){
		HAL_GPIO_WritePin(Hour8_GPIO_Port, Hour8_Pin, GPIO_PIN_SET);
	}
	else if(num == 9){
		HAL_GPIO_WritePin(Hour9_GPIO_Port, Hour9_Pin, GPIO_PIN_SET);
	}
	else if(num == 10){
		HAL_GPIO_WritePin(Hour10_GPIO_Port, Hour10_Pin, GPIO_PIN_SET);
	}
	else if(num == 11){
		HAL_GPIO_WritePin(Hour11_GPIO_Port, Hour11_Pin, GPIO_PIN_SET);
	}
	else if(num == 0){
		HAL_GPIO_WritePin(Hour12_GPIO_Port, Hour12_Pin, GPIO_PIN_SET);
	}
}
void clearNumberOnClock(int num){
	if(num == 1){
		HAL_GPIO_WritePin(Hour1_GPIO_Port, Hour1_Pin, GPIO_PIN_RESET);
	}
	else if(num == 2){
		HAL_GPIO_WritePin(Hour2_GPIO_Port, Hour2_Pin, GPIO_PIN_RESET);
	}
	else if(num == 3){
		HAL_GPIO_WritePin(Hour3_GPIO_Port, Hour3_Pin, GPIO_PIN_RESET);
	}
	else if(num == 4){
		HAL_GPIO_WritePin(Hour4_GPIO_Port, Hour4_Pin, GPIO_PIN_RESET);
	}
	else if(num == 5){
		HAL_GPIO_WritePin(Hour5_GPIO_Port, Hour5_Pin, GPIO_PIN_RESET);
	}
	else if(num == 6){
		HAL_GPIO_WritePin(Hour6_GPIO_Port, Hour6_Pin, GPIO_PIN_RESET);
	}
	else if(num == 7){
		HAL_GPIO_WritePin(Hour7_GPIO_Port, Hour7_Pin, GPIO_PIN_RESET);
	}
	else if(num == 8){
		HAL_GPIO_WritePin(Hour8_GPIO_Port, Hour8_Pin, GPIO_PIN_RESET);
	}
	else if(num == 9){
		HAL_GPIO_WritePin(Hour9_GPIO_Port, Hour9_Pin, GPIO_PIN_RESET);
	}
	else if(num == 10){
		HAL_GPIO_WritePin(Hour10_GPIO_Port, Hour10_Pin, GPIO_PIN_RESET);
	}
	else if(num == 11){
		HAL_GPIO_WritePin(Hour11_GPIO_Port, Hour11_Pin, GPIO_PIN_RESET);
	}
	else if(num == 0){
		HAL_GPIO_WritePin(Hour12_GPIO_Port, Hour12_Pin, GPIO_PIN_RESET);
	}
}
int main(void)
{

  HAL_Init();

  SystemClock_Config();

  MX_GPIO_Init();

  int Hour_clk = 0;
  int hour = 16, minute = 40, sec = 30;
  int ex = 10;
  while (1)
  {
	  //test
	  //Ex6+Ex8
	  if(ex == 6){
		  setNumberOnClock(Hour_clk++);
	  	  if(Hour_clk >= 12){
		  	  Hour_clk = 0;
	  	  }
	  }

	  //Ex7
	  else if(ex == 7){
		  setNumberOnClock(Hour_clk++);
		  clearAllClock();
	  }

	  //Ex9
	  else if(ex == 9){
		  clearNumberOnClock(Hour_clk++);
	  	  if(Hour_clk >= 12){
		  	  Hour_clk = 0;
	  	  }
	  }

	  else if(ex == 10){

		  if(hour > 12){
			  hour = hour % 12;
		  }
		  if(minute > 12){
			  minute = minute / 5;
		  }
		  if(sec > 12){
			  sec = sec / 5;
		  }
		  setNumberOnClock(hour);
		  setNumberOnClock(minute);
		  setNumberOnClock(sec);
	  }

	  HAL_Delay(1000);
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
  HAL_GPIO_WritePin(GPIOA, Hour1_Pin|Hour2_Pin|Hour3_Pin|Hour4_Pin
                          |Hour5_Pin|Hour6_Pin|Hour7_Pin|Hour8_Pin|Hour9_Pin
                          |Hour10_Pin|Hour11_Pin|Hour12_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : Hour1_Pin Hour2_Pin Hour3_Pin Hour4_Pin
                           Hour5_Pin Hour7_Pin Hour8_Pin Hour9_Pin
                           Hour10_Pin Hour11_Pin Hour12_Pin */
  GPIO_InitStruct.Pin = Hour1_Pin|Hour2_Pin|Hour3_Pin|Hour4_Pin
                          |Hour5_Pin|Hour6_Pin|Hour7_Pin|Hour8_Pin|Hour9_Pin
                          |Hour10_Pin|Hour11_Pin|Hour12_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

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
