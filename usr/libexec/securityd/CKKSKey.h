//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSCKRecordHolder.h"

@class CKKSAESSIVKey, CKKSKeychainBackedKey, CKKSWrappedAESSIVKey, NSString;
@protocol SecCKKSKeyClass, SecCKKSProcessedState;

__attribute__((visibility("hidden")))
@interface CKKSKey : CKKSCKRecordHolder
{
    _Bool _currentkey;	// 8 = 0x8
    CKKSKeychainBackedKey *_keycore;	// 16 = 0x10
    NSString<SecCKKSProcessedState> *_state;	// 24 = 0x18
}

+ (id)loadFromProtobuf:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d6eb8
+ (id)countsByClass:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d6cdc
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x00000001000d6944
+ (id)sqlColumns;	// IMP=0x00000001000d6938
+ (id)sqlTable;	// IMP=0x00000001000d692c
+ (id)localKeys:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d682c
+ (id)remoteKeys:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d672c
+ (id)allKeys:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d6640
+ (id)currentKeysForClass:(id)arg1 state:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000d64e0
+ (id)currentKeyForClass:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000d63f4
+ (id)selfWrappedKeys:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d6294
+ (id)tryFromDatabaseAnyState:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000d617c
+ (id)tryFromDatabase:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000d6050
+ (id)fromDatabaseAnyState:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000d5f38
+ (id)fromDatabase:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000d5e0c
+ (id)isItemKeyForKeychainView:(struct SecDbItem *)arg1;	// IMP=0x00000001000d5b34
+ (id)keyFromKeychain:(id)arg1 parentKeyUUID:(id)arg2 keyclass:(id)arg3 state:(id)arg4 zoneID:(id)arg5 encodedCKRecord:(id)arg6 currentkey:(long long)arg7 error:(id *)arg8;	// IMP=0x00000001000d59f4
+ (id)randomKeyWrappedBySelf:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d58f0
+ (id)randomKeyWrappedByParent:(id)arg1 keyclass:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000d579c
+ (id)randomKeyWrappedByParent:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d5710
+ (id)loadKeyWithUUID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000d5668
- (void).cxx_destruct;	// IMP=0x00000001000d5628
@property _Bool currentkey; // @synthesize currentkey=_currentkey;
@property(copy) NSString<SecCKKSProcessedState> *state; // @synthesize state=_state;
@property(retain) CKKSKeychainBackedKey *keycore; // @synthesize keycore=_keycore;
- (id)serializeAsProtobuf:(id *)arg1;	// IMP=0x00000001000d53ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000d5340
- (id)sqlValues;	// IMP=0x00000001000d4f1c
- (id)whereClauseToFindSelf;	// IMP=0x00000001000d4dd4
- (id)description;	// IMP=0x00000001000d4c80
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x00000001000d4814
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x00000001000d44e4
- (void)setFromCKRecord:(id)arg1;	// IMP=0x00000001000d40d0
- (id)CKRecordName;	// IMP=0x00000001000d407c
- (_Bool)saveToDatabaseAsOnlyCurrentKeyForClassAndState:(id *)arg1;	// IMP=0x00000001000d3e54
- (_Bool)deleteKeyMaterialFromKeychain:(id *)arg1;	// IMP=0x00000001000d3e00
- (_Bool)loadKeyMaterialFromKeychain:(id *)arg1;	// IMP=0x00000001000d3dac
- (_Bool)saveKeyMaterialToKeychain:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00000001000d3d48
- (_Bool)saveKeyMaterialToKeychain:(id *)arg1;	// IMP=0x00000001000d3cf0
- (id)decryptData:(id)arg1 authenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000d3c44
- (id)encryptData:(id)arg1 authenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000d3b98
- (id)unwrapAESKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d3b10
- (id)wrapAESKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d3a88
- (_Bool)trySelfWrappedKeyCandidate:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d3a08
- (_Bool)tlkMaterialPresentOrRecoverableViaTLKShare:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d354c
- (_Bool)validTLK:(id *)arg1;	// IMP=0x00000001000d3394
- (_Bool)unwrapViaTLKSharesTrustedBy:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d2ec0
- (id)unwrapViaKeyHierarchy:(id *)arg1;	// IMP=0x00000001000d2b88
- (id)ensureKeyLoaded:(id *)arg1;	// IMP=0x00000001000d2940
- (id)topKeyInAnyState:(id *)arg1;	// IMP=0x00000001000d2638
- (_Bool)wrapUnder:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d2594
- (_Bool)wrapsSelf;	// IMP=0x00000001000d2548
@property(readonly) CKKSAESSIVKey *aessivkey;
@property(copy) CKKSWrappedAESSIVKey *wrappedkey;
@property(copy) NSString<SecCKKSKeyClass> *keyclass;
@property(retain) NSString *parentKeyUUID;
@property(retain) NSString *uuid;
@property(readonly) NSString *zoneName;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000d209c
- (void)dealloc;	// IMP=0x00000001000d2068
- (id)initWithKeyCore:(id)arg1;	// IMP=0x00000001000d1f94
- (id)initWithWrappedAESKey:(id)arg1 uuid:(id)arg2 parentKeyUUID:(id)arg3 keyclass:(id)arg4 state:(id)arg5 zoneID:(id)arg6 encodedCKRecord:(id)arg7 currentkey:(long long)arg8;	// IMP=0x00000001000d1e18
- (id)initWrappedBy:(id)arg1 AESKey:(id)arg2 uuid:(id)arg3 keyclass:(id)arg4 state:(id)arg5 zoneID:(id)arg6 encodedCKRecord:(id)arg7 currentkey:(long long)arg8;	// IMP=0x00000001000d1c4c
- (id)initSelfWrappedWithAESKey:(id)arg1 uuid:(id)arg2 keyclass:(id)arg3 state:(id)arg4 zoneID:(id)arg5 encodedCKRecord:(id)arg6 currentkey:(long long)arg7;	// IMP=0x00000001000d1ad0
- (id)init;	// IMP=0x00000001000d1a9c

@end

