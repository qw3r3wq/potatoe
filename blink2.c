#include "pico/stdlib.h"

int main() {
//#ifndef PICO_DEFAULT_LED_PIN
//#warning blink example requires a board with a regular LED
//#else
    //const uint LED_PIN = PICO_DEFAULT_LED_PIN;
    const uint LED_PIN = 25;
    const uint LED2_PIN = 0;
    gpio_init(LED_PIN);
    gpio_init(LED2_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    //gpio_set_dir(LED2_PIN, GPIO_OUT);
    while (true) {
        gpio_put(LED_PIN, 1);
        gpio_put(LED2_PIN, 0);
        sleep_ms(2500);
        gpio_put(LED_PIN, 0);
        gpio_put(LED2_PIN, 1);
        sleep_ms(2500);
    }
//#endif
}

