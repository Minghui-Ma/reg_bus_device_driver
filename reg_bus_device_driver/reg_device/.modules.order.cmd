cmd_/home/marcus/reg_bus_device_driver/reg_device/modules.order := {   echo /home/marcus/reg_bus_device_driver/reg_device/device.ko; :; } | awk '!x[$$0]++' - > /home/marcus/reg_bus_device_driver/reg_device/modules.order