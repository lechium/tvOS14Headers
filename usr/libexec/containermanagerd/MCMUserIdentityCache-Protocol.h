//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MCMPOSIXUser, MCMUserIdentity, NSString;

@protocol MCMUserIdentityCache <NSObject>
- (MCMUserIdentity *)userIdentityForPersonalPersonaWithPOSIXUser:(MCMPOSIXUser *)arg1;
- (MCMUserIdentity *)userIdentityForPersonaUniqueString:(NSString *)arg1 POSIXUser:(MCMPOSIXUser *)arg2;
@end
