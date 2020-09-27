/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureSynchronizedDataInternal;

@interface AVCaptureSynchronizedData : NSObject {

	AVCaptureSynchronizedDataInternal* _synchronizedDataInternal;

}

@property (readonly) SCD_Struct_AV0 timestamp; 
+(void)initialize;
-(void)dealloc;
-(SCD_Struct_AV0)timestamp;
-(void)setAdjustedTimestamp:(SCD_Struct_AV0)arg1 ;
-(SCD_Struct_AV0)adjustedTimestamp;
-(BOOL)hasCorrespondingDepthData;
-(id)_initWithTimestamp:(SCD_Struct_AV0)arg1 ;
@end
