/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOComposedRouteTransitSection <NSObject>
@property (nonatomic,readonly) SCD_Struct_GE87 fromNodeID; 
@property (nonatomic,readonly) SCD_Struct_GE87 toNodeID; 
@property (nonatomic,readonly) unsigned long long lineID; 
@property (nonatomic,readonly) BOOL isTransfer; 
@property (nonatomic,readonly) int toNodeSignificance; 
@required
-(unsigned long long)lineID;
-(BOOL)isTransfer;
-(SCD_Struct_GE87)fromNodeID;
-(SCD_Struct_GE87)toNodeID;
-(int)toNodeSignificance;

@end

