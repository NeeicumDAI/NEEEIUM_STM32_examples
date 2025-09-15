char buffer [1]; //Uart Buffer
read_flag = 0; //local variable 

while (true)
{
	HAL_ADC_Start_IT(&hadc1);
	if (read_flag)
	{
		//o valor vai estar errado, char != uint32
		uint32_t raw = HAL_ADC_GetValue(&hadc1);
		sprint(buffer, "%d%%\n\r",(raw*100)/0xFFFF);
		//Atenção a resolução do ADC!!!
		HAL_UART_Transmit_IT(&huart3, buffer, 7);
		read_flag = 0;
	}
	HAL_Delay(1000);
}
