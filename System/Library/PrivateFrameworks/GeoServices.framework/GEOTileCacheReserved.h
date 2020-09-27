/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOTileCacheReserved : NSObject {

	mutex _reservedLock;
	list<CacheItem, std::__1::allocator<CacheItem> >* _reservedList;
	unordered_map<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>, hashkey, eqkey, std::__1::allocator<std::__1::pair<const _GEOTileKey, std::__1::__list_iterator<CacheItem, void *> > > >* _reservedMap;
	unsigned long long _reservedMaxCapacity;
	unsigned long long _reservedMaxCost;
	unsigned long long _reservedCurrentCost;
	unsigned long long _reservedCurrentCount;

}
-(void)dealloc;
@end
