//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableURLRequest.h>

@interface NSMutableURLRequest (GKAdditions)
+ (int)hashForPlayerID:(id)arg1;	// IMP=0x000000010008c350
+ (id)_gkHTTPRequestWithURL:(id)arg1 method:(id)arg2 postData:(id)arg3;	// IMP=0x000000010008c108
- (void)setSAPversion:(id)arg1;	// IMP=0x000000010008cd9c
- (void)setSAPSignature:(id)arg1;	// IMP=0x000000010008cd28
- (void)setLocale:(id)arg1;	// IMP=0x000000010008cc08
- (void)setInternal:(_Bool)arg1;	// IMP=0x000000010008cb7c
- (void)setPushToken:(id)arg1;	// IMP=0x000000010008ca4c
- (void)setBuildVersion:(id)arg1;	// IMP=0x000000010008c9c0
- (void)setProtocolVersion:(id)arg1;	// IMP=0x000000010008c934
- (void)setProcessName:(id)arg1;	// IMP=0x000000010008c8a8
- (void)setDeviceUniqueID:(id)arg1;	// IMP=0x000000010008c81c
- (void)setRestrictions:(id)arg1;	// IMP=0x000000010008c754
- (void)setStoreMode:(id)arg1;	// IMP=0x000000010008c6c0
- (void)setGameDescriptor:(id)arg1;	// IMP=0x000000010008c494
- (void)setPlayerID:(id)arg1 hash:(int)arg2 authToken:(id)arg3;	// IMP=0x000000010008c3a0
@end

