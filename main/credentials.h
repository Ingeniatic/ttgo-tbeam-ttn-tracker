/*

Credentials file

*/

#pragma once

// Only one of these settings must be defined
//#define USE_ABP
#define USE_OTAA

#ifdef USE_ABP

    // LoRaWAN NwkSKey, network session key
    static const u1_t PROGMEM NWKSKEY[16] = { 0x07, 0x0A, 0xD2, 0xDE, 0x2B, 0x5B, 0xDF, 0x93, 0xEA, 0xAF, 0x2F, 0xB0, 0x87, 0x7F, 0xE7, 0x5A };
    // LoRaWAN AppSKey, application session key
    static const u1_t PROGMEM APPSKEY[16] = { 0xA7, 0xCB, 0x99, 0x75, 0x3D, 0xC4, 0x03, 0xD0, 0x31, 0x5E, 0x0A, 0x30, 0x9F, 0xE1, 0x62, 0x4C };
    // LoRaWAN end-device address (DevAddr)
    // This has to be unique for every node
    static const u4_t DEVADDR = 0x260B6CC5;

#endif

#ifdef USE_OTAA

    // This EUI must be in little-endian format, so least-significant-byte (lsb)
    // first. When copying an EUI from ttnctl output, this means to reverse
    // the bytes. For TTN issued EUIs the last bytes should be 0x00, 0x00,
    // 0x00.
    static const u1_t PROGMEM APPEUI[8]  = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    // This should also be in little endian format (lsb), see above.
    // Note: You do not need to set this field, if unset it will be generated automatically based on the device macaddr
    static u1_t DEVEUI[8]  = { 0x3B, 0x41, 0x04, 0xD0, 0x7E, 0xD5, 0xB3, 0x70};

    // This key should be in big endian format (msb) (or, since it is not really a
    // number but a block of memory, endianness does not really apply). In
    // practice, a key taken from ttnctl can be copied as-is.
    // The key shown here is the semtech default key.
    static const u1_t PROGMEM APPKEY[16] = { 0x29, 0x52, 0x38, 0x01, 0xEC, 0xD2, 0x2A, 0x96, 0x6B, 0x9B, 0xBB, 0x7A, 0x40, 0xF9, 0x6A, 0x5B };

#endif
