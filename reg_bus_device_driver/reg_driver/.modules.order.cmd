cmd_/home/marcus/reg_bus_device_driver/reg_driver/modules.order := {   echo /home/marcus/reg_bus_device_driver/reg_driver/driver.ko; :; } | awk '!x[$$0]++' - > /home/marcus/reg_bus_device_driver/reg_driver/modules.order