#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/device.h>

extern struct bus_type my_bus_type;

struct device my_dev = {
    .init_name = "my_dev",  
    .bus = &my_bus_type, 
};

static int __init mydevice_init(void)
{
	return device_register(&my_dev);
}

static void __exit mydevice_exit(void)
{
	device_unregister(&my_dev);
}

module_init(mydevice_init);
module_exit(mydevice_exit);
MODULE_LICENSE("GPL");
