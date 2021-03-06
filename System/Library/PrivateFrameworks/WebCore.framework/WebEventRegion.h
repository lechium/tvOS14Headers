/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WebEventRegion : NSObject <NSCopying> {

	CGPoint p1;
	CGPoint p2;
	CGPoint p3;
	CGPoint p4;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)hitTest:(CGPoint)arg1 ;
-(FloatQuad)quad;
-(id)initWithPoints:(CGPoint)arg1 :(CGPoint)arg2 :(CGPoint)arg3 :(CGPoint)arg4 ;
-(CGPoint)p1;
-(CGPoint)p2;
-(CGPoint)p3;
-(CGPoint)p4;
@end

