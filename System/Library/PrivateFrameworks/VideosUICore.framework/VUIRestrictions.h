/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VUIRestrictions : NSObject

@property (nonatomic,readonly) BOOL allowsShowingUndownloadedTVShows; 
@property (nonatomic,readonly) BOOL allowsShowingUndownloadedMovies; 
@property (nonatomic,readonly) BOOL allowsDAUMetricCollection; 
+(id)sharedInstance;
-(BOOL)allowsShowingUndownloadedTVShows;
-(BOOL)allowsShowingUndownloadedMovies;
-(BOOL)allowsDAUMetricCollection;
@end

