obj-m:=device.o
all:
	make -C /usr/src/linux-headers-$(shell uname -r) M=$(PWD) modules KBUILD_EXTRA_SYMBOLS=$(PWD)/../reg_bus/Module.symvers
clean:
	make -C /usr/src/linux-headers-$(shell uname -r) M=$(PWD) clean
