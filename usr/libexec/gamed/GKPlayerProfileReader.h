//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDataReader-Protocol.h"

@class GKDataTransport, GKDatabaseConnection, NSString;

@interface GKPlayerProfileReader : NSObject <GKDataReader>
{
    NSString *_localPlayerID;	// 8 = 0x8
    NSString *_language;	// 16 = 0x10
    GKDatabaseConnection *_readerConnection;	// 24 = 0x18
    GKDatabaseConnection *_writerConnection;	// 32 = 0x20
    GKDataTransport *_transport;	// 40 = 0x28
}

+ (id)readerWithLocalPlayer:(id)arg1 language:(id)arg2 readerConnection:(id)arg3 writerConnection:(id)arg4 transport:(id)arg5;	// IMP=0x000000010011c63c
@property(retain, nonatomic) GKDataTransport *transport; // @synthesize transport=_transport;
@property(retain, nonatomic) GKDatabaseConnection *writerConnection; // @synthesize writerConnection=_writerConnection;
@property(retain, nonatomic) GKDatabaseConnection *readerConnection; // @synthesize readerConnection=_readerConnection;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *localPlayerID; // @synthesize localPlayerID=_localPlayerID;
- (void)readResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010011c9d8
- (id)poolName;	// IMP=0x000000010011c984
- (int)familiarityForPlayer:(id)arg1;	// IMP=0x000000010011c7dc
- (void)dealloc;	// IMP=0x000000010011c774
- (id)initWithLocalPlayer:(id)arg1 language:(id)arg2 readerConnection:(id)arg3 writerConnection:(id)arg4 transport:(id)arg5;	// IMP=0x000000010011c6a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

