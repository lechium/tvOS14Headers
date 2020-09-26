//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DADeviceState;

@protocol DADevice <NSObject>
@property(readonly, nonatomic, getter=isLocal) _Bool local;
@property(readonly, nonatomic) DADeviceState *state;
- (void)end;
- (void)resumeTests;
- (void)suspendTests;
- (void)idle;
- (void)start;
- (void)connect;
@end

