/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PFSlowMotionRampConfiguration;

@interface PFSlowMotionConfiguration : NSObject {

	float _volumeDuringSlowMotion;
	float _volumeDuringRampToSlowMotion;
	PFSlowMotionRampConfiguration* _rampDown;
	PFSlowMotionRampConfiguration* _rampUp;

}

@property (nonatomic,readonly) float volumeDuringSlowMotion;                                 //@synthesize volumeDuringSlowMotion=_volumeDuringSlowMotion - In the implementation block
@property (nonatomic,readonly) float volumeDuringRampToSlowMotion;                           //@synthesize volumeDuringRampToSlowMotion=_volumeDuringRampToSlowMotion - In the implementation block
@property (nonatomic,retain,readonly) PFSlowMotionRampConfiguration * rampDown;              //@synthesize rampDown=_rampDown - In the implementation block
@property (nonatomic,retain,readonly) PFSlowMotionRampConfiguration * rampUp;                //@synthesize rampUp=_rampUp - In the implementation block
-(id)init;
-(float)volumeDuringSlowMotion;
-(float)volumeDuringRampToSlowMotion;
-(PFSlowMotionRampConfiguration *)rampDown;
-(PFSlowMotionRampConfiguration *)rampUp;
@end

