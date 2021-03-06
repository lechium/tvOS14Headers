//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MSDPreferencesFile : NSObject
{
    NSMutableDictionary *_cache;	// 8 = 0x8
}

+ (id)preferencesFileUrl;	// IMP=0x0000000100021e68
+ (_Bool)preferencesFileExists;	// IMP=0x00000001000212b0
+ (id)preferencesFilePath;	// IMP=0x0000000100021254
+ (id)sharedInstance;	// IMP=0x0000000100021190
- (void).cxx_destruct;	// IMP=0x0000000100021f60
@property(retain) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (void)raiseInvalidPropertyListObjectExceptionForObject:(id)arg1;	// IMP=0x0000000100021d1c
- (_Bool)saveCache;	// IMP=0x0000000100021b94
- (void)populateCache;	// IMP=0x0000000100021990
- (_Bool)removeObjectsForKeys:(id)arg1;	// IMP=0x000000010002183c
- (_Bool)removeObjectForKey:(id)arg1;	// IMP=0x00000001000216e8
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001000214dc
- (id)objectForKey:(id)arg1;	// IMP=0x0000000100021394
- (void)reload;	// IMP=0x000000010002133c
- (id)init;	// IMP=0x00000001000211fc

@end

