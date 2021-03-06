//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface TVHSortOption : NSObject <NSCopying>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSArray *_sortDescriptors;	// 24 = 0x18
}

+ (id)title;	// IMP=0x0000000100075e0c
+ (id)recentlyAdded;	// IMP=0x0000000100075c50
+ (id)playlistType;	// IMP=0x0000000100075a94
+ (id)oldestReleaseYearFirst;	// IMP=0x00000001000758d8
+ (id)newestReleaseYearFirst;	// IMP=0x000000010007571c
+ (id)artistTitle;	// IMP=0x0000000100075560
+ (id)new;	// IMP=0x00000001000753a0
- (void).cxx_destruct;	// IMP=0x00000001000764a4
@property(readonly, copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x000000010007633c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000760f8
- (unsigned long long)hash;	// IMP=0x0000000100075fd8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100075fa0
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 sortDescriptors:(id)arg3;	// IMP=0x0000000100075464
- (id)init;	// IMP=0x00000001000753dc

@end

