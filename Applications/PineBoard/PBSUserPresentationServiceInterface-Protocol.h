//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, PBSUserPresentationRequest;

@protocol PBSUserPresentationServiceInterface <NSObject>
- (void)dismissUIWithRequest:(PBSUserPresentationRequest *)arg1;
- (void)messageUIWithRequest:(PBSUserPresentationRequest *)arg1 message:(NSDictionary *)arg2 reply:(void (^)(_Bool, id <NSSecureCoding>, NSError *))arg3;
- (void)presentUIWithRequest:(PBSUserPresentationRequest *)arg1 completion:(void (^)(unsigned long long, id <NSSecureCoding>, NSError *))arg2;
@end

