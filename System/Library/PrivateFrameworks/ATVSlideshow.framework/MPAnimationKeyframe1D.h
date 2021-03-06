/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MPAnimationKeyframe.h>

@interface MPAnimationKeyframe1D : MPAnimationKeyframe {

	double _scalar;

}

@property (assign,nonatomic) double scalar;              //@synthesize scalar=_scalar - In the implementation block
+(id)keyframe1DWithScalar:(double)arg1 atTime:(double)arg2 ;
+(id)keyframe1DWithScalar:(double)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initKeyframe1DWithScalar:(double)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 ;
-(void)setScalar:(double)arg1 ;
-(double)scalar;
-(id)keyframe;
@end

