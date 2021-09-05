#include <linux/device.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/string.h>

MODULE_LICENSE("GPL");

/*当一个新设备或者驱动被添加到这个总线时,该方法被调用。用于判断指定的驱动程序是否能处理指定的设备。若可以,则返回非零值。*/
static int my_match(struct device *dev, struct device_driver *driver)
{
        return !strncmp(dev->kobj.name, driver->name, strlen(driver->name));
}


/*声明总线*/
struct bus_type my_bus_type = {
        .name = "my_bus",  //总线名字
        .match = my_match, //总线match函数指针
};
EXPORT_SYMBOL(my_bus_type);

/*模块加载函数*/
static int __init my_bus_init(void)
{
        int ret;

        /*注册总线*/
        ret = bus_register(&my_bus_type);
        return ret;
}

/*模块卸载函数*/
static void my_bus_exit(void)
{
        bus_unregister(&my_bus_type);
}

module_init(my_bus_init);
module_exit(my_bus_exit);
