/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:09 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PRBeaconListenerDelegate <NSObject>
@optional
-(void)beaconListener:(id)arg1 didOutputSuperframeStats:(id)arg2;
-(void)beaconListener:(id)arg1 didOutputRangeResults:(id)arg2;

@required
-(void)beaconListener:(id)arg1 didChangeState:(unsigned long long)arg2;
-(void)beaconListener:(id)arg1 didFailWithError:(id)arg2;

@end

