/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNLocationHistoryProvider;
@class NSArray;

@interface MNLocationHistory : NSObject {

	id<MNLocationHistoryProvider> _locationHistoryProvider;

}

@property (nonatomic,retain) id<MNLocationHistoryProvider> locationHistoryProvider;              //@synthesize locationHistoryProvider=_locationHistoryProvider - In the implementation block
@property (readonly) NSArray * locationHistory; 
-(id)init;
-(NSArray *)locationHistory;
-(id<MNLocationHistoryProvider>)locationHistoryProvider;
-(void)setLocationHistoryProvider:(id<MNLocationHistoryProvider>)arg1 ;
@end
