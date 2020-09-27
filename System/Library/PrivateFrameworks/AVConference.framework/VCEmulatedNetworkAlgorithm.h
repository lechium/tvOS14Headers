/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCEmulatedNetworkAlgorithm <NSObject>
@property (nonatomic,readonly) double expectedProcessEndTime; 
@property (assign) unsigned packetCountInNetworkQueue; 
@required
-(void)process:(id)arg1;
-(void)updateSettingsAtTime:(double)arg1 impairments:(id)arg2;
-(double)expectedProcessEndTime;
-(unsigned)packetCountInNetworkQueue;
-(void)setPacketCountInNetworkQueue:(unsigned)arg1;

@end
