/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, CIVector, NSNumber;

@interface RAWTemperatureAdjust : RAWFilter {

	CIImage* inputImage;
	CIVector* inputWhitePoint;
	NSNumber* inputExposure;
	NSNumber* inputVersion;
	CIVector* defaultWhitePoint;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)customAttributes;
-(id)customAttributes;
-(id)outputImage;
-(void)setInputExposure:(id)arg1 ;
-(id)outputMatrix;
-(void)setInputWhitePoint:(id)arg1 ;
@end

