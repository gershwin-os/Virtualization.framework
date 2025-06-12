INSTALLATION_DOMAIN = SYSTEM

include $(GNUSTEP_MAKEFILES)/common.make

FRAMEWORK_NAME = FBVirtualization

FBVirtualization_HEADERS = \
    FBVirtualMachineConfiguration.h \
    FBVirtualMachine.h \
    FBBootLoader.h \
    FBEFIBootLoader.h \
    FBNetworkDeviceConfiguration.h \
    FBVirtioNetworkDeviceConfiguration.h \
    FBStorageDeviceConfiguration.h \
    FBDiskImageStorageDeviceAttachment.h \
    FBVirtioBlockDeviceConfiguration.h \
    FBBridgedNetworkInterface.h

FBVirtualization_OBJC_FILES = \
    FBVirtualMachineConfiguration.m \
    FBVirtualMachine.m \
    FBBootLoader.m \
    FBEFIBootLoader.m \
    FBNetworkDeviceConfiguration.m \
    FBVirtioNetworkDeviceConfiguration.m \
    FBStorageDeviceConfiguration.m \
    FBDiskImageStorageDeviceAttachment.m \
    FBVirtioBlockDeviceConfiguration.m \
    FBBridgedNetworkInterface.m

FBVirtualization_HEADER_FILES_DIR = .
FBVirtualization_RESOURCE_FILES =

ADDITIONAL_OBJCFLAGS = -fobjc-arc

include $(GNUSTEP_MAKEFILES)/framework.make

