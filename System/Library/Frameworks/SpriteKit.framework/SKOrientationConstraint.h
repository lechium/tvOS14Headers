/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:16 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKConstraint.h>

@class SKNode, SKRange;

@interface SKOrientationConstraint : SKConstraint {

	SKNode* _node;
	SKRange* _offset;
	CGPoint _point;

}

@property (__weak) SKNode * node;               //@synthesize node=_node - In the implementation block
@property (assign) CGPoint point;               //@synthesize point=_point - In the implementation block
@property (copy) SKRange * offset;              //@synthesize offset=_offset - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)constraintOrientingToPoint:(CGPoint)arg1 inNode:(id)arg2 offset:(id)arg3 ;
+(id)constraintOrientingToNode:(id)arg1 offset:(id)arg2 ;
+(id)constraintOrientingToPoint:(CGPoint)arg1 offset:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SKRange *)offset;
-(void)setOffset:(SKRange *)arg1 ;
-(CGPoint)point;
-(SKNode *)node;
-(void)setPoint:(CGPoint)arg1 ;
-(void)setNode:(SKNode *)arg1 ;
-(BOOL)isEqualToOrientationConstraint:(id)arg1 ;
-(id)initWithNode:(id)arg1 point:(CGPoint)arg2 offset:(id)arg3 ;
@end

