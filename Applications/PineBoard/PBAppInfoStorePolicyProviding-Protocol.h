//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, PBAppInfoConfiguration, PBApplicationInfo, PBApplicationPlaceholder;

@protocol PBAppInfoStorePolicyProviding
- (PBAppInfoConfiguration *)configurationForProposedAppInfos:(NSDictionary *)arg1;
- (_Bool)isPlaceholderHidden:(PBApplicationPlaceholder *)arg1;
- (_Bool)isApplicationHidden:(PBApplicationInfo *)arg1;
- (_Bool)isPlaceholderEnabled:(PBApplicationPlaceholder *)arg1 reasons:(unsigned long long *)arg2;
- (_Bool)isApplicationEnabled:(PBApplicationInfo *)arg1 reasons:(unsigned long long *)arg2;
@end

