lightswitch: light_switch.h light_switch.cpp main.cpp
	g++ -Wall -std=c++11 main.cpp light_switch.cpp -g -o lightswitch

.PHONY: clean
clean:
	rm -f lightswitch
