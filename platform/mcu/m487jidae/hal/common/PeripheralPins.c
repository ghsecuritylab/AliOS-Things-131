/* Microcontroller Library
 * Copyright (c) 2015-2016 Nuvoton
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "PeripheralPins.h"

//*** ADC ***
const PinMap PinMap_ADC[] = { 
    { PB_0, 	 ADC_0_0 , 	 SYS_GPB_MFPL_PB0MFP_EADC0_CH0  },
    { PB_1, 	 ADC_0_1 , 	 SYS_GPB_MFPL_PB1MFP_EADC0_CH1  },
    { PB_2, 	 ADC_0_2 , 	 SYS_GPB_MFPL_PB2MFP_EADC0_CH2  },
    { PB_3, 	 ADC_0_3 , 	 SYS_GPB_MFPL_PB3MFP_EADC0_CH3  },
    { PB_4, 	 ADC_0_4 , 	 SYS_GPB_MFPL_PB4MFP_EADC0_CH4  },
    { PB_5, 	 ADC_0_5 , 	 SYS_GPB_MFPL_PB5MFP_EADC0_CH5  },
    { PB_6, 	 ADC_0_6 , 	 SYS_GPB_MFPL_PB6MFP_EADC0_CH6  },
    { PB_7, 	 ADC_0_7 , 	 SYS_GPB_MFPL_PB7MFP_EADC0_CH7  },
    { PB_8, 	 ADC_0_8 , 	 SYS_GPB_MFPH_PB8MFP_EADC0_CH8  },
    { PB_9, 	 ADC_0_9 , 	 SYS_GPB_MFPH_PB9MFP_EADC0_CH9  },
    { PB_10, 	 ADC_0_10 ,  SYS_GPB_MFPH_PB10MFP_EADC0_CH10  },
    { PB_11, 	 ADC_0_11 ,  SYS_GPB_MFPH_PB11MFP_EADC0_CH11  },
    { PB_12, 	 ADC_0_12 ,  SYS_GPB_MFPH_PB12MFP_EADC0_CH12  },
    { PB_13, 	 ADC_0_13 ,  SYS_GPB_MFPH_PB13MFP_EADC0_CH13  },
    { PB_14, 	 ADC_0_14 ,  SYS_GPB_MFPH_PB14MFP_EADC0_CH14  },
    { PB_15, 	 ADC_0_15 ,  SYS_GPB_MFPH_PB15MFP_EADC0_CH15  },
    { NC,   NC,    0 }
};

//*** DAC ***
const PinMap PinMap_DAC[] = { 
    { PB_12, 	 DAC_0 , 	 SYS_GPB_MFPH_PB12MFP_DAC0_OUT  },
    { PB_13, 	 DAC_1 , 	 SYS_GPB_MFPH_PB13MFP_DAC1_OUT  },
    { NC,   NC,    0 }
};

//*** I2C_SDA ***
const PinMap PinMap_I2C_SDA[] = { 
    { PA_0, 	 I2C_2 , 	 SYS_GPA_MFPL_PA0MFP_I2C2_SDA  },
    { PA_2, 	 I2C_1 , 	 SYS_GPA_MFPL_PA2MFP_I2C1_SDA  },
    { PA_4, 	 I2C_0 , 	 SYS_GPA_MFPL_PA4MFP_I2C0_SDA  },
    { PA_6, 	 I2C_1 , 	 SYS_GPA_MFPL_PA6MFP_I2C1_SDA  },
    { PA_10, 	 I2C_2 , 	 SYS_GPA_MFPH_PA10MFP_I2C2_SDA  },
    { PA_13, 	 I2C_1 , 	 SYS_GPA_MFPH_PA13MFP_I2C1_SDA  },
    { PA_15, 	 I2C_2 , 	 SYS_GPA_MFPH_PA15MFP_I2C2_SDA  },
    { PB_0, 	 I2C_1 , 	 SYS_GPB_MFPL_PB0MFP_I2C1_SDA  },
    { PB_4, 	 I2C_0 , 	 SYS_GPB_MFPL_PB4MFP_I2C0_SDA  },
    { PB_10, 	 I2C_1 , 	 SYS_GPB_MFPH_PB10MFP_I2C1_SDA  },
    { PB_12, 	 I2C_2 , 	 SYS_GPB_MFPH_PB12MFP_I2C2_SDA  },
    { PC_0, 	 I2C_0 , 	 SYS_GPC_MFPL_PC0MFP_I2C0_SDA  },
    { PC_4, 	 I2C_1 , 	 SYS_GPC_MFPL_PC4MFP_I2C1_SDA  },
    { PC_8, 	 I2C_0 , 	 SYS_GPC_MFPH_PC8MFP_I2C0_SDA  },
    { PC_11, 	 I2C_0 , 	 SYS_GPC_MFPH_PC11MFP_I2C0_SDA  },
    { PD_0, 	 I2C_2 , 	 SYS_GPD_MFPL_PD0MFP_I2C2_SDA  },
    { PD_4, 	 I2C_1 , 	 SYS_GPD_MFPL_PD4MFP_I2C1_SDA  },
    { PD_6, 	 I2C_0 , 	 SYS_GPD_MFPL_PD6MFP_I2C0_SDA  },
    { PD_8, 	 I2C_2 , 	 SYS_GPD_MFPH_PD8MFP_I2C2_SDA  },
    { PE_0, 	 I2C_1 , 	 SYS_GPE_MFPL_PE0MFP_I2C1_SDA  },
    { PF_1, 	 I2C_1 , 	 SYS_GPF_MFPL_PF1MFP_I2C1_SDA  },
    { PF_2, 	 I2C_0 , 	 SYS_GPF_MFPL_PF2MFP_I2C0_SDA  },
    { PG_1, 	 I2C_0 , 	 SYS_GPG_MFPL_PG1MFP_I2C0_SDA  },
    { PG_3, 	 I2C_1 , 	 SYS_GPG_MFPL_PG3MFP_I2C1_SDA  },
    { PH_3, 	 I2C_0 , 	 SYS_GPH_MFPL_PH3MFP_I2C0_SDA  },
    { PH_9, 	 I2C_2 , 	 SYS_GPH_MFPH_PH9MFP_I2C2_SDA  },
    { NC,   NC,    0 }
};

//*** I2C_SCL ***
const PinMap PinMap_I2C_SCL[] = { 
    { PA_1, 	 I2C_2 , 	 SYS_GPA_MFPL_PA1MFP_I2C2_SCL  },
    { PA_3, 	 I2C_1 , 	 SYS_GPA_MFPL_PA3MFP_I2C1_SCL  },
    { PA_5, 	 I2C_0 , 	 SYS_GPA_MFPL_PA5MFP_I2C0_SCL  },
    { PA_7, 	 I2C_1 , 	 SYS_GPA_MFPL_PA7MFP_I2C1_SCL  },
    { PA_11, 	 I2C_2 , 	 SYS_GPA_MFPH_PA11MFP_I2C2_SCL  },
    { PA_12, 	 I2C_1 , 	 SYS_GPA_MFPH_PA12MFP_I2C1_SCL  },
    { PA_14, 	 I2C_2 , 	 SYS_GPA_MFPH_PA14MFP_I2C2_SCL  },
    { PB_1, 	 I2C_1 , 	 SYS_GPB_MFPL_PB1MFP_I2C1_SCL  },
    { PB_5, 	 I2C_0 , 	 SYS_GPB_MFPL_PB5MFP_I2C0_SCL  },
    { PB_11, 	 I2C_1 , 	 SYS_GPB_MFPH_PB11MFP_I2C1_SCL  },
    { PB_13, 	 I2C_2 , 	 SYS_GPB_MFPH_PB13MFP_I2C2_SCL  },
    { PC_1, 	 I2C_0 , 	 SYS_GPC_MFPL_PC1MFP_I2C0_SCL  },
    { PC_5, 	 I2C_1 , 	 SYS_GPC_MFPL_PC5MFP_I2C1_SCL  },
    { PC_12, 	 I2C_0 , 	 SYS_GPC_MFPH_PC12MFP_I2C0_SCL  },
    { PD_1, 	 I2C_2 , 	 SYS_GPD_MFPL_PD1MFP_I2C2_SCL  },
    { PD_5, 	 I2C_1 , 	 SYS_GPD_MFPL_PD5MFP_I2C1_SCL  },
    { PD_7, 	 I2C_0 , 	 SYS_GPD_MFPL_PD7MFP_I2C0_SCL  },
    { PD_9, 	 I2C_2 , 	 SYS_GPD_MFPH_PD9MFP_I2C2_SCL  },
    { PE_1, 	 I2C_1 , 	 SYS_GPE_MFPL_PE1MFP_I2C1_SCL  },
    { PE_13, 	 I2C_0 , 	 SYS_GPE_MFPH_PE13MFP_I2C0_SCL  },
    { PF_0, 	 I2C_1 , 	 SYS_GPF_MFPL_PF0MFP_I2C1_SCL  },
    { PF_3, 	 I2C_0 , 	 SYS_GPF_MFPL_PF3MFP_I2C0_SCL  },
    { PG_0, 	 I2C_0 , 	 SYS_GPG_MFPL_PG0MFP_I2C0_SCL  },
    { PG_2, 	 I2C_1 , 	 SYS_GPG_MFPL_PG2MFP_I2C1_SCL  },
    { PH_2, 	 I2C_0 , 	 SYS_GPH_MFPL_PH2MFP_I2C0_SCL  },
    { PH_8, 	 I2C_2 , 	 SYS_GPH_MFPH_PH8MFP_I2C2_SCL  },
    { NC,   NC,    0 }
};

//*** PWM ***
const PinMap PinMap_PWM[] = { 
    { PA_0, 	 PWM_0_5, 	 SYS_GPA_MFPL_PA0MFP_EPWM0_CH5  },
    { PA_1, 	 PWM_0_4, 	 SYS_GPA_MFPL_PA1MFP_EPWM0_CH4  },
    { PA_2, 	 PWM_0_3, 	 SYS_GPA_MFPL_PA2MFP_EPWM0_CH3  },
    { PA_3, 	 PWM_0_2, 	 SYS_GPA_MFPL_PA3MFP_EPWM0_CH2  },
    { PA_4, 	 PWM_0_1, 	 SYS_GPA_MFPL_PA4MFP_EPWM0_CH1  },
    { PA_5, 	 PWM_0_0, 	 SYS_GPA_MFPL_PA5MFP_EPWM0_CH0  },
    { PA_6, 	 PWM_1_5, 	 SYS_GPA_MFPL_PA6MFP_EPWM1_CH5  },
    { PA_7, 	 PWM_1_4, 	 SYS_GPA_MFPL_PA7MFP_EPWM1_CH4  },
    { PB_0, 	 PWM_0_5, 	 SYS_GPB_MFPL_PB0MFP_EPWM0_CH5  },
    { PB_0, 	 PWM_1_5, 	 SYS_GPB_MFPL_PB0MFP_EPWM1_CH5  },
    { PB_1, 	 PWM_0_4, 	 SYS_GPB_MFPL_PB1MFP_EPWM0_CH4  },
    { PB_1, 	 PWM_1_4, 	 SYS_GPB_MFPL_PB1MFP_EPWM1_CH4  },
    { PB_2, 	 PWM_0_3, 	 SYS_GPB_MFPL_PB2MFP_EPWM0_CH3  },
    { PB_3, 	 PWM_0_2, 	 SYS_GPB_MFPL_PB3MFP_EPWM0_CH2  },
    { PB_4, 	 PWM_0_1, 	 SYS_GPB_MFPL_PB4MFP_EPWM0_CH1  },
    { PB_5, 	 PWM_0_0, 	 SYS_GPB_MFPL_PB5MFP_EPWM0_CH0  },
    { PB_6, 	 PWM_1_5, 	 SYS_GPB_MFPL_PB6MFP_EPWM1_CH5  },
    { PB_7, 	 PWM_1_4, 	 SYS_GPB_MFPL_PB7MFP_EPWM1_CH4  },
    { PB_12, 	 PWM_1_3, 	 SYS_GPB_MFPH_PB12MFP_EPWM1_CH3  },
    { PB_13, 	 PWM_1_2, 	 SYS_GPB_MFPH_PB13MFP_EPWM1_CH2  },
    { PB_14, 	 PWM_1_1, 	 SYS_GPB_MFPH_PB14MFP_EPWM1_CH1  },
    { PB_15, 	 PWM_1_0, 	 SYS_GPB_MFPH_PB15MFP_EPWM1_CH0  },
    { PC_0, 	 PWM_1_5, 	 SYS_GPC_MFPL_PC0MFP_EPWM1_CH5  },
    { PC_1, 	 PWM_1_4, 	 SYS_GPC_MFPL_PC1MFP_EPWM1_CH4  },
    { PC_2, 	 PWM_1_3, 	 SYS_GPC_MFPL_PC2MFP_EPWM1_CH3  },
    { PC_3, 	 PWM_1_2, 	 SYS_GPC_MFPL_PC3MFP_EPWM1_CH2  },
    { PC_4, 	 PWM_1_1, 	 SYS_GPC_MFPL_PC4MFP_EPWM1_CH1  },
    { PC_5, 	 PWM_1_0, 	 SYS_GPC_MFPL_PC5MFP_EPWM1_CH0  },
    { PC_6, 	 PWM_1_3, 	 SYS_GPC_MFPL_PC6MFP_EPWM1_CH3  },
    { PC_7, 	 PWM_1_2, 	 SYS_GPC_MFPL_PC7MFP_EPWM1_CH2  },
    { PC_8, 	 PWM_1_1, 	 SYS_GPC_MFPH_PC8MFP_EPWM1_CH1  },
    { PC_9, 	 PWM_1_3, 	 SYS_GPC_MFPH_PC9MFP_EPWM1_CH3  },
    { PC_10, 	 PWM_1_2, 	 SYS_GPC_MFPH_PC10MFP_EPWM1_CH2  },
    { PC_11, 	 PWM_1_1, 	 SYS_GPC_MFPH_PC11MFP_EPWM1_CH1  },
    { PC_12, 	 PWM_1_0, 	 SYS_GPC_MFPH_PC12MFP_EPWM1_CH0  },
    { PD_14, 	 PWM_0_4, 	 SYS_GPD_MFPH_PD14MFP_EPWM0_CH4  },
    { PE_2, 	 PWM_0_5, 	 SYS_GPE_MFPL_PE2MFP_EPWM0_CH5  },
    { PE_3, 	 PWM_0_4, 	 SYS_GPE_MFPL_PE3MFP_EPWM0_CH4  },
    { PE_4, 	 PWM_0_3, 	 SYS_GPE_MFPL_PE4MFP_EPWM0_CH3  },
    { PE_5, 	 PWM_0_2, 	 SYS_GPE_MFPL_PE5MFP_EPWM0_CH2  },
    { PE_6, 	 PWM_0_1, 	 SYS_GPE_MFPL_PE6MFP_EPWM0_CH1  },
    { PE_7, 	 PWM_0_0, 	 SYS_GPE_MFPL_PE7MFP_EPWM0_CH0  },
    { PE_8, 	 PWM_0_0, 	 SYS_GPE_MFPH_PE8MFP_EPWM0_CH0  },
    { PE_9, 	 PWM_0_1, 	 SYS_GPE_MFPH_PE9MFP_EPWM0_CH1  },
    { PE_10, 	 PWM_0_2, 	 SYS_GPE_MFPH_PE10MFP_EPWM0_CH2  },
    { PE_11, 	 PWM_0_3, 	 SYS_GPE_MFPH_PE11MFP_EPWM0_CH3  },
    { PE_12, 	 PWM_0_4, 	 SYS_GPE_MFPH_PE12MFP_EPWM0_CH4  },
    { PE_13, 	 PWM_0_5, 	 SYS_GPE_MFPH_PE13MFP_EPWM0_CH5  },
    { PE_13, 	 PWM_1_0, 	 SYS_GPE_MFPH_PE13MFP_EPWM1_CH0  },
    { PG_5, 	 PWM_0_3, 	 SYS_GPG_MFPL_PG5MFP_EPWM0_CH3  },
    { PG_6, 	 PWM_0_2, 	 SYS_GPG_MFPL_PG6MFP_EPWM0_CH2  },
    { PG_7, 	 PWM_0_1, 	 SYS_GPG_MFPL_PG7MFP_EPWM0_CH1  },
    { PG_8, 	 PWM_0_0, 	 SYS_GPG_MFPH_PG8MFP_EPWM0_CH0  },
    { PH_11, 	 PWM_0_5, 	 SYS_GPH_MFPH_PH11MFP_EPWM0_CH5  },
    { NC,   NC,    0 }
};

//*** UART_TX ***
const PinMap PinMap_UART_TX[] = { 
    { PA_1, 	 UART_0 , 	 SYS_GPA_MFPL_PA1MFP_UART0_TXD  },
    { PA_3, 	 UART_4 , 	 SYS_GPA_MFPL_PA3MFP_UART4_TXD  },
    { PA_3, 	 UART_1 , 	 SYS_GPA_MFPL_PA3MFP_UART1_TXD  },
    { PA_5, 	 UART_5 , 	 SYS_GPA_MFPL_PA5MFP_UART5_TXD  },
    { PA_7, 	 UART_0 , 	 SYS_GPA_MFPL_PA7MFP_UART0_TXD  },
    { PA_9, 	 UART_1 , 	 SYS_GPA_MFPH_PA9MFP_UART1_TXD  },
    { PA_12, 	 UART_4 , 	 SYS_GPA_MFPH_PA12MFP_UART4_TXD  },
    { PA_14, 	 UART_0 , 	 SYS_GPA_MFPH_PA14MFP_UART0_TXD  },
    { PB_1, 	 UART_2 , 	 SYS_GPB_MFPL_PB1MFP_UART2_TXD  },
    { PB_3, 	 UART_1 , 	 SYS_GPB_MFPL_PB3MFP_UART1_TXD  },
    { PB_5, 	 UART_5 , 	 SYS_GPB_MFPL_PB5MFP_UART5_TXD  },
    { PB_7, 	 UART_1 , 	 SYS_GPB_MFPL_PB7MFP_UART1_TXD  },
    { PB_9, 	 UART_0 , 	 SYS_GPB_MFPH_PB9MFP_UART0_TXD  },
    { PB_11, 	 UART_4 , 	 SYS_GPB_MFPH_PB11MFP_UART4_TXD  },
    { PB_13, 	 UART_0 , 	 SYS_GPB_MFPH_PB13MFP_UART0_TXD  },
    { PB_15, 	 UART_3 , 	 SYS_GPB_MFPH_PB15MFP_UART3_TXD  },
    { PC_1, 	 UART_2 , 	 SYS_GPC_MFPL_PC1MFP_UART2_TXD  },
    { PC_3, 	 UART_3 , 	 SYS_GPC_MFPL_PC3MFP_UART3_TXD  },
    { PC_5, 	 UART_2 , 	 SYS_GPC_MFPL_PC5MFP_UART2_TXD  },
    { PC_5, 	 UART_4 , 	 SYS_GPC_MFPL_PC5MFP_UART4_TXD  },
    { PC_7, 	 UART_4 , 	 SYS_GPC_MFPL_PC7MFP_UART4_TXD  },
    { PC_10, 	 UART_3 , 	 SYS_GPC_MFPH_PC10MFP_UART3_TXD  },
    { PC_12, 	 UART_0 , 	 SYS_GPC_MFPH_PC12MFP_UART0_TXD  },
    { PC_13, 	 UART_2 , 	 SYS_GPC_MFPH_PC13MFP_UART2_TXD  },
    { PD_1, 	 UART_3 , 	 SYS_GPD_MFPL_PD1MFP_UART3_TXD  },
    { PD_3, 	 UART_0 , 	 SYS_GPD_MFPL_PD3MFP_UART0_TXD  },
    { PD_7, 	 UART_1 , 	 SYS_GPD_MFPL_PD7MFP_UART1_TXD  },
    { PD_11, 	 UART_1 , 	 SYS_GPD_MFPH_PD11MFP_UART1_TXD  },
    { PE_1, 	 UART_3 , 	 SYS_GPE_MFPL_PE1MFP_UART3_TXD  },
    { PE_7, 	 UART_5 , 	 SYS_GPE_MFPL_PE7MFP_UART5_TXD  },
    { PE_8, 	 UART_2 , 	 SYS_GPE_MFPH_PE8MFP_UART2_TXD  },
    { PE_10, 	 UART_3 , 	 SYS_GPE_MFPH_PE10MFP_UART3_TXD  },
    { PE_13, 	 UART_1 , 	 SYS_GPE_MFPH_PE13MFP_UART1_TXD  },
    { PE_14, 	 UART_2 , 	 SYS_GPE_MFPH_PE14MFP_UART2_TXD  },
    { PF_0, 	 UART_1 , 	 SYS_GPF_MFPL_PF0MFP_UART1_TXD  },
    { PF_3, 	 UART_0 , 	 SYS_GPF_MFPL_PF3MFP_UART0_TXD  },
    { PF_4, 	 UART_2 , 	 SYS_GPF_MFPL_PF4MFP_UART2_TXD  },
    { PF_7, 	 UART_4 , 	 SYS_GPF_MFPL_PF7MFP_UART4_TXD  },
    { PG_0, 	 UART_1 , 	 SYS_GPG_MFPL_PG0MFP_UART1_TXD  },
    { PG_1, 	 UART_2 , 	 SYS_GPG_MFPL_PG1MFP_UART2_TXD  },
    { PH_0, 	 UART_5 , 	 SYS_GPH_MFPL_PH0MFP_UART5_TXD  },
    { PH_2, 	 UART_4 , 	 SYS_GPH_MFPL_PH2MFP_UART4_TXD  },
    { PH_8, 	 UART_1 , 	 SYS_GPH_MFPH_PH8MFP_UART1_TXD  },
    { PH_10, 	 UART_4 , 	 SYS_GPH_MFPH_PH10MFP_UART4_TXD  },
    { PH_10, 	 UART_0 , 	 SYS_GPH_MFPH_PH10MFP_UART0_TXD  },
    { NC,   NC,    0 }
};

//*** UART_RX ***
const PinMap PinMap_UART_RX[] = { 
    { PA_0, 	 UART_0 , 	 SYS_GPA_MFPL_PA0MFP_UART0_RXD  },
    { PA_2, 	 UART_4 , 	 SYS_GPA_MFPL_PA2MFP_UART4_RXD  },
    { PA_2, 	 UART_1 , 	 SYS_GPA_MFPL_PA2MFP_UART1_RXD  },
    { PA_4, 	 UART_5 , 	 SYS_GPA_MFPL_PA4MFP_UART5_RXD  },
    { PA_6, 	 UART_0 , 	 SYS_GPA_MFPL_PA6MFP_UART0_RXD  },
    { PA_8, 	 UART_1 , 	 SYS_GPA_MFPH_PA8MFP_UART1_RXD  },
    { PA_13, 	 UART_4 , 	 SYS_GPA_MFPH_PA13MFP_UART4_RXD  },
    { PA_15, 	 UART_0 , 	 SYS_GPA_MFPH_PA15MFP_UART0_RXD  },
    { PB_0, 	 UART_2 , 	 SYS_GPB_MFPL_PB0MFP_UART2_RXD  },
    { PB_2, 	 UART_1 , 	 SYS_GPB_MFPL_PB2MFP_UART1_RXD  },
    { PB_4, 	 UART_5 , 	 SYS_GPB_MFPL_PB4MFP_UART5_RXD  },
    { PB_6, 	 UART_1 , 	 SYS_GPB_MFPL_PB6MFP_UART1_RXD  },
    { PB_8, 	 UART_0 , 	 SYS_GPB_MFPH_PB8MFP_UART0_RXD  },
    { PB_10, 	 UART_4 , 	 SYS_GPB_MFPH_PB10MFP_UART4_RXD  },
    { PB_12, 	 UART_0 , 	 SYS_GPB_MFPH_PB12MFP_UART0_RXD  },
    { PB_14, 	 UART_3 , 	 SYS_GPB_MFPH_PB14MFP_UART3_RXD  },
    { PC_0, 	 UART_2 , 	 SYS_GPC_MFPL_PC0MFP_UART2_RXD  },
    { PC_2, 	 UART_3 , 	 SYS_GPC_MFPL_PC2MFP_UART3_RXD  },
    { PC_4, 	 UART_2 , 	 SYS_GPC_MFPL_PC4MFP_UART2_RXD  },
    { PC_4, 	 UART_4 , 	 SYS_GPC_MFPL_PC4MFP_UART4_RXD  },
    { PC_6, 	 UART_4 , 	 SYS_GPC_MFPL_PC6MFP_UART4_RXD  },
    { PC_8, 	 UART_1 , 	 SYS_GPC_MFPH_PC8MFP_UART1_RXD  },
    { PC_9, 	 UART_3 , 	 SYS_GPC_MFPH_PC9MFP_UART3_RXD  },
    { PC_11, 	 UART_0 , 	 SYS_GPC_MFPH_PC11MFP_UART0_RXD  },
    { PD_0, 	 UART_3 , 	 SYS_GPD_MFPL_PD0MFP_UART3_RXD  },
    { PD_2, 	 UART_0 , 	 SYS_GPD_MFPL_PD2MFP_UART0_RXD  },
    { PD_6, 	 UART_1 , 	 SYS_GPD_MFPL_PD6MFP_UART1_RXD  },
    { PD_10, 	 UART_1 , 	 SYS_GPD_MFPH_PD10MFP_UART1_RXD  },
    { PD_12, 	 UART_2 , 	 SYS_GPD_MFPH_PD12MFP_UART2_RXD  },
    { PE_0, 	 UART_3 , 	 SYS_GPE_MFPL_PE0MFP_UART3_RXD  },
    { PE_6, 	 UART_5 , 	 SYS_GPE_MFPL_PE6MFP_UART5_RXD  },
    { PE_9, 	 UART_2 , 	 SYS_GPE_MFPH_PE9MFP_UART2_RXD  },
    { PE_11, 	 UART_3 , 	 SYS_GPE_MFPH_PE11MFP_UART3_RXD  },
    { PE_15, 	 UART_2 , 	 SYS_GPE_MFPH_PE15MFP_UART2_RXD  },
    { PF_1, 	 UART_1 , 	 SYS_GPF_MFPL_PF1MFP_UART1_RXD  },
    { PF_2, 	 UART_0 , 	 SYS_GPF_MFPL_PF2MFP_UART0_RXD  },
    { PF_5, 	 UART_2 , 	 SYS_GPF_MFPL_PF5MFP_UART2_RXD  },
    { PF_6, 	 UART_4 , 	 SYS_GPF_MFPL_PF6MFP_UART4_RXD  },
    { PG_0, 	 UART_2 , 	 SYS_GPG_MFPL_PG0MFP_UART2_RXD  },
    { PG_1, 	 UART_1 , 	 SYS_GPG_MFPL_PG1MFP_UART1_RXD  },
    { PH_1, 	 UART_5 , 	 SYS_GPH_MFPL_PH1MFP_UART5_RXD  },
    { PH_3, 	 UART_4 , 	 SYS_GPH_MFPL_PH3MFP_UART4_RXD  },
    { PH_9, 	 UART_1 , 	 SYS_GPH_MFPH_PH9MFP_UART1_RXD  },
    { PH_11, 	 UART_4 , 	 SYS_GPH_MFPH_PH11MFP_UART4_RXD  },
    { PH_11, 	 UART_0 , 	 SYS_GPH_MFPH_PH11MFP_UART0_RXD  },
    { NC,   NC,    0 }
};

//*** UART_RTS ***
const PinMap PinMap_UART_RTS[] = { 
    { PA_0, 	 UART_1 , 	 SYS_GPA_MFPL_PA0MFP_UART1_nRTS  },
    { PA_4, 	 UART_0 , 	 SYS_GPA_MFPL_PA4MFP_UART0_nRTS  },
    { PB_3, 	 UART_5 , 	 SYS_GPB_MFPL_PB3MFP_UART5_nRTS  },
    { PB_8, 	 UART_1 , 	 SYS_GPB_MFPH_PB8MFP_UART1_nRTS  },
    { PB_10, 	 UART_0 , 	 SYS_GPB_MFPH_PB10MFP_UART0_nRTS  },
    { PB_13, 	 UART_3 , 	 SYS_GPB_MFPH_PB13MFP_UART3_nRTS  },
    { PB_14, 	 UART_0 , 	 SYS_GPB_MFPH_PB14MFP_UART0_nRTS  },
    { PC_3, 	 UART_2 , 	 SYS_GPC_MFPL_PC3MFP_UART2_nRTS  },
    { PC_6, 	 UART_0 , 	 SYS_GPC_MFPL_PC6MFP_UART0_nRTS  },
    { PD_3, 	 UART_3 , 	 SYS_GPD_MFPL_PD3MFP_UART3_nRTS  },
    { PD_8, 	 UART_2 , 	 SYS_GPD_MFPH_PD8MFP_UART2_nRTS  },
    { PE_0, 	 UART_4 , 	 SYS_GPE_MFPL_PE0MFP_UART4_nRTS  },
    { PE_12, 	 UART_1 , 	 SYS_GPE_MFPH_PE12MFP_UART1_nRTS  },
    { PE_13, 	 UART_4 , 	 SYS_GPE_MFPH_PE13MFP_UART4_nRTS  },
    { PF_4, 	 UART_2 , 	 SYS_GPF_MFPL_PF4MFP_UART2_nRTS  },
    { PH_2, 	 UART_5 , 	 SYS_GPH_MFPL_PH2MFP_UART5_nRTS  },
    { PH_8, 	 UART_3 , 	 SYS_GPH_MFPH_PH8MFP_UART3_nRTS  },
    { NC,   NC,    0 }
};

//*** UART_CTS ***
const PinMap PinMap_UART_CTS[] = { 
    { PA_1, 	 UART_1 , 	 SYS_GPA_MFPL_PA1MFP_UART1_nCTS  },
    { PA_5, 	 UART_0 , 	 SYS_GPA_MFPL_PA5MFP_UART0_nCTS  },
    { PB_2, 	 UART_5 , 	 SYS_GPB_MFPL_PB2MFP_UART5_nCTS  },
    { PB_9, 	 UART_1 , 	 SYS_GPB_MFPH_PB9MFP_UART1_nCTS  },
    { PB_11, 	 UART_0 , 	 SYS_GPB_MFPH_PB11MFP_UART0_nCTS  },
    { PB_12, 	 UART_3 , 	 SYS_GPB_MFPH_PB12MFP_UART3_nCTS  },
    { PB_15, 	 UART_0 , 	 SYS_GPB_MFPH_PB15MFP_UART0_nCTS  },
    { PC_2, 	 UART_2 , 	 SYS_GPC_MFPL_PC2MFP_UART2_nCTS  },
    { PC_7, 	 UART_0 , 	 SYS_GPC_MFPL_PC7MFP_UART0_nCTS  },
    { PC_8, 	 UART_4 , 	 SYS_GPC_MFPH_PC8MFP_UART4_nCTS  },
    { PD_2, 	 UART_3 , 	 SYS_GPD_MFPL_PD2MFP_UART3_nCTS  },
    { PD_9, 	 UART_2 , 	 SYS_GPD_MFPH_PD9MFP_UART2_nCTS  },
    { PE_1, 	 UART_4 , 	 SYS_GPE_MFPL_PE1MFP_UART4_nCTS  },
    { PE_11, 	 UART_1 , 	 SYS_GPE_MFPH_PE11MFP_UART1_nCTS  },
    { PF_5, 	 UART_2 , 	 SYS_GPF_MFPL_PF5MFP_UART2_nCTS  },
    { PH_3, 	 UART_5 , 	 SYS_GPH_MFPL_PH3MFP_UART5_nCTS  },
    { PH_9, 	 UART_3 , 	 SYS_GPH_MFPH_PH9MFP_UART3_nCTS  },
    { NC,   NC,    0 }
};

//*** SPI_MOSI ***
const PinMap PinMap_SPI_MOSI[] = { 
    { PA_0, 	 SPI_0 , 	 SYS_GPA_MFPL_PA0MFP_SPI0_MOSI  },
    { PA_8, 	 SPI_2 , 	 SYS_GPA_MFPH_PA8MFP_SPI2_MOSI  },
    { PA_15, 	 SPI_2 , 	 SYS_GPA_MFPH_PA15MFP_SPI2_MOSI  },
    { PB_4, 	 SPI_1 , 	 SYS_GPB_MFPL_PB4MFP_SPI1_MOSI  },
    { PB_8, 	 SPI_3 , 	 SYS_GPB_MFPH_PB8MFP_SPI3_MOSI  },
    { PB_12, 	 SPI_0 , 	 SYS_GPB_MFPH_PB12MFP_SPI0_MOSI  },
    { PC_2, 	 SPI_1 , 	 SYS_GPC_MFPL_PC2MFP_SPI1_MOSI  },
    { PC_6, 	 SPI_1 , 	 SYS_GPC_MFPL_PC6MFP_SPI1_MOSI  },
    { PC_11, 	 SPI_3 , 	 SYS_GPC_MFPH_PC11MFP_SPI3_MOSI  },
    { PD_0, 	 SPI_0 , 	 SYS_GPD_MFPL_PD0MFP_SPI0_MOSI  },
    { PD_6, 	 SPI_1 , 	 SYS_GPD_MFPL_PD6MFP_SPI1_MOSI  },
    { PE_0, 	 SPI_1 , 	 SYS_GPE_MFPL_PE0MFP_SPI1_MOSI  },
    { PE_2, 	 SPI_3 , 	 SYS_GPE_MFPL_PE2MFP_SPI3_MOSI  },
    { PE_10, 	 SPI_2 , 	 SYS_GPE_MFPH_PE10MFP_SPI2_MOSI  },
    { PF_6, 	 SPI_0 , 	 SYS_GPF_MFPL_PF6MFP_SPI0_MOSI  },
    { PF_11, 	 SPI_2 , 	 SYS_GPF_MFPH_PF11MFP_SPI2_MOSI  },
    { PG_8, 	 SPI_3 , 	 SYS_GPG_MFPH_PG8MFP_SPI3_MOSI  },
    { PH_5, 	 SPI_1 , 	 SYS_GPH_MFPL_PH5MFP_SPI1_MOSI  },
    { NC,   NC,    0 }
};

//*** SPI_MISO ***
const PinMap PinMap_SPI_MISO[] = { 
    { PA_1, 	 SPI_0 , 	 SYS_GPA_MFPL_PA1MFP_SPI0_MISO  },
    { PA_9, 	 SPI_2 , 	 SYS_GPA_MFPH_PA9MFP_SPI2_MISO  },
    { PA_14, 	 SPI_2 , 	 SYS_GPA_MFPH_PA14MFP_SPI2_MISO  },
    { PB_5, 	 SPI_1 , 	 SYS_GPB_MFPL_PB5MFP_SPI1_MISO  },
    { PB_9, 	 SPI_3 , 	 SYS_GPB_MFPH_PB9MFP_SPI3_MISO  },
    { PB_13, 	 SPI_0 , 	 SYS_GPB_MFPH_PB13MFP_SPI0_MISO  },
    { PC_3, 	 SPI_1 , 	 SYS_GPC_MFPL_PC3MFP_SPI1_MISO  },
    { PC_7, 	 SPI_1 , 	 SYS_GPC_MFPL_PC7MFP_SPI1_MISO  },
    { PC_12, 	 SPI_3 , 	 SYS_GPC_MFPH_PC12MFP_SPI3_MISO  },
    { PD_1, 	 SPI_0 , 	 SYS_GPD_MFPL_PD1MFP_SPI0_MISO  },
    { PD_7, 	 SPI_1 , 	 SYS_GPD_MFPL_PD7MFP_SPI1_MISO  },
    { PE_1, 	 SPI_1 , 	 SYS_GPE_MFPL_PE1MFP_SPI1_MISO  },
    { PE_3, 	 SPI_3 , 	 SYS_GPE_MFPL_PE3MFP_SPI3_MISO  },
    { PE_9, 	 SPI_2 , 	 SYS_GPE_MFPH_PE9MFP_SPI2_MISO  },
    { PF_7, 	 SPI_0 , 	 SYS_GPF_MFPL_PF7MFP_SPI0_MISO  },
    { PG_4, 	 SPI_2 , 	 SYS_GPG_MFPL_PG4MFP_SPI2_MISO  },
    { PG_7, 	 SPI_3 , 	 SYS_GPG_MFPL_PG7MFP_SPI3_MISO  },
    { PH_4, 	 SPI_1 , 	 SYS_GPH_MFPL_PH4MFP_SPI1_MISO  },
    { NC,   NC,    0 }
};

//*** SPI_SCLK ***
const PinMap PinMap_SPI_SCLK[] = { 
    { PA_2, 	 SPI_0 , 	 SYS_GPA_MFPL_PA2MFP_SPI0_CLK  },
    { PA_7, 	 SPI_1 , 	 SYS_GPA_MFPL_PA7MFP_SPI1_CLK  },
    { PA_10, 	 SPI_2 , 	 SYS_GPA_MFPH_PA10MFP_SPI2_CLK  },
    { PA_13, 	 SPI_2 , 	 SYS_GPA_MFPH_PA13MFP_SPI2_CLK  },
    { PB_3, 	 SPI_1 , 	 SYS_GPB_MFPL_PB3MFP_SPI1_CLK  },
    { PB_11, 	 SPI_3 , 	 SYS_GPB_MFPH_PB11MFP_SPI3_CLK  },
    { PB_14, 	 SPI_0 , 	 SYS_GPB_MFPH_PB14MFP_SPI0_CLK  },
    { PC_1, 	 SPI_1 , 	 SYS_GPC_MFPL_PC1MFP_SPI1_CLK  },
    { PC_10, 	 SPI_3 , 	 SYS_GPC_MFPH_PC10MFP_SPI3_CLK  },
    { PD_2, 	 SPI_0 , 	 SYS_GPD_MFPL_PD2MFP_SPI0_CLK  },
    { PD_5, 	 SPI_1 , 	 SYS_GPD_MFPL_PD5MFP_SPI1_CLK  },
    { PE_4, 	 SPI_3 , 	 SYS_GPE_MFPL_PE4MFP_SPI3_CLK  },
    { PE_8, 	 SPI_2 , 	 SYS_GPE_MFPH_PE8MFP_SPI2_CLK  },
    { PF_8, 	 SPI_0 , 	 SYS_GPF_MFPH_PF8MFP_SPI0_CLK  },
    { PG_3, 	 SPI_2 , 	 SYS_GPG_MFPL_PG3MFP_SPI2_CLK  },
    { PG_6, 	 SPI_3 , 	 SYS_GPG_MFPL_PG6MFP_SPI3_CLK  },
    { PH_6, 	 SPI_1 , 	 SYS_GPH_MFPL_PH6MFP_SPI1_CLK  },
    { PH_8, 	 SPI_1 , 	 SYS_GPH_MFPH_PH8MFP_SPI1_CLK  },
    { NC,   NC,    0 }
};

//*** SPI_SSEL ***
const PinMap PinMap_SPI_SSEL[] = { 
    { PA_3, 	 SPI_0 , 	 SYS_GPA_MFPL_PA3MFP_SPI0_SS  },
    { PA_6, 	 SPI_1 , 	 SYS_GPA_MFPL_PA6MFP_SPI1_SS  },
    { PA_11, 	 SPI_2 , 	 SYS_GPA_MFPH_PA11MFP_SPI2_SS  },
    { PA_12, 	 SPI_2 , 	 SYS_GPA_MFPH_PA12MFP_SPI2_SS  },
    { PB_2, 	 SPI_1 , 	 SYS_GPB_MFPL_PB2MFP_SPI1_SS  },
    { PB_10, 	 SPI_3 , 	 SYS_GPB_MFPH_PB10MFP_SPI3_SS  },
    { PB_15, 	 SPI_0 , 	 SYS_GPB_MFPH_PB15MFP_SPI0_SS  },
    { PC_0, 	 SPI_1 , 	 SYS_GPC_MFPL_PC0MFP_SPI1_SS  },
    { PC_9, 	 SPI_3 , 	 SYS_GPC_MFPH_PC9MFP_SPI3_SS  },
    { PD_3, 	 SPI_0 , 	 SYS_GPD_MFPL_PD3MFP_SPI0_SS  },
    { PD_4, 	 SPI_1 , 	 SYS_GPD_MFPL_PD4MFP_SPI1_SS  },
    { PE_5, 	 SPI_3 , 	 SYS_GPE_MFPL_PE5MFP_SPI3_SS  },
    { PE_11, 	 SPI_2 , 	 SYS_GPE_MFPH_PE11MFP_SPI2_SS  },
    { PF_9, 	 SPI_0 , 	 SYS_GPF_MFPH_PF9MFP_SPI0_SS  },
    { PG_2, 	 SPI_2 , 	 SYS_GPG_MFPL_PG2MFP_SPI2_SS  },
    { PG_5, 	 SPI_3 , 	 SYS_GPG_MFPL_PG5MFP_SPI3_SS  },
    { PH_7, 	 SPI_1 , 	 SYS_GPH_MFPL_PH7MFP_SPI1_SS  },
    { PH_9, 	 SPI_1 , 	 SYS_GPH_MFPH_PH9MFP_SPI1_SS  },
    { NC,   NC,    0 }
};

//*** QSPI_D0 ***
const PinMap PinMap_QSPI_D0[] = { 
    { PA_0, 	 QSPI_0 , 	 SYS_GPA_MFPL_PA0MFP_QSPI0_MOSI0  },
    { PC_0, 	 QSPI_0 , 	 SYS_GPC_MFPL_PC0MFP_QSPI0_MOSI0  },
    { PE_0, 	 QSPI_0 , 	 SYS_GPE_MFPL_PE0MFP_QSPI0_MOSI0  },
    { NC,   NC,    0 }
};

//*** QSPI_D1 ***
const PinMap PinMap_QSPI_D1[] = { 
    { PA_1, 	 QSPI_0 , 	 SYS_GPA_MFPL_PA1MFP_QSPI0_MISO0  },
    { PC_1, 	 QSPI_0 , 	 SYS_GPC_MFPL_PC1MFP_QSPI0_MISO0  },
    { PE_1, 	 QSPI_0 , 	 SYS_GPE_MFPL_PE1MFP_QSPI0_MISO0  },
    { NC,   NC,    0 }
};

//*** QSPI_D2 ***
const PinMap PinMap_QSPI_D2[] = { 
    { PA_4, 	 QSPI_0 , 	 SYS_GPA_MFPL_PA4MFP_QSPI0_MOSI1  },
    { PC_4, 	 QSPI_0 , 	 SYS_GPC_MFPL_PC4MFP_QSPI0_MOSI1  },
    { PH_11, 	 QSPI_0 , 	 SYS_GPH_MFPH_PH11MFP_QSPI0_MOSI1  },
    { NC,   NC,    0 }
};

//*** QSPI_D3 ***
const PinMap PinMap_QSPI_D3[] = { 
    { PA_5, 	 QSPI_0 , 	 SYS_GPA_MFPL_PA5MFP_QSPI0_MISO1  },
    { PC_5, 	 QSPI_0 , 	 SYS_GPC_MFPL_PC5MFP_QSPI0_MISO1  },
    { PH_10, 	 QSPI_0 , 	 SYS_GPH_MFPH_PH10MFP_QSPI0_MISO1  },
    { NC,   NC,    0 }
};

//*** QSPI_SCLK ***
const PinMap PinMap_QSPI_SCLK[] = { 
    { PA_2, 	 QSPI_0 , 	 SYS_GPA_MFPL_PA2MFP_QSPI0_CLK  },
    { PC_2, 	 QSPI_0 , 	 SYS_GPC_MFPL_PC2MFP_QSPI0_CLK  },
    { PC_14, 	 QSPI_0 , 	 SYS_GPC_MFPH_PC14MFP_QSPI0_CLK  },
    { PF_2, 	 QSPI_0 , 	 SYS_GPF_MFPL_PF2MFP_QSPI0_CLK  },
    { PH_8, 	 QSPI_0 , 	 SYS_GPH_MFPH_PH8MFP_QSPI0_CLK  },
    { NC,   NC,    0 }
};

//*** QSPI_SSEL ***
const PinMap PinMap_QSPI_SSEL[] = { 
    { PA_3, 	 QSPI_0 , 	 SYS_GPA_MFPL_PA3MFP_QSPI0_SS  },
    { PC_3, 	 QSPI_0 , 	 SYS_GPC_MFPL_PC3MFP_QSPI0_SS  },
    { PH_9, 	 QSPI_0 , 	 SYS_GPH_MFPH_PH9MFP_QSPI0_SS  },
    { NC,   NC,    0 }
};

//*** SDH_DAT0 ***
const PinMap PinMap_SDH_DAT0[] = { 
    { PA_0, 	 SDH_1 , 	 SYS_GPA_MFPL_PA0MFP_SD1_DAT0  },
    { PA_8, 	 SDH_1 , 	 SYS_GPA_MFPH_PA8MFP_SD1_DAT0  },
    { PB_2, 	 SDH_0 , 	 SYS_GPB_MFPL_PB2MFP_SD0_DAT0  },
    { PE_2, 	 SDH_0 , 	 SYS_GPE_MFPL_PE2MFP_SD0_DAT0  },
    { PG_12, 	 SDH_1 , 	 SYS_GPG_MFPH_PG12MFP_SD1_DAT0  },
    { NC,   NC,    0 }
};

//*** SDH_DAT1 ***
const PinMap PinMap_SDH_DAT1[] = { 
    { PA_1, 	 SDH_1 , 	 SYS_GPA_MFPL_PA1MFP_SD1_DAT1  },
    { PA_9, 	 SDH_1 , 	 SYS_GPA_MFPH_PA9MFP_SD1_DAT1  },
    { PB_3, 	 SDH_0 , 	 SYS_GPB_MFPL_PB3MFP_SD0_DAT1  },
    { PE_3, 	 SDH_0 , 	 SYS_GPE_MFPL_PE3MFP_SD0_DAT1  },
    { PG_11, 	 SDH_1 , 	 SYS_GPG_MFPH_PG11MFP_SD1_DAT1  },
    { NC,   NC,    0 }
};

//*** SDH_DAT2 ***
const PinMap PinMap_SDH_DAT2[] = { 
    { PA_2, 	 SDH_1 , 	 SYS_GPA_MFPL_PA2MFP_SD1_DAT2  },
    { PA_10, 	 SDH_1 , 	 SYS_GPA_MFPH_PA10MFP_SD1_DAT2  },
    { PB_4, 	 SDH_0 , 	 SYS_GPB_MFPL_PB4MFP_SD0_DAT2  },
    { PE_4, 	 SDH_0 , 	 SYS_GPE_MFPL_PE4MFP_SD0_DAT2  },
    { PG_10, 	 SDH_1 , 	 SYS_GPG_MFPH_PG10MFP_SD1_DAT2  },
    { NC,   NC,    0 }
};

//*** SDH_DAT3 ***
const PinMap PinMap_SDH_DAT3[] = { 
    { PA_3, 	 SDH_1 , 	 SYS_GPA_MFPL_PA3MFP_SD1_DAT3  },
    { PA_11, 	 SDH_1 , 	 SYS_GPA_MFPH_PA11MFP_SD1_DAT3  },
    { PB_5, 	 SDH_0 , 	 SYS_GPB_MFPL_PB5MFP_SD0_DAT3  },
    { PE_5, 	 SDH_0 , 	 SYS_GPE_MFPL_PE5MFP_SD0_DAT3  },
    { PG_9, 	 SDH_1 , 	 SYS_GPG_MFPH_PG9MFP_SD1_DAT3  },
    { NC,   NC,    0 }
};

//*** SDH_CMD ***
const PinMap PinMap_SDH_CMD[] = { 
    { PA_5, 	 SDH_1 , 	 SYS_GPA_MFPL_PA5MFP_SD1_CMD  },
    { PB_0, 	 SDH_0 , 	 SYS_GPB_MFPL_PB0MFP_SD0_CMD  },
    { PB_7, 	 SDH_1 , 	 SYS_GPB_MFPL_PB7MFP_SD1_CMD  },
    { PE_7, 	 SDH_0 , 	 SYS_GPE_MFPL_PE7MFP_SD0_CMD  },
    { PG_13, 	 SDH_1 , 	 SYS_GPG_MFPH_PG13MFP_SD1_CMD  },
    { NC,   NC,    0 }
};

//*** SDH_CLK ***
const PinMap PinMap_SDH_CLK[] = { 
    { PA_4, 	 SDH_1 , 	 SYS_GPA_MFPL_PA4MFP_SD1_CLK  },
    { PB_1, 	 SDH_0 , 	 SYS_GPB_MFPL_PB1MFP_SD0_CLK  },
    { PB_6, 	 SDH_1 , 	 SYS_GPB_MFPL_PB6MFP_SD1_CLK  },
    { PE_6, 	 SDH_0 , 	 SYS_GPE_MFPL_PE6MFP_SD0_CLK  },
    { PG_14, 	 SDH_1 , 	 SYS_GPG_MFPH_PG14MFP_SD1_CLK  },
    { NC,   NC,    0 }
};

//*** SDH_CD ***
const PinMap PinMap_SDH_CD[] = { 
    { PA_6, 	 SDH_1 , 	 SYS_GPA_MFPL_PA6MFP_SD1_nCD  },
    { PB_12, 	 SDH_0 , 	 SYS_GPB_MFPH_PB12MFP_SD0_nCD  },
    { PD_13, 	 SDH_0 , 	 SYS_GPD_MFPH_PD13MFP_SD0_nCD  },
    { PE_14, 	 SDH_1 , 	 SYS_GPE_MFPH_PE14MFP_SD1_nCD  },
    { PG_15, 	 SDH_1 , 	 SYS_GPG_MFPH_PG15MFP_SD1_nCD  },
    { NC,   NC,    0 }
};

//*** CAN_TX ***
const PinMap PinMap_CAN_TX[] = { 
    { PA_5, 	 CAN_0 , 	 SYS_GPA_MFPL_PA5MFP_CAN0_TXD  },
    { PA_12, 	 CAN_0 , 	 SYS_GPA_MFPH_PA12MFP_CAN0_TXD  },
    { PB_7, 	 CAN_1 , 	 SYS_GPB_MFPL_PB7MFP_CAN1_TXD  },
    { PB_11, 	 CAN_0 , 	 SYS_GPB_MFPH_PB11MFP_CAN0_TXD  },
    { PC_3, 	 CAN_1 , 	 SYS_GPC_MFPL_PC3MFP_CAN1_TXD  },
    { PC_5, 	 CAN_0 , 	 SYS_GPC_MFPL_PC5MFP_CAN0_TXD  },
    { PC_10, 	 CAN_1 , 	 SYS_GPC_MFPH_PC10MFP_CAN1_TXD  },
    { PC_13, 	 CAN_1 , 	 SYS_GPC_MFPH_PC13MFP_CAN1_TXD  },
    { PD_11, 	 CAN_0 , 	 SYS_GPD_MFPH_PD11MFP_CAN0_TXD  },
    { PE_7, 	 CAN_1 , 	 SYS_GPE_MFPL_PE7MFP_CAN1_TXD  },
    { PE_14, 	 CAN_0 , 	 SYS_GPE_MFPH_PE14MFP_CAN0_TXD  },
    { PG_0, 	 CAN_1 , 	 SYS_GPG_MFPL_PG0MFP_CAN1_TXD  },
    { NC,   NC,    0 }
};

//*** CAN_RX ***
const PinMap PinMap_CAN_RX[] = { 
    { PA_4, 	 CAN_0 , 	 SYS_GPA_MFPL_PA4MFP_CAN0_RXD  },
    { PA_13, 	 CAN_0 , 	 SYS_GPA_MFPH_PA13MFP_CAN0_RXD  },
    { PB_6, 	 CAN_1 , 	 SYS_GPB_MFPL_PB6MFP_CAN1_RXD  },
    { PB_10, 	 CAN_0 , 	 SYS_GPB_MFPH_PB10MFP_CAN0_RXD  },
    { PC_2, 	 CAN_1 , 	 SYS_GPC_MFPL_PC2MFP_CAN1_RXD  },
    { PC_4, 	 CAN_0 , 	 SYS_GPC_MFPL_PC4MFP_CAN0_RXD  },
    { PC_9, 	 CAN_1 , 	 SYS_GPC_MFPH_PC9MFP_CAN1_RXD  },
    { PD_10, 	 CAN_0 , 	 SYS_GPD_MFPH_PD10MFP_CAN0_RXD  },
    { PD_12, 	 CAN_1 , 	 SYS_GPD_MFPH_PD12MFP_CAN1_RXD  },
    { PE_6, 	 CAN_1 , 	 SYS_GPE_MFPL_PE6MFP_CAN1_RXD  },
    { PE_15, 	 CAN_0 , 	 SYS_GPE_MFPH_PE15MFP_CAN0_RXD  },
    { PG_1, 	 CAN_1 , 	 SYS_GPG_MFPL_PG1MFP_CAN1_RXD  },
    { NC,   NC,    0 }
};

