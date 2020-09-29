/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:43 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSTimeZone;

@interface BWPhotoDescriptor : NSObject <NSSecureCoding> {

	NSString* _photoIdentifier;
	unsigned _processingFlags;
	NSDate* _time;
	BOOL _timeHasBeenSet;
	NSTimeZone* _timeZone;
	BOOL _timeZoneHasBeenSet;
	SCD_Struct_BW36 _presentationTimeStamp;
	BOOL _presentationTimeStampHasBeenSet;

}

@property (nonatomic,readonly) NSString * photoIdentifier;                       //@synthesize photoIdentifier=_photoIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned processingFlags;                         //@synthesize processingFlags=_processingFlags - In the implementation block
@property (nonatomic,retain) NSDate * time; 
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (assign,nonatomic) SCD_Struct_BW36 presentationTimeStamp; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSDate *)time;
-(void)setTime:(NSDate *)arg1 ;
-(SCD_Struct_BW36)presentationTimeStamp;
-(unsigned)processingFlags;
-(NSString *)photoIdentifier;
-(id)initWithPhotoIdentifier:(id)arg1 processingFlags:(unsigned)arg2 ;
-(void)setPresentationTimeStamp:(SCD_Struct_BW36)arg1 ;
-(id)initWithPhotoIdentifier:(id)arg1 processingFlags:(unsigned)arg2 time:(id)arg3 timeZone:(id)arg4 presentationTimeStamp:(SCD_Struct_BW36)arg5 ;
@end

