/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:47 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/VNRequestRevisionProviding.h>

@interface VNFaceLandmarkRegion : NSObject <NSCopying, NSSecureCoding, VNRequestRevisionProviding> {

	CGRect _faceBoundingBox;
	unsigned long long _pointCount;
	unsigned long long _requestRevision;

}

@property (assign) CGRect faceBoundingBox;                                      //@synthesize faceBoundingBox=_faceBoundingBox - In the implementation block
@property (assign) unsigned long long pointCount;                               //@synthesize pointCount=_pointCount - In the implementation block
@property (nonatomic,readonly) unsigned long long requestRevision;              //@synthesize requestRevision=_requestRevision - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)pointCount;
-(unsigned long long)requestRevision;
-(id)initWithRequestRevision:(unsigned long long)arg1 faceBoundingBox:(CGRect)arg2 ;
-(CGRect)faceBoundingBox;
-(void)setFaceBoundingBox:(CGRect)arg1 ;
-(void)setPointCount:(unsigned long long)arg1 ;
@end

