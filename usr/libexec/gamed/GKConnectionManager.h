//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class IDSService, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface GKConnectionManager : NSObject <IDSServiceDelegate>
{
    NSMutableDictionary *_connectionErrorBySessionID;	// 8 = 0x8
    IDSService *_idsService;	// 16 = 0x10
    NSMutableDictionary *_connectionsBySessionID;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_idsDelegateQueue;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x000000010002c9a0
- (void).cxx_destruct;	// IMP=0x0000000100030270
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *idsDelegateQueue; // @synthesize idsDelegateQueue=_idsDelegateQueue;
@property(retain, nonatomic) NSMutableDictionary *connectionsBySessionID; // @synthesize connectionsBySessionID=_connectionsBySessionID;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property(retain, nonatomic) NSMutableDictionary *connectionErrorBySessionID; // @synthesize connectionErrorBySessionID=_connectionErrorBySessionID;
- (void)clientEnteredForegroundState:(id)arg1;	// IMP=0x000000010003004c
- (void)clientEnteredBackgroundState:(id)arg1;	// IMP=0x000000010002fe78
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x000000010002fd28
- (void)sendGKPlayerIDtoiCloud:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002fad4
- (void)requestGKPlayerIDforiCloud:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002f960
- (void)sendNotificationMessage:(id)arg1 toIDSIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010002f6e8
- (void)sendNotificationMessageOfType:(unsigned char)arg1 forSession:(id)arg2 localizedFormatKey:(id)arg3 arguments:(id)arg4 userMessage:(id)arg5 data:(id)arg6 recipientIDs:(id)arg7 handler:(CDUnknownBlockType)arg8;	// IMP=0x000000010002e6f0
- (long long)deviceTypeForNotification;	// IMP=0x000000010002e6e8
- (void)sendData:(id)arg1 reliably:(_Bool)arg2 forGameSessionWithIdentifier:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010002e50c
- (void)connection:(id)arg1 didDisconnectForGameSessionWithID:(id)arg2 client:(id)arg3 playerID:(id)arg4 reason:(long long)arg5;	// IMP=0x000000010002de44
- (void)disconnectConnectionsForClient:(id)arg1 reason:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010002d984
- (id)idsDestinationsFromCKIDs:(id)arg1 containerName:(id)arg2;	// IMP=0x000000010002d70c
- (void)cloudGameSessionUpdated:(id)arg1;	// IMP=0x000000010002d608
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5;	// IMP=0x000000010002d208
- (void)connectToGameSession:(id)arg1 forClient:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010002cfc8
- (void)gameSession:(id)arg1 forClient:(id)arg2 lostConnectionFromCKID:(id)arg3;	// IMP=0x000000010002cedc
- (void)isBusyChangingConnectionStateForSession:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002cd9c
- (id)primaryEmailAddress;	// IMP=0x000000010002cb8c
- (void)dealloc;	// IMP=0x000000010002cb38
- (id)init;	// IMP=0x000000010002ca0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

