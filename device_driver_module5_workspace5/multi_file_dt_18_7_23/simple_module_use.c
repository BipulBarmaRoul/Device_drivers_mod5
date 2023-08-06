#include<linux/init.h>
#include<linux/module.h>
#include<linux/version.h>
#include<linux/kernel.h>

int my_func(void);
int simple_module_init(void)
{
	printk(KERN_ALERT "I am @ init %s function\n", __FUNCTION__);
	printk("HELLO WORLD \n");
	my_func();
	return 0;
}

void simple_module_exit(void)
{
printk(KERN_ALERT "Iam @ init %s function\n", __FUNCTION__);
}

module_init(simple_module_init);
module_exit(simple_module_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("BIPUL");
MODULE_DESCRIPTION("This is a basic sample driver ");
