//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class IDSService, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface SDNearbyIDSAgent : NSObject <IDSServiceDelegate>
{
    _Bool _collectingSysdiagnose;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_sysdiagnoseQueue;	// 24 = 0x18
    NSMutableArray *_receivedHoneybeeIDs;	// 32 = 0x20
    IDSService *_idsService;	// 40 = 0x28
    NSObject<OS_xpc_object> *_honeybeeConnection;	// 48 = 0x30
}

+ (id)sharedAgent;	// IMP=0x0000000100155320
- (void).cxx_destruct;	// IMP=0x00000001001569f8
@property(retain, nonatomic) NSObject<OS_xpc_object> *honeybeeConnection; // @synthesize honeybeeConnection=_honeybeeConnection;
@property(readonly, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property(retain, nonatomic) NSMutableArray *receivedHoneybeeIDs; // @synthesize receivedHoneybeeIDs=_receivedHoneybeeIDs;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sysdiagnoseQueue; // @synthesize sysdiagnoseQueue=_sysdiagnoseQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) _Bool collectingSysdiagnose; // @synthesize collectingSysdiagnose=_collectingSysdiagnose;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000100156768
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x0000000100156660
- (void)_sendMessage:(id)arg1 devices:(id)arg2 type:(long long)arg3;	// IMP=0x00000001001562a8
- (void)_uploadSysdiagnoseToHoneybee:(id)arg1 honeybeeID:(id)arg2;	// IMP=0x0000000100156114
- (void)_uploadSysdiagnose:(id)arg1;	// IMP=0x0000000100155f9c
- (void)_collectSysdiagnoseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100155ce4
- (void)_handleLogRequest:(id)arg1;	// IMP=0x0000000100155a70
- (void)_sendLogRequestToDevices:(id)arg1 honeybeeID:(id)arg2;	// IMP=0x000000010015592c
- (void)sendLogRequestToDevices:(id)arg1 honeybeeID:(id)arg2;	// IMP=0x0000000100155830
- (void)_sendLogRequestToDeviceID:(id)arg1 honeybeeID:(id)arg2;	// IMP=0x0000000100155570
- (void)sendLogRequestToDeviceIDs:(id)arg1 honeybeeID:(id)arg2;	// IMP=0x0000000100155474
- (id)init;	// IMP=0x000000010015538c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

