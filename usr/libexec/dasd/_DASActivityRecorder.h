//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _DASActivityRecorder : NSObject
{
}

+ (id)predicateForLaunchActivities;	// IMP=0x0000000100019c14
+ (id)predicateForStartedActivities;	// IMP=0x0000000100019bd8
+ (id)predicateForPendingActivities;	// IMP=0x0000000100019ba0
+ (id)predicateForUniqueRecord:(id)arg1;	// IMP=0x0000000100019a34
+ (id)predicateForActivityWithSubmitDate:(id)arg1;	// IMP=0x000000010001994c
+ (id)predicateForActivityWithName:(id)arg1;	// IMP=0x0000000100019914
- (void)deleteActivitiesIfRequired:(id)arg1;	// IMP=0x000000010001b688
- (void)deleteOldActivities:(id)arg1;	// IMP=0x000000010001b518
- (void)deleteActivites:(id)arg1 moc:(id)arg2;	// IMP=0x000000010001b45c
- (void)deleteActivity:(id)arg1 context:(id)arg2;	// IMP=0x000000010001b328
- (void)updateActivityCanceled:(id)arg1 context:(id)arg2;	// IMP=0x000000010001b2d4
- (void)updateActivityCompleted:(id)arg1 context:(id)arg2;	// IMP=0x000000010001b280
- (void)updateActivityStarted:(id)arg1 context:(id)arg2;	// IMP=0x000000010001b22c
- (void)updateActivity:(id)arg1 value:(int)arg2 context:(id)arg3;	// IMP=0x000000010001b134
- (void)copyActivity:(id)arg1 toManagedObject:(id)arg2;	// IMP=0x000000010001a9a0
- (id)getActivityFromManagedObject:(id)arg1;	// IMP=0x000000010001a1d4
- (id)fetchAllActivities:(id)arg1;	// IMP=0x000000010001a1c0
- (id)fetchActivity:(id)arg1 context:(id)arg2;	// IMP=0x000000010001a0e8
- (id)fetchActivitiesUsingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0000000100019f98
- (id)createOrUpdateActivity:(id)arg1 context:(id)arg2;	// IMP=0x0000000100019dc0
- (id)createNewActivity:(id)arg1;	// IMP=0x0000000100019d30
- (id)entityName;	// IMP=0x0000000100019908

@end

