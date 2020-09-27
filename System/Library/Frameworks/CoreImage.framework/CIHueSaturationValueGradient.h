/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class NSNumber;

@interface CIHueSaturationValueGradient : CIFilter {

	NSNumber* inputValue;
	NSNumber* inputRadius;
	NSNumber* inputSoftness;
	NSNumber* inputDither;
	id inputColorSpace;

}

@property (nonatomic,retain) NSNumber * inputValue; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputSoftness; 
@property (nonatomic,retain) NSNumber * inputDither; 
@property (nonatomic,retain) id inputColorSpace; 
+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(id)inputColorSpace;
-(void)setInputColorSpace:(id)arg1 ;
-(NSNumber *)inputSoftness;
-(void)setInputSoftness:(NSNumber *)arg1 ;
-(NSNumber *)inputDither;
-(void)setInputDither:(NSNumber *)arg1 ;
-(id)_kernelD;
-(NSNumber *)inputValue;
-(void)setInputValue:(NSNumber *)arg1 ;
@end
