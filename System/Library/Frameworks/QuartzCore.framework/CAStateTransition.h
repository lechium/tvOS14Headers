/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CAStateTransition : NSObject <NSCopying, NSSecureCoding> {

	NSString* _fromState;
	NSString* _toState;
	NSArray* _elements;

}

@property (nonatomic,copy) NSString * fromState;              //@synthesize fromState=_fromState - In the implementation block
@property (nonatomic,copy) NSString * toState;                //@synthesize toState=_toState - In the implementation block
@property (nonatomic,copy) NSArray * elements;                //@synthesize elements=_elements - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)CAMLParserStartElement:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)elements;
-(double)duration;
-(void)setElements:(NSArray *)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(NSString *)fromState;
-(NSString *)toState;
-(void)setFromState:(NSString *)arg1 ;
-(void)setToState:(NSString *)arg1 ;
@end
