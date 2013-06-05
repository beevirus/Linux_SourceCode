#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb11e775, "module_layout" },
	{ 0xc1895f84, "register_netdevice" },
	{ 0x4817a6b0, "sdio_writeb" },
	{ 0x5bcb1c32, "sdio_readb" },
	{ 0x6d26bb71, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2b688622, "complete_and_exit" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x349cba85, "strchr" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd1671060, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0xc7ec6c27, "strspn" },
	{ 0x89177421, "wake_lock_destroy" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xa8cde9a7, "remove_wait_queue" },
	{ 0x5ab68df7, "sdio_enable_func" },
	{ 0xa9b45071, "mmc_pm_gpio_ctrl" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x2d9cb533, "sdio_claim_irq" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x7a3e1c08, "skb_clone" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb0bb9c02, "down_interruptible" },
	{ 0xdda9e423, "wake_lock" },
	{ 0x97723e02, "filp_close" },
	{ 0x4e830a3e, "strnicmp" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3028e855, "init_timer_key" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0x4a37af33, "___dma_single_cpu_to_dev" },
	{ 0x6c1ce5ce, "strcspn" },
	{ 0x55b74b46, "wake_unlock" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x1bc50150, "skb_realloc_headroom" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x810b3618, "param_ops_string" },
	{ 0x6427e2d8, "netif_rx" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x4bbec70b, "kernel_read" },
	{ 0x59e5c224, "sdio_writel" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0xac84e060, "sunximmc_rescan_card" },
	{ 0x5f754e5a, "memset" },
	{ 0x73b86fe4, "netif_rx_ni" },
	{ 0xdc798d37, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xdb3877d, "___dma_single_dev_to_cpu" },
	{ 0x71c90087, "memcmp" },
	{ 0x66118ff, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x328a05f1, "strncpy" },
	{ 0xebbe1d21, "register_netdev" },
	{ 0xd1ca37a8, "dma_free_coherent" },
	{ 0x3e0ff887, "sdio_readl" },
	{ 0x74526fee, "wireless_send_event" },
	{ 0x3cfedb3f, "register_pm_notifier" },
	{ 0x84b183ae, "strncmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xe483e8ab, "skb_push" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xb3efc72d, "down" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x1298ac43, "mod_timer" },
	{ 0x80ab0c30, "add_timer" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbae1172d, "skb_pull" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x6ab98070, "dev_kfree_skb_any" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0x1a11622f, "dma_alloc_coherent" },
	{ 0x1344c16c, "dev_open" },
	{ 0x61651be, "strcat" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x57525adb, "sdio_readsb" },
	{ 0x23ce93ff, "sdio_unregister_driver" },
	{ 0xe5062922, "sdio_f0_writeb" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x9f984513, "strrchr" },
	{ 0x80f82a09, "kmem_cache_alloc" },
	{ 0x99d8a28e, "__alloc_skb" },
	{ 0x18195c80, "sdio_release_irq" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xf045cd70, "wake_lock_timeout" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x6a64f14f, "eth_type_trans" },
	{ 0x392e6fd6, "sdio_f0_readb" },
	{ 0x57a6504e, "vsnprintf" },
	{ 0x5941766a, "sched_setscheduler" },
	{ 0xb9e52429, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xd723ef9c, "sdio_memcpy_toio" },
	{ 0x1dcfa1c2, "sdio_writew" },
	{ 0xfe634f58, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xde5d1761, "wake_lock_init" },
	{ 0x5edfcdd7, "dev_alloc_name" },
	{ 0x75a17bed, "prepare_to_wait" },
	{ 0x8cf51d15, "up" },
	{ 0x6892088c, "unregister_pm_notifier" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0x8893fa5d, "finish_wait" },
	{ 0x7e9ebb05, "kernel_thread" },
	{ 0x3806b4e5, "sdio_reset_comm" },
	{ 0xb227ae83, "unregister_early_suspend" },
	{ 0x7af6fcad, "unregister_netdev" },
	{ 0x40a6f522, "__arm_ioremap" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x60f71cfa, "complete" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x86f5cf52, "__netif_schedule" },
	{ 0xc1062fc5, "sdio_readw" },
	{ 0xf39c5744, "sdio_register_driver" },
	{ 0x45700a96, "consume_skb" },
	{ 0x94b68fa4, "sdio_memcpy_fromio" },
	{ 0xdcc6a8ab, "sdio_claim_host" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xac8dec7, "skb_put" },
	{ 0x80d817ab, "wait_for_completion_timeout" },
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0x176156dd, "down_timeout" },
	{ 0x3b81e9f3, "sdio_set_block_size" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0x51d45f, "sdio_disable_func" },
	{ 0x2ba7bcb2, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
	{ 0x84119e45, "filp_open" },
	{ 0x6048df44, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c*v02D0d0000*");
MODULE_ALIAS("sdio:c*v02D0d0492*");
MODULE_ALIAS("sdio:c*v02D0d0493*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4319*");
MODULE_ALIAS("sdio:c00v*d*");
