/*
 * File:   main.c
 * Author: 19180066
 *
 * Created on 9 de Março de 2020, 10:14
 */


#include <xc.h>
#include "config.h"

#define  LED1     PORTDbits.RD1   // Apelido
#define  LED0     PORTDbits.RD0   // Apelido
#define  CHAVE0   PORTDbits.RD2   // Apelido
#define  CHAVE1   PORTDbits.RD3   // Apelido



void main(void)
{
    LED1=0;
    LED0=0;
    TRISDbits.TRISD0=0;
    TRISDbits.TRISD1=0;
    TRISDbits.TRISD2=1;
    TRISDbits.TRISD3=1;
    
    while(1)
    {
     if(LED1=1)
        {
            LED0=0;
             __delay_ms(500);            
        }
        if(LED0=1)
        {
            LED1=0;
             __delay_ms(500);
        }

        if(CHAVE0=1)     //CHAVE0
        {
            if(LED1=1)
        {
            LED0=0;
             __delay_ms(1000);          
        }

        if(LED0=1)
        {
            LED1=0;
             __delay_ms(1000);
        }
 
        }

       
        if(CHAVE1=0)    //CHAVE1 
        {
            if(LED1=1)
        {
            LED0=0;
             __delay_ms(1000);       
               
        }
        
        
        if(LED0=1)
        {
            LED1=0;
             __delay_ms(1000);
        }
        }
        
 
        if(CHAVE0&&CHAVE1==1)     //CHAVE 1 E 2
        {
              if(LED1=1)
        {
            LED0=0;
             __delay_ms(2000);       
               
        }
        
        
        if(LED0=1)
        {
            LED1=0;
             __delay_ms(2000);
        }
 
        }
  
       
    }
            
            
    
    
    
    
    
            
            
            
}
