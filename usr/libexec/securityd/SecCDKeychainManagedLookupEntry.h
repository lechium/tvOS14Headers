//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface SecCDKeychainManagedLookupEntry : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x000000010018d800

// Remaining properties
@property(copy, nonatomic) NSString *itemTypeName; // @dynamic itemTypeName;
@property(copy, nonatomic) NSString *lookupKey; // @dynamic lookupKey;
@property(copy, nonatomic) NSString *lookupValue; // @dynamic lookupValue;
@property(copy, nonatomic) NSString *lookupValueType; // @dynamic lookupValueType;
@property(retain, nonatomic) NSSet *matchingItems; // @dynamic matchingItems;
@property(nonatomic) _Bool systemEntry; // @dynamic systemEntry;

@end

