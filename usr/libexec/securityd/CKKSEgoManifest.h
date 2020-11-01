//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSManifest.h"

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface CKKSEgoManifest : CKKSManifest
{
    NSArray *_leafRecords;	// 104 = 0x68
}

+ (id)generateSignaturesWithHelper:(id)arg1 derData:(id)arg2 error:(id *)arg3;	// IMP=0x000000010010365c
+ (id)tryFromDatabaseWhere:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100103580
+ (id)fromDatabaseWhere:(id)arg1 error:(id *)arg2;	// IMP=0x00000001001034a4
+ (id)newManifestForZone:(id)arg1 withItems:(id)arg2 peerManifestIDs:(id)arg3 currentItems:(id)arg4 error:(id *)arg5 helper:(id)arg6;	// IMP=0x0000000100103104
+ (id)newManifestForZone:(id)arg1 withItems:(id)arg2 peerManifestIDs:(id)arg3 currentItems:(id)arg4 error:(id *)arg5;	// IMP=0x0000000100103018
+ (id)newFakeManifestForZone:(id)arg1 withItemRecords:(id)arg2 currentItems:(id)arg3 signerID:(id)arg4 keyPair:(id)arg5 error:(id *)arg6;	// IMP=0x0000000100102ec0
+ (id)tryCurrentEgoManifestForZone:(id)arg1;	// IMP=0x0000000100102d90
+ (id)leafRecordsForItems:(id)arg1 manifestName:(id)arg2 zone:(id)arg3;	// IMP=0x0000000100102ae8
+ (id)egoHelper;	// IMP=0x0000000100102ab8
- (void).cxx_destruct;	// IMP=0x0000000100102aa4
- (id)defaultHelperForSignerID:(id)arg1;	// IMP=0x0000000100102a48
@property(retain, nonatomic) NSDictionary *signatures;
- (_Bool)saveToDatabase:(id *)arg1;	// IMP=0x0000000100102808
- (id)allCKRecordsWithZoneID:(id)arg1;	// IMP=0x0000000100102630
- (id)leafRecords;	// IMP=0x0000000100102620
- (id)leafRecordForItemUUID:(id)arg1;	// IMP=0x000000010010255c
- (void)setCurrentItemUUID:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00000001001024cc
- (void)updateWithNewOrChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;	// IMP=0x00000001001021b0
- (id)initWithDigestValue:(id)arg1 zone:(id)arg2 generationCount:(unsigned long long)arg3 leafRecords:(id)arg4 peerManifestIDs:(id)arg5 currentItems:(id)arg6 futureData:(id)arg7 signatures:(id)arg8 signerID:(id)arg9 schema:(id)arg10;	// IMP=0x0000000100101ea4
- (_Bool)loadLeafRecords:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100101b70

@end

