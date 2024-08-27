# Arduino_DHT22multiplesensors

Multiple ds18b20 sensors on a multiple buses have proved problematic reliabilitywise. 
This is a test and try to see the potential issues with multiple dht22 sensors on a single arduino uno board.
Test scenario is 20m CW1308 25 pair copper cable, no pull-up resistors as the circuitry inside the DHT22 seems to have one.
Quick test showed they worked with or without a 10k resistor. 
No doubt there is a hardware limit caused by the board, which could be the reason for the symptoms i experienced with the ds18b20(s). 
Using one pin per sensor is likely to push me to getting the more 'expensive' mega at some point as 11 sensors is a small amount to tie up and rs232 port on the RTI for.
ok, maybe that's the time to get into ip.
