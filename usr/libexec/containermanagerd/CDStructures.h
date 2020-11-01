//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct _ftsent {
    struct _ftsent *_field1;
    struct _ftsent *_field2;
    struct _ftsent *_field3;
    long long _field4;
    void *_field5;
    char *_field6;
    char *_field7;
    int _field8;
    int _field9;
    unsigned short _field10;
    unsigned short _field11;
    unsigned long long _field12;
    int _field13;
    unsigned short _field14;
    short _field15;
    unsigned short _field16;
    unsigned short _field17;
    unsigned short _field18;
    struct stat *_field19;
    char _field20[1];
};

struct container_client {
    char *_field1;
    unsigned int _field2;
    char *_field3;
    unsigned int _field4;
    unsigned int _field5;
    CDStruct_4c969caf _field6;
    int _field7;
    id _field8;
};

struct fsid {
    int _field1[2];
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct passwd {
    char *_field1;
    char *_field2;
    unsigned int _field3;
    unsigned int _field4;
    long long _field5;
    char *_field6;
    char *_field7;
    char *_field8;
    char *_field9;
    long long _field10;
};

struct stat {
    int _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned long long _field4;
    unsigned int _field5;
    unsigned int _field6;
    int _field7;
    struct timespec _field8;
    struct timespec _field9;
    struct timespec _field10;
    struct timespec _field11;
    long long _field12;
    long long _field13;
    int _field14;
    unsigned int _field15;
    unsigned int _field16;
    int _field17;
    long long _field18[2];
};

struct statfs {
    unsigned int _field1;
    int _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    struct fsid _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    char _field13[16];
    char _field14[1024];
    char _field15[1024];
    unsigned int _field16;
    unsigned int _field17[7];
};

struct timespec {
    long long _field1;
    long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int val[8];
} CDStruct_4c969caf;

