//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SATVActivator;

@protocol SATVActivatorDelegate <NSObject>
- (void)activator:(SATVActivator *)arg1 didFailWithError:(NSError *)arg2 reason:(long long)arg3;
- (void)activator:(SATVActivator *)arg1 didSucceedWithType:(unsigned long long)arg2;

@optional
- (void)activatorDidBeginActivation:(SATVActivator *)arg1;
- (void)activatorDidBeginSettingTime:(SATVActivator *)arg1;
@end

