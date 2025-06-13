include $(GNUSTEP_MAKEFILES)/common.make

FRAMEWORK_NAME = FBVirtualization

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
    FBBridgedNetworkInterface.m \
    FBEntropyDeviceConfiguration.m


FBVirtualization_HEADER_FILES = \
    FBVirtualization.h \
    FBVirtualMachineConfiguration.h \
    FBVirtualMachine.h \
    FBBootLoader.h \
    FBEFIBootLoader.h \
    FBNetworkDeviceConfiguration.h \
    FBVirtioNetworkDeviceConfiguration.h \
    FBStorageDeviceConfiguration.h \
    FBDiskImageStorageDeviceAttachment.h \
    FBVirtioBlockDeviceConfiguration.h \
    FBBridgedNetworkInterface.h \
    FBEntropyDeviceConfiguration.h \
    FBVirtualMachineState.h \
    FBVirtualMachineDelegate.h

FBVirtualization_HEADER_FILES_DIR = .
FBVirtualization_HEADER_FILES_INSTALL_DIR = Headers

ADDITIONAL_OBJCFLAGS = -fobjc-arc


include $(GNUSTEP_MAKEFILES)/framework.make
