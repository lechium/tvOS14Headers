//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface PBDependencyCoordinator : NSObject
{
    NSMapTable *_classesToInstances;	// 8 = 0x8
}

+ (void)registerInstance:(id)arg1 dependencyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bc984
+ (id)sharedInstance;	// IMP=0x00000001000bc8b4
- (void).cxx_destruct;	// IMP=0x00000001000bd378
@property(retain, nonatomic) NSMapTable *classesToInstances; // @synthesize classesToInstances=_classesToInstances;
- (void)_registerInstance:(id)arg1 dependencyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bcb2c
- (id)init;	// IMP=0x00000001000bca44

@end

