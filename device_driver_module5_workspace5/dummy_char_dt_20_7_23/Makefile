#obj-m := simple_module.o
#obj-m := simple_module_export.o
#obj-m += simple_module_use.o
#obj-m := simple_module_param.o
obj-m := dummy_chrdev.o

ARCH=arm
CROSS_COMPILE=arm-poky-linux-musleabi-
KERN_DIR = /home/bipul/Desktop/phytec_ojt_training/linux_porting_workspace4/main_device_tree_linux_kernel/linux-rba5d2x
HOST_KERN_DIR = /lib/modules/$(shell uname -r)/build/

all:
	make ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KERN_DIR) M=$(PWD) modules

clean: 
	make ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KERN_DIR) M=$(PWD) clean

host:
	make -C $(HOST_KERN_DIR) M=$(PWD) modules

clean:
	make -C $(HOST_KERN_DIR) M=$(PWD) clean
