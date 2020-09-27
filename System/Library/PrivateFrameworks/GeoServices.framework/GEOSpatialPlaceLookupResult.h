/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface GEOSpatialPlaceLookupResult : NSObject {

	NSMapTable* _parametersToMapItemsMap;
	NSMapTable* _parametersToResultItemMap;

}
-(id)init;
-(id)initWithMapItemMap:(id)arg1 resultItemMap:(id)arg2 ;
-(id)mapItemsForSpatialLookupParameters:(id)arg1 ;
-(id)resultItemForSpatialLookupParameters:(id)arg1 ;
@end
