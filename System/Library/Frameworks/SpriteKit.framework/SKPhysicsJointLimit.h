/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:16 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointLimit : SKPhysicsJoint {

	double _maxLength;

}

@property (assign,nonatomic) double maxLength;              //@synthesize maxLength=_maxLength - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(CGPoint)arg3 anchorB:(CGPoint)arg4 ;
-(double)maxLength;
-(void)setMaxLength:(double)arg1 ;
@end

