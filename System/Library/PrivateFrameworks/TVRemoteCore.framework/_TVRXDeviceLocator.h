/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteCore/_TVRXDeviceQueryDelegate.h>

@class _TVRXDeviceQuery, NSMutableDictionary, NSString;

@interface _TVRXDeviceLocator : NSObject <_TVRXDeviceQueryDelegate> {

	_TVRXDeviceQuery* _query;
	NSMutableDictionary* _searches;

}

@property (nonatomic,retain) _TVRXDeviceQuery * query;                    //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * searches;              //@synthesize searches=_searches - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(_TVRXDeviceQuery *)query;
-(void)setQuery:(_TVRXDeviceQuery *)arg1 ;
-(NSMutableDictionary *)searches;
-(void)setSearches:(NSMutableDictionary *)arg1 ;
-(void)_timerExpired:(id)arg1 ;
-(void)deviceQueryDidUpdateDevices:(id)arg1 ;
-(void)findDeviceWithIdentifier:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelSearchForDeviceWithIdentifier:(id)arg1 ;
@end

