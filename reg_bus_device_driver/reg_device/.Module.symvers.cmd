cmd_/home/marcus/reg_bus_device_driver/reg_device/Module.symvers := sed 's/ko$$/o/' /home/marcus/reg_bus_device_driver/reg_device/modules.order | scripts/mod/modpost -m -a   -o /home/marcus/reg_bus_device_driver/reg_device/Module.symvers -e -i Module.symvers -i /home/marcus/reg_bus_device_driver/reg_device/../reg_bus/Module.symvers   -T -
