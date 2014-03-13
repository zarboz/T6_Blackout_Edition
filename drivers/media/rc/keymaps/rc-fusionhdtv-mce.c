/* fusionhdtv-mce.h - Keytable for fusionhdtv_mce Remote Controller
 *
 * keymap imported from ir-keymaps.c
 *
 * Copyright (c) 2010 by Mauro Carvalho Chehab <mchehab@redhat.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#include <media/rc-map.h>
#include <linux/module.h>


static struct rc_map_table fusionhdtv_mce[] = {

	{ 0x0b, KEY_1 },
	{ 0x17, KEY_2 },
	{ 0x1b, KEY_3 },
	{ 0x07, KEY_4 },
	{ 0x50, KEY_5 },
	{ 0x54, KEY_6 },
	{ 0x48, KEY_7 },
	{ 0x4c, KEY_8 },
	{ 0x58, KEY_9 },
	{ 0x03, KEY_0 },

	{ 0x5e, KEY_OK },
	{ 0x51, KEY_UP },
	{ 0x53, KEY_DOWN },
	{ 0x5b, KEY_LEFT },
	{ 0x5f, KEY_RIGHT },

	{ 0x02, KEY_TV },		
	{ 0x0e, KEY_MP3 },
	{ 0x1a, KEY_DVD },
	{ 0x1e, KEY_FAVORITES },	
	{ 0x16, KEY_SETUP },
	{ 0x46, KEY_POWER2 },		
	{ 0x0a, KEY_EPG },		

	{ 0x49, KEY_BACK },
	{ 0x59, KEY_INFO },		
	{ 0x4d, KEY_MENU },		
	{ 0x55, KEY_CYCLEWINDOWS },	

	{ 0x0f, KEY_PREVIOUSSONG },	
	{ 0x12, KEY_NEXTSONG },		
	{ 0x42, KEY_ENTER },		

	{ 0x15, KEY_VOLUMEUP },
	{ 0x05, KEY_VOLUMEDOWN },
	{ 0x11, KEY_CHANNELUP },
	{ 0x09, KEY_CHANNELDOWN },

	{ 0x52, KEY_CAMERA },
	{ 0x5a, KEY_TUNER },
	{ 0x19, KEY_OPEN },

	{ 0x13, KEY_MODE },		
	{ 0x1f, KEY_ZOOM },

	{ 0x43, KEY_REWIND },
	{ 0x47, KEY_PLAYPAUSE },
	{ 0x4f, KEY_FASTFORWARD },
	{ 0x57, KEY_MUTE },
	{ 0x0d, KEY_STOP },
	{ 0x01, KEY_RECORD },
	{ 0x4e, KEY_POWER },
};

static struct rc_map_list fusionhdtv_mce_map = {
	.map = {
		.scan    = fusionhdtv_mce,
		.size    = ARRAY_SIZE(fusionhdtv_mce),
		.rc_type = RC_TYPE_UNKNOWN,	
		.name    = RC_MAP_FUSIONHDTV_MCE,
	}
};

static int __init init_rc_map_fusionhdtv_mce(void)
{
	return rc_map_register(&fusionhdtv_mce_map);
}

static void __exit exit_rc_map_fusionhdtv_mce(void)
{
	rc_map_unregister(&fusionhdtv_mce_map);
}

module_init(init_rc_map_fusionhdtv_mce)
module_exit(exit_rc_map_fusionhdtv_mce)

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@redhat.com>");
