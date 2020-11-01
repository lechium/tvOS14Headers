//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSSQLDatabaseObject.h"

@class CKKSItem, NSString;

__attribute__((visibility("hidden")))
@interface CKKSIncomingQueueEntry : CKKSSQLDatabaseObject
{
    CKKSItem *_item;	// 8 = 0x8
    NSString *_action;	// 16 = 0x10
    NSString *_state;	// 24 = 0x18
}

+ (long long)countByState:(id)arg1 zone:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000603e8
+ (id)countsByStateInZone:(id)arg1 error:(id *)arg2;	// IMP=0x000000010006020c
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x00000001000600c8
+ (id)sqlColumns;	// IMP=0x0000000100060064
+ (id)sqlTable;	// IMP=0x0000000100060058
+ (id)fetch:(long long)arg1 startingAtUUID:(id)arg2 state:(id)arg3 action:(id)arg4 zoneID:(id)arg5 error:(id *)arg6;	// IMP=0x000000010005fdd4
+ (id)tryFromDatabase:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x000000010005fc24
+ (id)fromDatabase:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x000000010005fa74
- (void).cxx_destruct;	// IMP=0x000000010005fa20
@property(retain) NSString *state; // @synthesize state=_state;
@property(retain) NSString *action; // @synthesize action=_action;
@property(retain) CKKSItem *item; // @synthesize item=_item;
- (id)sqlValues;	// IMP=0x000000010005f8d4
- (id)whereClauseToFindSelf;	// IMP=0x000000010005f880
@property(retain) NSString *uuid;
- (id)initWithCKKSItem:(id)arg1 action:(id)arg2 state:(id)arg3;	// IMP=0x000000010005f6d8
- (id)description;	// IMP=0x000000010005f54c

@end
