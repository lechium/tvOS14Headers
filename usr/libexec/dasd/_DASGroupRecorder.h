//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _DASGroupRecorder : NSObject
{
}

+ (id)predicateForName:(id)arg1;	// IMP=0x000000010001b82c
+ (id)predicateForUniqueRecord:(id)arg1;	// IMP=0x000000010001b7b4
- (id)fetchAllGroups:(id)arg1;	// IMP=0x000000010001bd3c
- (id)fetchGroupsUsingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x000000010001bc14
- (id)createOrUpdateGroup:(id)arg1 context:(id)arg2;	// IMP=0x000000010001ba3c
- (id)createGroup:(id)arg1;	// IMP=0x000000010001b9ac
- (void)copyGroup:(id)arg1 toManagedObject:(id)arg2;	// IMP=0x000000010001b900
- (id)getGroupFromManagedObject:(id)arg1;	// IMP=0x000000010001b864
- (id)entityName;	// IMP=0x000000010001b7a8

@end

