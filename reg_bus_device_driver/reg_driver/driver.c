#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/device.h>

extern struct bus_type my_bus_type;

int my_probe(struct device *dev)
{
	printk("probe success...");
	return 0;
}

struct device_driver my_driver = {
	.name = "my_dev",
	.bus = &my_bus_type,
	.probe = my_probe,
};

static int __init mydriver_init(void)
{
	return driver_register(&my_driver);
}

static void __exit mydriver_exit(void)
{
	driver_unregister(&my_driver);
}

module_init(mydriver_init);
module_exit(mydriver_exit);
MODULE_LICENSE("GPL");
