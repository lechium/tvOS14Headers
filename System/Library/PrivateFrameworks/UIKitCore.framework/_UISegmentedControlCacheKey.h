/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UISegmentedControlCacheKey : NSObject <NSCopying> {

	CGSize _size;
	double _cornerRadius;
	double _scale;
	unsigned long long _state;
	CGColorRef _primaryColor;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(BOOL)isEqualToCacheKey:(id)arg1 ;
-(id)initWithSize:(int)arg1 scale:(double)arg2 primaryColor:(CGColorRef)arg3 background:(BOOL)arg4 ;
-(id)initWithCornerRadius:(double)arg1 capSize:(CGSize)arg2 scale:(double)arg3 state:(unsigned long long)arg4 primaryColor:(CGColorRef)arg5 ;
@end

