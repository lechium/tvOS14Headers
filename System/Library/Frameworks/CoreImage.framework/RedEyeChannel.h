/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface RedEyeChannel : CIFilter {

	CIImage* inputImage;
	NSNumber* inputChannel;
	NSNumber* inputParam1;
	NSNumber* inputParam2;
	NSNumber* inputParam3;
	NSNumber* inputParam4;

}
-(id)outputImage;
-(id)filterNameForChannel:(int)arg1 ;
-(id)parameterNamesForChannel:(int)arg1 ;
@end

