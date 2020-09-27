/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
@interface AXPIFingerEventTouchInfo : NSObject {

	double _force;
	CGPoint _normalizedLocation;

}

@property (assign,nonatomic) CGPoint normalizedLocation;              //@synthesize normalizedLocation=_normalizedLocation - In the implementation block
@property (assign,nonatomic) double force;                            //@synthesize force=_force - In the implementation block
-(double)force;
-(void)setForce:(double)arg1 ;
-(CGPoint)normalizedLocation;
-(void)setNormalizedLocation:(CGPoint)arg1 ;
@end
