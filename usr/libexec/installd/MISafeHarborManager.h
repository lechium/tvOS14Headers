//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MISafeHarborManager : NSObject
{
}

+ (id)defaultManager;	// IMP=0x0000000100058948
- (id)safeHarborListForType:(long long)arg1 withError:(id *)arg2;	// IMP=0x0000000100059350
- (_Bool)removeSafeHarborWithIdentifier:(id)arg1 ofType:(long long)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100058ca8
- (_Bool)registerSafeHarborAtURL:(id)arg1 withOptions:(id)arg2 forIdentifier:(id)arg3 ofType:(long long)arg4 error:(id *)arg5;	// IMP=0x00000001000589e8

@end
