
#include <avr/io.h>
#include <util/delay.h>

#define PIN_USED 5

int main(void){
	// Configuração do PC5 como saída
	DDRC |= (1<<PIN_USED);

	double ms_delay = 100;

    //loop infinito	
	while(1){
		//Escrevendo 1 no pino escolhido 
		PORTC |= (1<<PIN_USED);

		_delay_ms(ms_delay);
		
		PORTC &= ~(1<<PIN_USED);
	}
}
