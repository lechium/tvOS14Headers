//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableSet;

@interface PBDependencyContext : NSObject
{
    NSMutableSet *_fetchedInstanceClasses;	// 8 = 0x8
    NSMapTable *_classesToInstances;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000bdb7c
@property(retain, nonatomic) NSMapTable *classesToInstances; // @synthesize classesToInstances=_classesToInstances;
@property(retain, nonatomic) NSMutableSet *fetchedInstanceClasses; // @synthesize fetchedInstanceClasses=_fetchedInstanceClasses;
- (id)instanceForClass:(Class)arg1;	// IMP=0x00000001000bd810
- (id)init;	// IMP=0x00000001000bd704

@end

