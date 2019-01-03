/*
 * hello−1.c − The simplest kernel module.
 */

#include <linux/module.h> /* Needed by all modules */
#include <linux/kernel.h> /* Needed for KERN_INFO */
#include <linux/init.h> /* Nedded for module_init */

int hello(void)
{
    printk(KERN_DEBUG "Hello world 1.\n");
    return 0;
}

void bye(void)
{
    printk(KERN_DEBUG "Goodbye world 1.\n");
}

module_init(hello);
module_exit(bye);
