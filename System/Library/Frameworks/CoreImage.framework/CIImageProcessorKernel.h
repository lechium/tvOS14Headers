/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIImageProcessorKernel : NSObject
+(int)outputFormat;
+(id)applyWithExtent:(CGRect)arg1 inputs:(id)arg2 arguments:(id)arg3 error:(id*)arg4 ;
+(CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(CGRect)arg3 ;
+(BOOL)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4 ;
+(BOOL)synchronizeInputs;
+(BOOL)canReduceOutputChannels;
+(int)formatForInputAtIndex:(int)arg1 ;
+(BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1 ;
+(BOOL)allowSRGBTranferFuntionOnOutput;
+(BOOL)outputIsOpaque;
+(BOOL)allowPartialOutputRegion;
+(BOOL)skipFormatChecks;
+(unsigned long long)_digestForArgs:(id)arg1 ;
@end

