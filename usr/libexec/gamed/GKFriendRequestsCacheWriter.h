//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDataWriter-Protocol.h"

@class GKDatabaseConnection, NSString;

@interface GKFriendRequestsCacheWriter : NSObject <GKDataWriter>
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
}

+ (id)writerWithDatabaseConnection:(id)arg1;	// IMP=0x00000001000a8b94
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a928c
- (void)writeToDatabase:(struct sqlite3 *)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(CDUnknownBlockType)arg5;	// IMP=0x00000001000a906c
- (void)bindParametersForRequestStatement:(struct sqlite3_stmt *)arg1 resource:(id)arg2 relativeToPlayer:(id)arg3;	// IMP=0x00000001000a8fb8
- (id)requestDetailsUpdateSQL;	// IMP=0x00000001000a8f5c
- (id)requestDetailsInsertSQL;	// IMP=0x00000001000a8f00
- (void)bindParametersForRelationshipStatement:(struct sqlite3_stmt *)arg1 resource:(id)arg2 relativeToPlayer:(id)arg3;	// IMP=0x00000001000a8e58
- (id)requestRelationshipUpdateSQL;	// IMP=0x00000001000a8dfc
- (id)requestRelationshipInsertSQL;	// IMP=0x00000001000a8da0
- (void)bindParametersForRequestingPlayerStatement:(struct sqlite3_stmt *)arg1 player:(id)arg2;	// IMP=0x00000001000a8d8c
- (id)requestingPlayerInsertSQL;	// IMP=0x00000001000a8d4c
- (void)bindParametersForListStatement:(struct sqlite3_stmt *)arg1 relativeToPlayer:(id)arg2 ttl:(double)arg3;	// IMP=0x00000001000a8d00
- (id)listExpirationDateUpdateSQL;	// IMP=0x00000001000a8cb8
- (id)listExpirationDateInsertSQL;	// IMP=0x00000001000a8c70
- (void)dealloc;	// IMP=0x00000001000a8c28
- (id)initWithDatabaseConnection:(id)arg1;	// IMP=0x00000001000a8bc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

