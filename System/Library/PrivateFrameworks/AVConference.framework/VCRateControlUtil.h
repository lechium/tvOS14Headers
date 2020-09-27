/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCRateControlUtil : NSObject
+(BOOL)prepareOWRDList:(SCD_Struct_VC56*)arg1 owrd:(double)arg2 time:(double)arg3 config:(VCRateControlAlgorithmConfig*)arg4 ;
+(void)calculateNOWRDWithOWRDList:(SCD_Struct_VC56*)arg1 config:(VCRateControlAlgorithmConfig*)arg2 isInitialRampUp:(BOOL)arg3 ;
+(void)calculateNOWRDShortWithOWRDList:(SCD_Struct_VC56*)arg1 config:(VCRateControlAlgorithmConfig*)arg2 isInitialRampUp:(BOOL)arg3 ;
+(void)calculateNOWRDAccWithOWRDList:(SCD_Struct_VC56*)arg1 config:(VCRateControlAlgorithmConfig*)arg2 ;
+(double)calculateNOWRDWithDuration:(double)arg1 owrdList:(SCD_Struct_VC56*)arg2 historySize:(unsigned)arg3 minHistorySize:(unsigned)arg4 initalRampUpReadyDuration:(double)arg5 isInitialRampUp:(BOOL)arg6 ;
+(BOOL)calculateCongestionMetricsFromOWRDList:(SCD_Struct_VC56*)arg1 owrd:(double)arg2 time:(double)arg3 config:(VCRateControlAlgorithmConfig*)arg4 isInitialRampUp:(BOOL)arg5 ;
@end
