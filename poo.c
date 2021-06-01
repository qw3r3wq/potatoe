#include "pico/stdlib.h"

#define GPIO_ON 1
#define GPIO_OFF 0
#define LED_PIN 25

int main(void) {
	gpio_init(LED_PIN, GPIO_OUT);

	while (true) {
		gpio_put(LED_PIN, GPIO_ON);
		sleep_ms(2000);
		gpio_put(LED_PIN, GPIO_OFF);
		sleep_ms(2000);
	}
}

