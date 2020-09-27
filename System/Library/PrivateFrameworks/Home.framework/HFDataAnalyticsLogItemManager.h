/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@protocol HFMediaProfileContainer;
@class HFDataAnalyticsModule;

@interface HFDataAnalyticsLogItemManager : HFItemManager {

	id<HFMediaProfileContainer> _mediaProfileContainer;
	HFDataAnalyticsModule* _dataAnalyticsModule;

}

@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;              //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,readonly) HFDataAnalyticsModule * dataAnalyticsModule;                    //@synthesize dataAnalyticsModule=_dataAnalyticsModule - In the implementation block
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(HFDataAnalyticsModule *)dataAnalyticsModule;
-(id)initWithMediaProfileContainer:(id)arg1 delegate:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
@end
