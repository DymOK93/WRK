/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) Microsoft Corporation. All rights reserved.

You may only use this code if you agree to the terms of the Windows Research Kernel Source Code License agreement (see License.txt).
If you do not agree to the terms, do not use the code.


Module Name:

    pnpsetup.h

Abstract:

    This file contains the private data, interfaces and definitions
    associated with the integration of text mode setup and plug & play.

--*/

#ifndef FAR
#define FAR
#endif

//
// Private Notification for setupdd.sys during setup
// This should NOT be propagated into any public headers
//

#ifndef _SETUP_DEVICE_ARRIVAL_NOTIFICATION_DEFINED_
#define _SETUP_DEVICE_ARRIVAL_NOTIFICATION_DEFINED_

typedef struct _SETUP_DEVICE_ARRIVAL_NOTIFICATION {
    USHORT Version;
    USHORT Size;
    GUID Event;
    //
    // Event-specific data
    //
    PDEVICE_OBJECT PhysicalDeviceObject;
    HANDLE EnumEntryKey;
    PUNICODE_STRING EnumPath;
    BOOLEAN InstallDriver;
} SETUP_DEVICE_ARRIVAL_NOTIFICATION, *PSETUP_DEVICE_ARRIVAL_NOTIFICATION;

#endif


//
// Device arrival GUID
//
DEFINE_GUID( GUID_SETUP_DEVICE_ARRIVAL, 0xcb3a4000L, 0x46f0, 0x11d0, 0xb0, 0x8f, 0x00, 0x60, 0x97, 0x13, 0x5, 0x3f);

