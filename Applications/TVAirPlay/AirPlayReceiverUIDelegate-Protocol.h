//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol AirPlayReceiverUIDelegate <NSObject>

@optional
- (int)airplayUIStopVideo:(NSDictionary *)arg1;
- (int)airplayUIStartVideo:(NSDictionary *)arg1 outputParams:(id *)arg2;
- (int)airplayUIUpdateAudioProgress:(double)arg1 duration:(double)arg2;
- (int)airplayUIUpdateAudioMetaData:(NSDictionary *)arg1;
- (int)airplayUIStopAudio:(NSDictionary *)arg1;
- (int)airplayUIStartAudio:(NSDictionary *)arg1 outputParams:(id *)arg2;
- (void)airplayUIActivity;
- (int)airplayUIHideProgress;
- (int)airplayUIShowProgress;
- (int)airplayUIStopPresentation:(NSDictionary *)arg1;
- (int)airplayUIStartPresentation:(NSDictionary *)arg1 outputParams:(id *)arg2;
- (int)airplayUIPerform:(NSString *)arg1 inputParams:(id)arg2 outputParams:(id *)arg3;
- (int)airplayUISetProperty:(NSString *)arg1 qualifier:(id)arg2 value:(id)arg3;
- (id)airplayUIGetProperty:(NSString *)arg1 qualifier:(id)arg2 error:(int *)arg3;
@end
