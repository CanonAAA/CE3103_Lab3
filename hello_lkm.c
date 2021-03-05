#include <linux/init.h> // needed by the macros module_init and exit
#include <linux/module.h> // needed by all modules
#include <linux/kernel.h> // needed by KERN_ definition
static int __init hello_init(void)
{ printk(KERN_ALERT "Hello from kernel world\n");
 return 0; // 0 for success, negative for failure
}
Static void __exit hello_exit(void)
{ printk(KERN_ALERT "Goodbye from kernel world\n");
}
module_init(xxxx); // macro to execute module's initialize routine
module_exit(xxxx); // macro to execute module's exit routine
MODULE_LICENSE("GPL");
MODULE_AUTHOR(�CE3103");
MODULE_DESCRIPTION("Simple Hello module");
MODULE_VERSION(�V1"); 