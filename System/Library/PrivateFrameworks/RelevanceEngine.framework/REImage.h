/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:18 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface REImage : NSObject <NSCopying, NSCoding>
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)imageWithData:(id)arg1 scale:(double)arg2 ;
+(id)imageWithCGImage:(CGImageRef)arg1 scale:(double)arg2 ;
+(id)imageWithContentsOfFileAtPath:(id)arg1 scale:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

