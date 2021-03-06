/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPaperWash : CIFilter {

	CIImage* inputImage;
	NSNumber* inputSaturation;
	NSNumber* inputGreyscale;

}

@property (nonatomic,copy) NSNumber * inputSaturation; 
@property (nonatomic,copy) NSNumber * inputGreyscale; 
+(id)customAttributes;
-(id)outputImage;
-(NSNumber *)inputSaturation;
-(void)setInputSaturation:(NSNumber *)arg1 ;
-(NSNumber *)inputGreyscale;
-(void)setInputGreyscale:(NSNumber *)arg1 ;
@end

