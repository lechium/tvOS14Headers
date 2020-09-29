/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:34 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/ASDAppQueryResultsObserver.h>

@interface AppStoreKit.DeviceAppStateDataSource : NSObject <ASDAppQueryResultsObserver> {

	 appQuery;
	 store;
	 delegate;
	 accessQueue;
	 queryQueue;
	 expectedAppStates;
	 previouslyInstalledLibraryItems;
	 availableUpdatesCache;

}
-(id)init;
-(void)dealloc;
-(void)appQuery:(id)arg1 resultsDidChange:(id)arg2 ;
-(void)didReceiveUpdateFromProductPage:(id)arg1 ;
@end

