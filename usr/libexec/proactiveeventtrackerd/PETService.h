//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class IDSService, NSString, PETEventTracker2, PETServiceUploadAssembler;
@protocol OS_dispatch_queue;

@interface PETService : NSObject <IDSServiceDelegate>
{
    PETEventTracker2 *_tracker;	// 8 = 0x8
    _Bool _isInternalDevice;	// 16 = 0x10
    _Bool _isDNUEnabled;	// 17 = 0x11
    PETServiceUploadAssembler *_uploadAssembler;	// 24 = 0x18
    IDSService *_idsService;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_idsQueue;	// 40 = 0x28
}

+ (void)clearAllLogs;	// IMP=0x000000010000694c
+ (void)updateMobileAssetMetadataWithXPCActivity:(id)arg1;	// IMP=0x00000001000067c4
- (void).cxx_destruct;	// IMP=0x00000001000065bc
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *idsQueue; // @synthesize idsQueue=_idsQueue;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000001000062dc
- (void)_uploadToParsecWithUpload:(id)arg1;	// IMP=0x0000000100005e34
- (_Bool)_writeUploadForTransparency:(id)arg1;	// IMP=0x000000010000597c
- (void)uploadToParsec;	// IMP=0x00000001000058d4
- (id)init;	// IMP=0x00000001000056a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

