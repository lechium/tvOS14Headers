/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol MTMediaPlaylistItem <NSObject>
@property (nonatomic,readonly) unsigned long long startOverallPosition; 
@property (nonatomic,readonly) unsigned long long overallPosition; 
@property (nonatomic,readonly) unsigned long long startPosition; 
@property (nonatomic,readonly) NSArray * eventData; 
@optional
-(unsigned long long)startPosition;
-(NSArray *)eventData;
-(unsigned long long)startOverallPosition;
-(unsigned long long)overallPosition;

@end

