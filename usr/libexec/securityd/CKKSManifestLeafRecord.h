//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSCKRecordHolder.h"

@class NSData, NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CKKSManifestLeafRecord : CKKSCKRecordHolder
{
    NSString *_uuid;	// 8 = 0x8
    NSMutableDictionary *_recordDigestDict;	// 16 = 0x10
    NSString *_zoneName;	// 24 = 0x18
    NSData *_derData;	// 32 = 0x20
    NSData *_digestValue;	// 40 = 0x28
}

+ (id)sqlTable;	// IMP=0x0000000100054d3c
+ (id)sqlColumns;	// IMP=0x0000000100054d30
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x0000000100054b1c
+ (id)leafRecordForPendingRecord:(id)arg1;	// IMP=0x00000001000549e8
+ (id)tryLeafRecordForID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100054900
+ (id)leafRecordForID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100054818
+ (id)leafUUIDForRecordID:(id)arg1;	// IMP=0x0000000100054778
+ (_Bool)recordExistsForID:(id)arg1;	// IMP=0x00000001000545ec
- (void).cxx_destruct;	// IMP=0x0000000100054438
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSDictionary *recordDigestDict; // @synthesize recordDigestDict=_recordDigestDict;
@property(readonly, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (void)clearDigest;	// IMP=0x00000001000543c8
@property(readonly, nonatomic) NSData *digestValue;
@property(readonly, nonatomic) NSData *derData;
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x0000000100054138
- (void)setFromCKRecord:(id)arg1;	// IMP=0x0000000100053e4c
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x0000000100053d48
- (id)ckRecordType;	// IMP=0x0000000100053d1c
- (id)CKRecordName;	// IMP=0x0000000100053ccc
- (id)whereClauseToFindSelf;	// IMP=0x0000000100053b80
- (id)sqlValues;	// IMP=0x00000001000539a4
- (id)initWithUUID:(id)arg1 digest:(id)arg2 recordDigestDict:(id)arg3 zone:(id)arg4 encodedRecord:(id)arg5;	// IMP=0x00000001000538bc
- (id)initWithUUID:(id)arg1 digest:(id)arg2 recordDigestDict:(id)arg3 zone:(id)arg4;	// IMP=0x00000001000536c8
- (id)initWithCKRecord:(id)arg1;	// IMP=0x00000001000533d4
- (id)description;	// IMP=0x00000001000532c4

@end

