/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray;

@interface RadioRecentStationsController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _hasRefreshed;
	BOOL _hasValidStationGroups;
	NSMutableArray* _pendingRecentStations;
	NSArray* _serverRecentStationGroups;
	NSArray* _stationGroups;

}

@property (nonatomic,copy,readonly) NSArray * stationGroups; 
@property (nonatomic,copy,readonly) NSArray * stations; 
-(id)init;
-(NSArray *)stations;
-(NSArray *)stationGroups;
-(id)_newRecentStationsRequest;
-(void)_handleRecentStationsResponse:(id)arg1 fromRequest:(id)arg2 pendingRecentStations:(id)arg3 isInitialCacheLoad:(BOOL)arg4 ;
-(void)_createStationGroups;
-(void)_insertPendingRecentStation:(id)arg1 ;
-(void)_postStationsDidChangeNotification;
-(void)insertPendingRecentStation:(id)arg1 ;
-(void)insertPendingRecentStationDictionary:(id)arg1 ;
-(void)refreshWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removePendingRecentStation:(id)arg1 ;
@end

