/* protocols.h generated by mkprot.py from protocols.txt */
PROTOCOL_INFO MoreKnownProtocols[] = {
    { { 0x5B1B31A1, 0x9562, 0x11d2, { 0x8E, 0x3F, 0x00, 0xA0,
        0xC9, 0x69, 0x72, 0x3B } },     L"LoadedImage", NULL },
    { { 0x09576e91, 0x6d3f, 0x11d2, { 0x8e, 0x39, 0x00, 0xa0,
        0xc9, 0x69, 0x72, 0x3b } },     L"DevicePath", NULL },
    { { 0x18A031AB, 0xB443, 0x4D1A, { 0xA5, 0xC0, 0x0C, 0x09,
        0x26, 0x1E, 0x9F, 0x71 } },     L"DriverBinding", NULL },
    { { 0x6b30c738, 0xa391, 0x11d4, { 0x9a, 0x3b, 0x00, 0x90,
        0x27, 0x3f, 0xc1, 0x4d } },     L"PlatformDriverOverride", NULL },
    { { 0x3bc1b285, 0x8a15, 0x4a82, { 0xaa, 0xbf, 0x4d, 0x7d,
        0x13, 0xfb, 0x32, 0x65 } },     L"BusSpecificDriverOverride", NULL },
    { { 0x107a772b, 0xd5e1, 0x11d4, { 0x9a, 0x46, 0x00, 0x90,
        0x27, 0x3f, 0xc1, 0x4d } },     L"DriverConfiguration", NULL },
    { { 0x0784924f, 0xe296, 0x11d4, { 0x9a, 0x49, 0x00, 0x90,
        0x27, 0x3f, 0xc1, 0x4d } },     L"DriverDiagnostics", NULL },
    { { 0x107a772c, 0xd5e1, 0x11d4, { 0x9a, 0x46, 0x00, 0x90,
        0x27, 0x3f, 0xc1, 0x4d } },     L"ComponentName", NULL },
    { { 0x387477c1, 0x69c7, 0x11d2, { 0x8e, 0x39, 0x00, 0xa0,
        0xc9, 0x69, 0x72, 0x3b } },     L"SimpleInput", NULL },
    { { 0x387477c2, 0x69c7, 0x11d2, { 0x8e, 0x39, 0x00, 0xa0,
        0xc9, 0x69, 0x72, 0x3b } },     L"SimpleTextOutput", NULL },
    { { 0x982c298b, 0xf4fa, 0x41cb, { 0xb8, 0x38, 0x77, 0xaa,
        0x68, 0x8f, 0xb8, 0x39 } },     L"UGADraw", NULL },
    { { 0x61a4d49e, 0x6f68, 0x4f1b, { 0xb9, 0x22, 0xa8, 0x6e,
        0xed, 0x0b, 0x07, 0xa2 } },     L"UGAIO", NULL },
    { { 0x31878c87, 0x0b75, 0x11d5, { 0x9a, 0x4f, 0x00, 0x90,
        0x27, 0x3f, 0xc1, 0x4d } },     L"SimplePointer", NULL },
    { { 0xBB25CF6F, 0xF1D4, 0x11D2, { 0x9A, 0x0C, 0x00, 0x90,
        0x27, 0x3F, 0xC1, 0xFD } },     L"SerialIO", NULL },
    { { 0x56EC3091, 0x954C, 0x11d2, { 0x8E, 0x3F, 0x00, 0xA0,
        0xC9, 0x69, 0x72, 0x3B } },     L"LoadFile", NULL },
    { { 0x964e5b22, 0x6459, 0x11d2, { 0x8e, 0x39, 0x00, 0xa0,
        0xc9, 0x69, 0x72, 0x3b } },     L"SimpleFileSystem", NULL },
    { { 0xCE345171, 0xBA0B, 0x11d2, { 0x8e, 0x4F, 0x00, 0xa0,
        0xc9, 0x69, 0x72, 0x3b } },     L"DiskIO", NULL },
    { { 0x964e5b21, 0x6459, 0x11d2, { 0x8e, 0x39, 0x00, 0xa0,
        0xc9, 0x69, 0x72, 0x3b } },     L"BlockIO", NULL },
    { { 0x1d85cd7f, 0xf43d, 0x11d2, { 0x9a, 0x0c, 0x00, 0x90,
        0x27, 0x3f, 0xc1, 0x4d } },     L"UnicodeCollation", NULL },
    { { 0x4cf5b200, 0x68b8, 0x4ca5, { 0x9e, 0xec, 0xb2, 0x3e,
        0x3f, 0x50, 0x02, 0x9a } },     L"PCIIO", NULL },
    { { 0x2f707ebb, 0x4a1a, 0x11d4, { 0x9a, 0x38, 0x00, 0x90,
        0x27, 0x3f, 0xc1, 0x4d } },     L"PCIRootBridgeIO", NULL },
    { { 0xa59e8fcf, 0xbda0, 0x43bb, { 0x90, 0xb1, 0xd3, 0x73,
        0x2e, 0xca, 0xa8, 0x77 } },     L"SCSIPassThru", NULL },
    { { 0xF5089266, 0x1AA0, 0x4953, { 0x97, 0xD8, 0x56, 0x2F,
        0x8A, 0x73, 0xB5, 0x19 } },     L"USBHostController", NULL },
    { { 0x2B2F68D6, 0x0CD2, 0x44cf, { 0x8E, 0x8B, 0xBB, 0xA2,
        0x0B, 0x1B, 0x5B, 0x75 } },     L"USBIO", NULL },
    { { 0xA19832B9, 0xAC25, 0x11D3, { 0x9A, 0x2D, 0x00, 0x90,
        0x27, 0x3f, 0xc1, 0x4d } },     L"SimpleNetwork", NULL },
    { { 0xE18541CD, 0xF755, 0x4f73, { 0x92, 0x8D, 0x64, 0x3C,
        0x8A, 0x79, 0xB2, 0x29 } },     L"NetworkInterfaceIdentifier", NULL },
    { { 0x03C4E603, 0xAC28, 0x11d3, { 0x9A, 0x2D, 0x00, 0x90,
        0x27, 0x3F, 0xC1, 0x4D } },     L"PxeBaseCode", NULL },
    { { 0x245DCA21, 0xFB7B, 0x11d3, { 0x8F, 0x01, 0x00, 0xA0,
        0xC9, 0x69, 0x72, 0x3B } },     L"PxeBaseCodeCallback", NULL },
    { { 0x0b64aab0, 0x5429, 0x11d4, { 0x98, 0x16, 0x00, 0xa0,
        0xc9, 0x1f, 0xad, 0xcf } },     L"BIS", NULL },
    { { 0x2755590C, 0x6F3C, 0x42FA, { 0x9E, 0xA4, 0xA3, 0xBA,
        0x54, 0x3C, 0xDA, 0x25 } },     L"DebugSupport", NULL },
    { { 0xEBA4E8D2, 0x3858, 0x41EC, { 0xA2, 0x81, 0x26, 0x47,
        0xBA, 0x96, 0x60, 0xD0 } },     L"DebugPort", NULL },
    { { 0xd8117cfe, 0x94a6, 0x11d4, { 0x9a, 0x3a, 0x00, 0x90,
        0x27, 0x3f, 0xc1, 0x4d } },     L"Decompress", NULL },
    { { 0xaf6ac311, 0x84c3, 0x11d2, { 0x8e, 0x3c, 0x00, 0xa0,
        0xc9, 0x69, 0x72, 0x3b } },     L"DeviceIO", NULL },
    { { 0x13AC6DD1, 0x73D0, 0x11D4, { 0xB0, 0x6B, 0x00, 0xAA,
        0x00, 0xBD, 0x6D, 0xE7 } },     L"EBCInterpreter", NULL },
    { { 0x665E3FF6, 0x46CC, 0x11d4, { 0x9A, 0x38, 0x00, 0x90,
        0x27, 0x3F, 0xC1, 0x4D } },     L"BDSArch", NULL },
    { { 0x26baccb1, 0x6f42, 0x11d4, { 0xbc, 0xe7, 0x00, 0x80,
        0xc7, 0x3c, 0x88, 0x81 } },     L"CPUArch", NULL },
    { { 0x26baccb2, 0x6f42, 0x11d4, { 0xbc, 0xe7, 0x00, 0x80,
        0xc7, 0x3c, 0x88, 0x81 } },     L"MetronomeArch", NULL },
    { { 0x1da97072, 0xbddc, 0x4b30, { 0x99, 0xf1, 0x72, 0xa0,
        0xb5, 0x6f, 0xff, 0x2a } },     L"MonotonicCounterArch", NULL },
    { { 0x27CFAC87, 0x46CC, 0x11d4, { 0x9A, 0x38, 0x00, 0x90,
        0x27, 0x3F, 0xC1, 0x4D } },     L"RealTimeClockArch", NULL },
    { { 0x27CFAC88, 0x46CC, 0x11d4, { 0x9A, 0x38, 0x00, 0x90,
        0x27, 0x3F, 0xC1, 0x4D } },     L"ResetArch", NULL },
    { { 0x96d08253, 0x8483, 0x11d4, { 0xbc, 0xf1, 0x00, 0x80,
        0xc7, 0x3c, 0x88, 0x81 } },     L"RuntimeArch", NULL },
    { { 0xA46423E3, 0x4617, 0x49f1, { 0xB9, 0xFF, 0xD1, 0xBF,
        0xA9, 0x11, 0x58, 0x39 } },     L"SecurityArch", NULL },
    { { 0xd98e3ea3, 0x6f39, 0x4be4, { 0x82, 0xce, 0x5a, 0x89,
        0x0c, 0xcb, 0x2c, 0x95 } },     L"StatusCodeArch", NULL },
    { { 0x26baccb3, 0x6f42, 0x11d4, { 0xbc, 0xe7, 0x00, 0x80,
        0xc7, 0x3c, 0x88, 0x81 } },     L"TimerArch", NULL },
    { { 0x1e5668e2, 0x8481, 0x11d4, { 0xbc, 0xf1, 0x00, 0x80,
        0xc7, 0x3c, 0x88, 0x81 } },     L"VariableArch", NULL },
    { { 0x6441f818, 0x6362, 0x4e44, { 0xb5, 0x70, 0x7d, 0xba,
        0x31, 0xdd, 0x24, 0x53 } },     L"VariableWriteArch", NULL },
    { { 0x665E3FF5, 0x46CC, 0x11d4, { 0x9A, 0x38, 0x00, 0x90,
        0x27, 0x3F, 0xC1, 0x4D } },     L"WatchdogTimerArch", NULL },
    { { 0x470e1529, 0xb79e, 0x4e32, { 0xa0, 0xfe, 0x6a, 0x15,
        0x6d, 0x29, 0xf9, 0xb2 } },     L"BootScriptSave", NULL },
    { { 0xae80d021, 0x618e, 0x11d4, { 0xbc, 0xd7, 0x00, 0x80,
        0xc7, 0x3c, 0x88, 0x81 } },     L"DataHub", NULL },
    { { 0xdbff9d55, 0x89b7, 0x46da, { 0xbd, 0xdf, 0x67, 0x7d,
        0x3d, 0xc0, 0x24, 0x1d } },     L"ACPISupport", NULL },
    { { 0x125f2de1, 0xfb85, 0x440c, { 0xa5, 0x4c, 0x4d, 0x99,
        0x35, 0x8a, 0x8d, 0x38 } },     L"ACPIS3Save", NULL },
    { { 0xB0732526, 0x38c8, 0x4b40, { 0x88, 0x77, 0x61, 0xc7,
        0xb0, 0x6a, 0xac, 0x45 } },     L"CPUIO", NULL },
    { { 0xaa0e8bc1, 0xdabc, 0x46b0, { 0xa8, 0x44, 0x37, 0xb8,
        0x16, 0x9b, 0x2b, 0xea } },     L"PCIHotPlugInit", NULL },
    { { 0xa1e37052, 0x80d9, 0x4e65, { 0xa3, 0x17, 0x3e, 0x9a,
        0x55, 0xc4, 0x3e, 0xc9 } },     L"IDEControllerInit", NULL },
    { { 0xCF8034BE, 0x6768, 0x4d8b, { 0xB7, 0x39, 0x7C, 0xCE,
        0x68, 0x3A, 0x9F, 0xBE } },     L"PCIHostBridgeResAlloc", NULL },
    { { 0x07d75280, 0x27d4, 0x4d69, { 0x90, 0xd0, 0x56, 0x43,
        0xe2, 0x38, 0xb3, 0x41 } },     L"PCIPlatform", NULL },
    { { 0xeb23f55a, 0x7863, 0x4ac2, { 0x8d, 0x3d, 0x95, 0x65,
        0x35, 0xde, 0x03, 0x75 } },     L"IncompatiblePCIDeviceSupport", NULL },
    { { 0x377c66a3, 0x8fe7, 0x4ee8, { 0x85, 0xb8, 0xf1, 0xa2,
        0x82, 0x56, 0x9e, 0x3b } },     L"PlatformIDEInit", NULL },
    { { 0xdb9a1e3d, 0x45cb, 0x4abb, { 0x85, 0x3b, 0xe5, 0x38,
        0x7f, 0xdb, 0x2e, 0x2d } },     L"LegacyBIOS", NULL },
    { { 0x783658a3, 0x4172, 0x4421, { 0xa2, 0x99, 0xe0, 0x09,
        0x07, 0x9c, 0x0c, 0xb4 } },     L"LegacyBIOSPlatform", NULL },
    { { 0x0fc9013a, 0x0568, 0x4ba9, { 0x9b, 0x7e, 0xc9, 0xc3,
        0x90, 0xa6, 0x60, 0x9b } },     L"LegacyRegion", NULL },
    { { 0x38321dba, 0x4fe0, 0x4e17, { 0x8a, 0xec, 0x41, 0x30,
        0x55, 0xea, 0xed, 0xc1 } },     L"Legacy8259", NULL },
    { { 0x31ce593d, 0x108a, 0x485d, { 0xad, 0xb2, 0x78, 0xf2,
        0x1f, 0x29, 0x66, 0xbe } },     L"LegacyInterrupt", NULL },
    { { 0x389F751F, 0x1838, 0x4388, { 0x83, 0x90, 0xCD, 0x81,
        0x54, 0xBD, 0x27, 0xF8 } },     L"FirmwareVolume", NULL },
    { { 0x448F5DA4, 0x6DD7, 0x4FE1, { 0x93, 0x07, 0x69, 0x22,
        0x41, 0x92, 0x21, 0x5D } },     L"SectionExtraction", NULL },
    { { 0xDE28BC59, 0x6228, 0x41BD, { 0xBD, 0xF6, 0xA3, 0xB9,
        0xAD, 0xB5, 0x8D, 0xA1 } },     L"FVBlock", NULL },
    { { 0xcd361957, 0xafbe, 0x425e, { 0xa3, 0x58, 0x5f, 0x58,
        0x89, 0xcf, 0xfe, 0x7b } },     L"HII", NULL },
    { { 0xf3e4543d, 0xcf35, 0x6cef, { 0x35, 0xc4, 0x4f, 0xe6,
        0x34, 0x4d, 0xfc, 0x54 } },     L"FormCallback", NULL },
    { { 0xe5a1333e, 0xe1b4, 0x4d55, { 0xce, 0xeb, 0x35, 0xc3,
        0xef, 0x13, 0x34, 0x43 } },     L"FormBrowser", NULL },
    { { 0xe49d33ed, 0x513d, 0x4634, { 0xb6, 0x98, 0x6f, 0x55,
        0xaa, 0x75, 0x1c, 0x1b } },     L"SMBUSHostController", NULL },
    { { 0x1390954D, 0xda95, 0x4227, { 0x93, 0x28, 0x72, 0x82,
        0xc2, 0x17, 0xda, 0xa8 } },     L"SMMBase", NULL },
    { { 0x3792095a, 0xe309, 0x4c1e, { 0xaa, 0x01, 0x85, 0xf5,
        0x65, 0x5a, 0x17, 0xf1 } },     L"SMMAccess", NULL },
    { { 0x8d12e231, 0xc667, 0x4fd1, { 0x98, 0xf2, 0x24, 0x49,
        0xa7, 0xe7, 0xb2, 0xe5 } },     L"SMMControl", NULL },
    { { 0xe541b773, 0xdd11, 0x420c, { 0xb0, 0x26, 0xdf, 0x99,
        0x36, 0x53, 0xf8, 0xbf } },     L"SMMSoftwareDispatch", NULL },
    { { 0x14fc52be, 0x01dc, 0x426c, { 0x91, 0xae, 0xa2, 0x3c,
        0x3e, 0x22, 0x0a, 0xe8 } },     L"SMMSxDispatch", NULL },
    { { 0x9cca03fc, 0x4c9e, 0x4a19, { 0x9b, 0x06, 0xed, 0x7b,
        0x47, 0x9b, 0xde, 0x55 } },     L"SMMPeriodicTimerDispatch", NULL },
    { { 0xa05b6ffd, 0x87af, 0x4e42, { 0x95, 0xc9, 0x62, 0x28,
        0xb6, 0x3c, 0xf3, 0xf3 } },     L"SMMUSBDispatch", NULL },
    { { 0xe0744b81, 0x9513, 0x49cd, { 0x8c, 0xea, 0xe9, 0x24,
        0x5e, 0x70, 0x39, 0xda } },     L"SMMGPIDispatch", NULL },
    { { 0x78965b98, 0xb0bf, 0x449e, { 0x8b, 0x22, 0xd2, 0x91,
        0x4e, 0x49, 0x8a, 0x98 } },     L"SMMStandbyButtonDispatch", NULL },
    { { 0xb709efa0, 0x47a6, 0x4b41, { 0xb9, 0x31, 0x12, 0xec,
        0xe7, 0xa8, 0xee, 0x56 } },     L"SMMPowerButtonDispatch", NULL },
    { { 0xf42f7782, 0x012e, 0x4c12, { 0x99, 0x56, 0x49, 0xf9,
        0x43, 0x04, 0xf7, 0x21 } },     L"ConsoleControl", NULL },
    { { 0x9a44198e, 0xa4a2, 0x44e6, { 0x8a, 0x1f, 0x39, 0xbe,
        0xfd, 0xac, 0x89, 0x6f } },     L"CustomizedDecompress", NULL },
    { { 0xbe499c92, 0x7d4b, 0x11d4, { 0xbc, 0xee, 0x00, 0x80,
        0xc7, 0x3c, 0x88, 0x81 } },     L"DebugAssert", NULL },
    { { 0x4c8a2451, 0xc207, 0x405b, { 0x96, 0x94, 0x99, 0xea,
        0x13, 0x25, 0x13, 0x41 } },     L"DebugMask", NULL },
    { { 0xd432a67f, 0x14dc, 0x484b, { 0xb3, 0xbb, 0x3f, 0x02,
        0x91, 0x84, 0x93, 0x27 } },     L"DiskInfo", NULL },
    { { 0x170e13c0, 0xbf1b, 0x4218, { 0x87, 0x1d, 0x2a, 0xbd,
        0xc6, 0xf8, 0x87, 0xbc } },     L"OEMBadging", NULL },
    { { 0xde0ee9a4, 0x3c7a, 0x44f2, { 0xb7, 0x8b, 0xe3, 0xcc,
        0xd6, 0x9c, 0x3a, 0xf7 } },     L"ExtendedSALBootService", NULL },
    { { 0x3f557189, 0x8dae, 0x45ae, { 0xa0, 0xb3, 0x2b, 0x99,
        0xca, 0x7a, 0xa7, 0xa0 } },     L"FaultTolerantWriteLite", NULL },
    { { 0x7aa35a69, 0x506c, 0x444f, { 0xa7, 0xaf, 0x69, 0x4b,
        0xf5, 0x6f, 0x71, 0xc8 } },     L"FirmwareVolumeDispatch", NULL },
    { { 0x53a4c71b, 0xb581, 0x4170, { 0x91, 0xb3, 0x8d, 0xb8,
        0x7a, 0x4b, 0x5c, 0x46 } },     L"FVBlockExtension", NULL },
    { { 0x309de7f1, 0x7f5e, 0x4ace, { 0xb4, 0x9c, 0x53, 0x1b,
        0xe5, 0xaa, 0x95, 0xef } },     L"GenericMemoryTest", NULL },
    { { 0xFC1BCDB0, 0x7D31, 0x49aa, { 0x93, 0x6A, 0xA4, 0x60,
        0x0D, 0x9D, 0xD0, 0x83 } },     L"CRC32GuidedSectionExtraction", NULL },
    { { 0x64a892dc, 0x5561, 0x4536, { 0x92, 0xc7, 0x79, 0x9b,
        0xfc, 0x18, 0x33, 0x55 } },     L"ISA_ACPI", NULL },
    { { 0x7ee2bd44, 0x3da0, 0x11d4, { 0x9a, 0x38, 0x00, 0x90,
        0x27, 0x3f, 0xc1, 0x4d } },     L"ISAIO", NULL },
    { { 0x5cb5c776, 0x60d5, 0x45ee, { 0x88, 0x3c, 0x45, 0x27,
        0x08, 0xcd, 0x74, 0x3f } },     L"LoadPE32Image", NULL },
    { { 0x19cb87ab, 0x2cb9, 0x4665, { 0x83, 0x60, 0xdd, 0xcf,
        0x60, 0x54, 0xf7, 0x9d } },     L"PCIHotPlugRequest", NULL },
    { { 0xFFECFFFF, 0x923C, 0x14d2, { 0x9E, 0x3F, 0x22, 0xA0,
        0xC9, 0x69, 0x56, 0x3B } },     L"Performance", NULL },
    { { 0x0859ba18, 0x7dd7, 0x4ed7, { 0xa8, 0x8e, 0x10, 0x9c,
        0x63, 0x91, 0x7b, 0xdd } },     L"PlatformMemTest", NULL },
    { { 0xdf2d868e, 0x32fc, 0x4cf0, { 0x8e, 0x6b, 0xff, 0xd9,
        0x5d, 0x13, 0x43, 0xd0 } },     L"Print", NULL },
    { { 0x03c4e624, 0xac28, 0x11d3, { 0x9a, 0x2d, 0x00, 0x90,
        0x29, 0x3f, 0xc1, 0x4d } },     L"PxeDhcp4", NULL },
    { { 0xc1544c01, 0x92a4, 0x4198, { 0x8a, 0x84, 0x77, 0x85,
        0x83, 0xc2, 0x36, 0x21 } },     L"PxeDhcp4Callback", NULL },
    { { 0x403cd195, 0xf233, 0x48ec, { 0x84, 0x55, 0xb2, 0xe5,
        0x2f, 0x1d, 0x9e, 0x02 } },     L"SCSIIO", NULL },
    { { 0x78E4D245, 0xCD4D, 0x4a05, { 0xA2, 0xBA, 0x47, 0x43,
        0xE8, 0x6C, 0xFC, 0xAB } },     L"SecurityPolicy", NULL },
    { { 0x02b3d5f2, 0xac28, 0x11d3, { 0x9a, 0x2d, 0x00, 0x90,
        0x27, 0x3f, 0xc1, 0x4d } },     L"Tcp", NULL },
    { { 0xe84cf29c, 0x191f, 0x4eae, { 0x96, 0xe1, 0xf4, 0x6a,
        0xec, 0xea, 0xea, 0x0b } },     L"TianoDecompress", NULL },
    { { 0xa45b3a0d, 0x2e55, 0x4c03, { 0xad, 0x9c, 0x27, 0xd4,
        0x82, 0x0b, 0x50, 0x7e } },     L"UGASplash", NULL },
    { { 0x2B2F68DA, 0x0CD2, 0x44cf, { 0x8E, 0x8B, 0xBB, 0xA2,
        0x0B, 0x1B, 0x5B, 0x75 } },     L"USB_ATAPI", NULL },
    { { 0xf088cd91, 0xa046, 0x11d2, { 0x8e, 0x42, 0x00, 0xa0,
        0xc9, 0x69, 0x72, 0x3b } },     L"VariableStore", NULL },
    { { 0x745d377a, 0xb988, 0x47b2, { 0xb1, 0x8f, 0xbb, 0xc8,
        0x0d, 0xc5, 0x66, 0x98 } },     L"VirtualMemoryAccess", NULL },
    { {0,0,0,0,0,0,0,0,0,0,0},          NULL, NULL },
};
