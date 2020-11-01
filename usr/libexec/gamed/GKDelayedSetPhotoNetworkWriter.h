//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDataWriter-Protocol.h"

@class GKDataTransport, NSNumber, NSString;

@interface GKDelayedSetPhotoNetworkWriter : NSObject <GKDataWriter>
{
    NSString *_bagKey;	// 8 = 0x8
    GKDataTransport *_transport;	// 16 = 0x10
    NSNumber *_avatarType;	// 24 = 0x18
}

+ (id)writerWithTransport:(id)arg1 forBagKey:(id)arg2;	// IMP=0x000000010007a00c
- (void).cxx_destruct;	// IMP=0x000000010007bac8
@property(copy, nonatomic) NSNumber *avatarType; // @synthesize avatarType=_avatarType;
@property(retain, nonatomic) GKDataTransport *transport; // @synthesize transport=_transport;
@property(retain, nonatomic) NSString *bagKey; // @synthesize bagKey=_bagKey;
- (void)uploadProfileImageMetadata:(id)arg1 fromUploadURL:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010007b3a4
- (void)uploadImageData:(id)arg1 toURL:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010007a984
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010007a12c
- (id)initWithTransport:(id)arg1 forBagKey:(id)arg2;	// IMP=0x000000010007a084

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

