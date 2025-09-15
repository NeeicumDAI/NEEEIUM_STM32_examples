char buffer [1]; //Uart Buffer
read_flag = 0; //local variable 

while (true)
{
	HAL_UART_Recive_IT(&huart3, buffer, 1);
	if (read_flag)
	{
		if (buffer[0] == 'h')
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0,GPIO_PIN_SET);
		else if (buffer[0] == '1')
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_RESET);
		read_flag = 0;
	}
}
