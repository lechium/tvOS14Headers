/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:48 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CRImageReaderOutput, NSString;

@interface VNRecognizedText : NSObject <NSCopying, NSSecureCoding> {

	CRImageReaderOutput* _crOutput;
	unsigned long long _requestRevision;

}

@property (copy,readonly) CRImageReaderOutput * crOutput;                       //@synthesize crOutput=_crOutput - In the implementation block
@property (nonatomic,readonly) unsigned long long requestRevision;              //@synthesize requestRevision=_requestRevision - In the implementation block
@property (nonatomic,copy,readonly) NSString * string; 
@property (nonatomic,readonly) float confidence; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(NSString *)string;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)confidence;
-(unsigned long long)requestRevision;
-(id)initWithRequestRevision:(unsigned long long)arg1 CRImageReaderOutput:(id)arg2 ;
-(id)boundingBoxForRange:(NSRange)arg1 error:(id*)arg2 ;
-(CRImageReaderOutput *)crOutput;
@end

