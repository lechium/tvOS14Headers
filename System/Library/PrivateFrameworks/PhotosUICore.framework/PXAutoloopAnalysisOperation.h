/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:55 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Foundation/NSOperation.h>

@class NSDictionary, PLLivePhotoEditSource, NSProgress, NSError, NSNumber;

@interface PXAutoloopAnalysisOperation : NSOperation {

	NSDictionary* _recipesByVariationType;
	BOOL _succeeded;
	PLLivePhotoEditSource* _editSource;
	NSProgress* _progress;
	NSError* _error;
	NSNumber* _duration;
	NSDictionary* _analysisResult;

}

@property (nonatomic,readonly) PLLivePhotoEditSource * editSource;              //@synthesize editSource=_editSource - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                           //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL succeeded;                                  //@synthesize succeeded=_succeeded - In the implementation block
@property (nonatomic,readonly) NSNumber * duration;                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSDictionary * analysisResult;                   //@synthesize analysisResult=_analysisResult - In the implementation block
-(id)init;
-(NSError *)error;
-(void)cancel;
-(void)_timeout;
-(NSProgress *)progress;
-(void)main;
-(NSNumber *)duration;
-(BOOL)succeeded;
-(PLLivePhotoEditSource *)editSource;
-(id)initWithEditSource:(id)arg1 ;
-(id)recipeForVariationType:(long long)arg1 ;
-(NSDictionary *)analysisResult;
@end

