//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVAirPlaySession-Protocol.h"

@class NSDictionary, NSObject, NSString;
@protocol TVAirPlayLegacySessionDelegate;

@protocol TVAirPlayLegacySession <TVAirPlaySession>
@property(nonatomic) __weak NSObject<TVAirPlayLegacySessionDelegate> *delegate;
@property(nonatomic) _Bool deactivated;
@property(readonly, nonatomic) unsigned int sessionID;
- (id)getProperty:(NSString *)arg1 qualifier:(id)arg2 error:(id *)arg3;
- (_Bool)setProperty:(NSString *)arg1 qualifier:(id)arg2 value:(id)arg3 error:(id *)arg4;
- (_Bool)performAction:(NSString *)arg1 withOptions:(NSDictionary *)arg2 outInfo:(id *)arg3 error:(id *)arg4;
- (_Bool)stopWithOptions:(NSDictionary *)arg1 error:(id *)arg2;
- (void)startWithOptions:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
@end
