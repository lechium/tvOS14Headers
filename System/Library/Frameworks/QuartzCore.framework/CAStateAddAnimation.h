/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAStateElement.h>

@class NSString, CAAnimation;

@interface CAStateAddAnimation : CAStateElement {

	NSString* _key;
	CAAnimation* _animation;

}

@property (nonatomic,copy) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) CAAnimation * animation;              //@synthesize animation=_animation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)key;
-(id)keyPath;
-(BOOL)matches:(id)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(CAAnimation *)animation;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(void)apply:(id)arg1 ;
-(void)setAnimation:(CAAnimation *)arg1 ;
@end
