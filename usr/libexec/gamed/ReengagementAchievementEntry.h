//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSString;

@interface ReengagementAchievementEntry : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x00000001001ad750

// Remaining properties
@property(copy, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(copy, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSDate *lastReportedDate; // @dynamic lastReportedDate;
@property(copy, nonatomic) NSNumber *percentComplete; // @dynamic percentComplete;
@property(copy, nonatomic) NSString *playerID; // @dynamic playerID;

@end

