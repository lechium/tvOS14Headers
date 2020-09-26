//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MZKeyValueStoreTransaction, NSArray, NSData, NSDate, NSDictionary, NSNumber, NSString;

@interface MZKeyValueStoreNode : NSObject
{
    MZKeyValueStoreTransaction *_transaction;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSString *_version;	// 24 = 0x18
    NSData *_value;	// 32 = 0x20
    _Bool _mismatch;	// 40 = 0x28
    int _wrapperRevision;	// 44 = 0x2c
    NSString *_name;	// 48 = 0x30
}

+ (id)assetIDForKey:(id)arg1 withPrefix:(id)arg2;	// IMP=0x0000000100071fc8
+ (id)keysWithPrefix:(id)arg1 assetIDs:(id)arg2;	// IMP=0x0000000100071e0c
+ (id)keyWithPrefix:(id)arg1 assetID:(id)arg2;	// IMP=0x0000000100071d48
+ (id)keyValueStoreDataFirstRevision;	// IMP=0x0000000100071cf4
+ (id)keyValueStoreDataCurrentRevision;	// IMP=0x0000000100071ca0
+ (_Bool)isServerRevisionNewerThanClient:(id)arg1;	// IMP=0x0000000100071be4
+ (void)setServerRevisionNewerThanClient:(id)arg1;	// IMP=0x0000000100071b10
+ (id)serverRevisionNewerThanClientKeys;	// IMP=0x0000000100071aa4
- (void).cxx_destruct;	// IMP=0x00000001000727ac
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int wrapperRevision; // @synthesize wrapperRevision=_wrapperRevision;
@property(nonatomic) _Bool mismatch; // @synthesize mismatch=_mismatch;
@property(retain, nonatomic) NSData *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) MZKeyValueStoreTransaction *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) id objectValue; // @dynamic objectValue;
@property(retain, nonatomic) NSDictionary *dictionaryValue; // @dynamic dictionaryValue;
@property(retain, nonatomic) NSArray *arrayValue; // @dynamic arrayValue;
@property(retain, nonatomic) NSData *dataValue; // @dynamic dataValue;
@property(retain, nonatomic) NSDate *dateValue; // @dynamic dateValue;
@property(retain, nonatomic) NSNumber *numberValue; // @dynamic numberValue;
@property(retain, nonatomic) NSString *stringValue; // @dynamic stringValue;
- (id)objectValueMatchingClass:(Class)arg1;	// IMP=0x00000001000721ac
- (_Bool)hasData;	// IMP=0x000000010007215c
- (id)description;	// IMP=0x000000010007206c
- (id)init;	// IMP=0x000000010007202c

@end

