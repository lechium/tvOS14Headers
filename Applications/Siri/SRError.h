//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface SRError : NSError
{
}

+ (id)errorWithCode:(long long)arg1;	// IMP=0x0000000100089ca0
+ (id)errorWithCode:(long long)arg1 localizedFailureReason:(id)arg2;	// IMP=0x0000000100089c40
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0000000100089be0
- (id)initWithCode:(long long)arg1;	// IMP=0x0000000100089db0
- (id)initWithCode:(long long)arg1 localizedFailureReason:(id)arg2;	// IMP=0x0000000100089ccc
- (id)initWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0000000100089cb0

@end

