//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SATVAirplay2DataSourceObject;

@protocol SATVAirplay2DataSourceUpdating <NSObject>
@property(readonly, nonatomic) _Bool isUpdatingAvailable;
- (void)moveOrAddLocalAccessoryToRoomNamed:(NSString *)arg1 inHome:(id <SATVAirplay2DataSourceObject>)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

