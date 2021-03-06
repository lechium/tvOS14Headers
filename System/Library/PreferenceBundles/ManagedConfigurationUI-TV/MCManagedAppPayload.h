//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MCManagedAppPayload : MCPayload
{
    NSString *_managedAppID;	// 80 = 0x50
}

+ (id)localizedPluralForm;	// IMP=0x000000000001d4e0
+ (id)localizedSingularForm;	// IMP=0x000000000001d42c
+ (id)typeStrings;	// IMP=0x000000000001d410
- (void).cxx_destruct;	// IMP=0x000000000001d730
@property(retain, nonatomic) NSString *managedAppID; // @synthesize managedAppID=_managedAppID;
- (id)title;	// IMP=0x000000000001d690
- (id)initWithManagedAppID:(id)arg1 profile:(id)arg2;	// IMP=0x000000000001d594

@end

