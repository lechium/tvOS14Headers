/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:49 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNTrackingRequest.h>

@interface VNTrackObjectRequest : VNTrackingRequest {

	CGSize _trackingFrameSizeInPixels;

}

@property (assign,nonatomic) CGSize trackingFrameSizeInPixels;              //@synthesize trackingFrameSizeInPixels=_trackingFrameSizeInPixels - In the implementation block
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(const SCD_Struct_VN2*)revisionAvailability;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
+(unsigned)frameCVPixelBufferFormatForRequestRevision:(unsigned long long)arg1 ;
+(id)trackerTypeForRequestRevision:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 ;
-(id)_trackingLevelOptionFromTrackingLevelEnum;
-(void)setTrackingLevel:(unsigned long long)arg1 ;
-(id)initWithDetectedObjectObservation:(id)arg1 ;
-(id)initWithDetectedObjectObservation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setTrackingFrameSizeInPixels:(CGSize)arg1 ;
-(CGSize)trackingFrameSizeInPixels;
@end

