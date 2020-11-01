//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL;
@protocol OS_dispatch_source, SDBonjourResolverDelegate;

__attribute__((visibility("hidden")))
@interface SDBonjourResolver : NSObject
{
    _Bool _timeout;	// 8 = 0x8
    struct _DNSServiceRef_t *_resolve;	// 16 = 0x10
    struct _DNSServiceRef_t *_connection;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_timer;	// 32 = 0x20
    int _error;	// 40 = 0x28
    NSURL *_url;	// 48 = 0x30
    NSString *_name;	// 56 = 0x38
    NSString *_type;	// 64 = 0x40
    NSString *_domain;	// 72 = 0x48
    NSString *_path;	// 80 = 0x50
    NSString *_hostName;	// 88 = 0x58
    NSNumber *_portNumber;	// 96 = 0x60
    struct _DNSServiceRef_t *_service;	// 104 = 0x68
    id <SDBonjourResolverDelegate> _delegate;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000001001c353c
@property __weak id <SDBonjourResolverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) int error; // @synthesize error=_error;
@property(readonly) struct _DNSServiceRef_t *service; // @synthesize service=_service;
@property(retain) NSNumber *portNumber; // @synthesize portNumber=_portNumber;
@property(retain) NSString *hostName; // @synthesize hostName=_hostName;
@property(retain) NSString *path; // @synthesize path=_path;
@property(readonly) NSString *domain; // @synthesize domain=_domain;
@property(readonly) NSString *type; // @synthesize type=_type;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSURL *url; // @synthesize url=_url;
- (void)cancel;	// IMP=0x00000001001c3440
- (void)resolve;	// IMP=0x00000001001c2fd0
- (void)parseResults:(const char *)arg1 port:(unsigned short)arg2 txtLen:(unsigned short)arg3 txtRecord:(const char *)arg4 interface:(unsigned int)arg5;	// IMP=0x00000001001c2c18
- (void)notifyClient:(int)arg1;	// IMP=0x00000001001c2bc8
- (void)dealloc;	// IMP=0x00000001001c2b7c
- (id)initWithName:(id)arg1 type:(id)arg2 domain:(id)arg3 path:(id)arg4 timeout:(_Bool)arg5;	// IMP=0x00000001001c2a3c

@end

