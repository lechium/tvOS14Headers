/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOServiceRequestDefaultConfig.h>
#import <libobjc.A.dylib/GEOServiceRequestConfiguring.h>

@class NSNumber, GEODirectionsRequest, NSString;

@interface GEODirectionsRequestConfig : GEOServiceRequestDefaultConfig <GEOServiceRequestConfiguring> {

	NSNumber* _requestPriority;
	GEODirectionsRequest* _request;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)multipathServiceType;
-(unsigned long long)urlType;
-(SCD_Struct_GE86)dataRequestKindForRequest:(id)arg1 traits:(id)arg2 ;
-(id)additionalURLQueryItems;
-(id)additionalHTTPHeaders;
-(id)serviceTypeNumber;
-(id)additionalStatesForNetworkEvent;
-(id)initWithRequest:(id)arg1 requestPriority:(id)arg2 ;
@end

