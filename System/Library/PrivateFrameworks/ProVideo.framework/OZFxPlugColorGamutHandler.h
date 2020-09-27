/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PROAPIObject.h>
#import <libobjc.A.dylib/FxColorGamutAPI.h>

@class NSString;

@interface OZFxPlugColorGamutHandler : NSObject <PROAPIObject, FxColorGamutAPI> {

	OZFxPlugSharedBase* sharedBase;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)colorMatrixFromDesiredRGBToYCbCrAtTime:(/*function pointer*/void**)arg1 ;
-(id)colorMatrixFromYCbCrToDesiredRGBAtTime:(/*function pointer*/void**)arg1 ;
-(unsigned long long)colorPrimaries;
-(id)pcFloat33MatrixToFxMatrix44:(const float*)arg1 ;
-(id)colorMatrixFromDesiredRGBToYCbCr;
-(id)colorMatrixFromYCbCrToDesiredRGB;
-(id)initWithPlugin:(OZFxPlugSharedBase*)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 version:(unsigned)arg2 ;
@end
