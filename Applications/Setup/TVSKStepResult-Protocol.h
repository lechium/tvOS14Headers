//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol TVSKStepResult <NSObject>
@property(readonly, copy, nonatomic) NSDictionary *metricsPayload;
@property(readonly, nonatomic) unsigned long long flowOptions;
@property(readonly, nonatomic) _Bool wasSkippedDueToManagedConfiguration;
@property(readonly, nonatomic) _Bool didExecutionSucceed;
@end

