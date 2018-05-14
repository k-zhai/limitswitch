#include <stdint.h>
#include <unistd.h>
#include <stdio.h>
#include <math.h>
extern "C" {
  #include <roboticscape.h>
  #include <rc_usefulincludes.h>
}

int main() {
	rc_initialize();
	rc_set_default_pinmux();
	unsigned int pin = 10; //add to user config
	rc_gpio_export(pin); //output pin
	rc_gpio_set_dir(pin, INPUT_PIN); //assigns pin to INPUT_PIN 
	if (rc_gpio_get_value(pin) == HIGH) {
		//publish some message
	} else if (rc_gpio_get_value(pin) == LOW) {
		//publish some other message
	} else {
		//not high or low 
	}
	rc_gpio_unexport(pin); //import pin
	return 0;
}
