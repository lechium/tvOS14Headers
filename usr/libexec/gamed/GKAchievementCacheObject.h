//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKListEntryCacheObject.h"

@class NSDate, NSString;

@interface GKAchievementCacheObject : GKListEntryCacheObject
{
}

+ (id)entityName;	// IMP=0x000000010004794c
- (id)internalRepresentation;	// IMP=0x0000000100047944
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x0000000100047738

// Remaining properties
@property(retain, nonatomic) NSString *groupIdentifier; // @dynamic groupIdentifier;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSDate *lastReportedDate; // @dynamic lastReportedDate;
@property(nonatomic) float percentComplete; // @dynamic percentComplete;

@end

